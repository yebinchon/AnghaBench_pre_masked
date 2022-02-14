
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; } ;
union perf_event {TYPE_1__ header; } ;
struct perf_mmap {unsigned int prev; unsigned char* base; int mask; } ;
struct perf_evlist {scalar_t__ overwrite; union perf_event event_copy; struct perf_mmap* mmap; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*,unsigned char*,unsigned int) ;
 unsigned int FUNC_2 (int,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_3 (struct perf_mmap*) ;
 int FUNC_4 (struct perf_mmap*,unsigned int) ;
 int VAR_1 ;

union perf_event *FUNC_5(struct perf_evlist *VAR_2, int VAR_3)
{
 struct perf_mmap *VAR_4 = &VAR_2->mmap[VAR_3];
 unsigned int VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6 = VAR_4->prev;
 unsigned char *VAR_7 = VAR_4->base + VAR_0;
 union perf_event *VAR_8 = ((void*)0);

 if (VAR_2->overwrite) {
  int VAR_9 = VAR_5 - VAR_6;
  if (VAR_9 > VAR_4->mask / 2 || VAR_9 < 0) {
   FUNC_0(VAR_1, "WARNING: failed to keep up with mmap data.\n");




   VAR_6 = VAR_5;
  }
 }

 if (VAR_6 != VAR_5) {
  size_t VAR_10;

  VAR_8 = (union perf_event *)&VAR_7[VAR_6 & VAR_4->mask];
  VAR_10 = VAR_8->header.size;





  if ((VAR_6 & VAR_4->mask) + VAR_10 != ((VAR_6 + VAR_10) & VAR_4->mask)) {
   unsigned int VAR_11 = VAR_6;
   unsigned int VAR_12 = FUNC_2(sizeof(*VAR_8), VAR_10), VAR_13;
   void *VAR_14 = &VAR_2->event_copy;

   do {
    VAR_13 = FUNC_2(VAR_4->mask + 1 - (VAR_11 & VAR_4->mask), VAR_12);
    FUNC_1(VAR_14, &VAR_7[VAR_11 & VAR_4->mask], VAR_13);
    VAR_11 += VAR_13;
    VAR_14 += VAR_13;
    VAR_12 -= VAR_13;
   } while (VAR_12);

   VAR_8 = &VAR_2->event_copy;
  }

  VAR_6 += VAR_10;
 }

 VAR_4->prev = VAR_6;

 if (!VAR_2->overwrite)
  FUNC_4(VAR_4, VAR_6);

 return VAR_8;
}
