
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_record {int page_size; int samples; } ;
struct perf_mmap {unsigned int prev; unsigned char* base; unsigned int mask; } ;


 unsigned int FUNC_0 (struct perf_mmap*) ;
 int FUNC_1 (struct perf_mmap*,unsigned int) ;
 scalar_t__ FUNC_2 (struct perf_record*,void*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct perf_record *VAR_0,
       struct perf_mmap *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = VAR_1->prev;
 unsigned char *VAR_4 = VAR_1->base + VAR_0->page_size;
 unsigned long VAR_5;
 void *VAR_6;
 int VAR_7 = 0;

 if (VAR_3 == VAR_2)
  return 0;

 VAR_0->samples++;

 VAR_5 = VAR_2 - VAR_3;

 if ((VAR_3 & VAR_1->mask) + VAR_5 != (VAR_2 & VAR_1->mask)) {
  VAR_6 = &VAR_4[VAR_3 & VAR_1->mask];
  VAR_5 = VAR_1->mask + 1 - (VAR_3 & VAR_1->mask);
  VAR_3 += VAR_5;

  if (FUNC_2(VAR_0, VAR_6, VAR_5) < 0) {
   VAR_7 = -1;
   goto out;
  }
 }

 VAR_6 = &VAR_4[VAR_3 & VAR_1->mask];
 VAR_5 = VAR_2 - VAR_3;
 VAR_3 += VAR_5;

 if (FUNC_2(VAR_0, VAR_6, VAR_5) < 0) {
  VAR_7 = -1;
  goto out;
 }

 VAR_1->prev = VAR_3;
 FUNC_1(VAR_1, VAR_3);

out:
 return VAR_7;
}
