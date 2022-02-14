
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int (* free ) (struct _ohash_record*,int ) ;struct _ohash_record* (* calloc ) (size_t,int,int ) ;} ;
struct ohash {int deleted; int total; unsigned int size; struct _ohash_record* t; TYPE_1__ info; } ;
struct _ohash_record {size_t hv; int * p; } ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 struct _ohash_record* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (struct _ohash_record*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ohash *VAR_5)
{
 struct _ohash_record *VAR_6;
 size_t VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9, VAR_10;

 if (4 * VAR_5->deleted < VAR_5->total) {
  if (VAR_5->size >= (VAR_4 >> 1U))
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_5->size << 1U;
 } else if (3 * VAR_5->deleted > 2 * VAR_5->total)
  VAR_7 = VAR_5->size >> 1U;
 else
  VAR_7 = VAR_5->size;
 if (VAR_7 < VAR_1)
  VAR_7 = VAR_1;





 VAR_6 = (VAR_5->info.calloc)(VAR_7, sizeof(struct _ohash_record), VAR_5->info.data);
 if (!VAR_6)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_5->size; VAR_8++) {
  if (VAR_5->t[VAR_8].p != ((void*)0) && VAR_5->t[VAR_8].p != VAR_0) {
   VAR_9 = VAR_5->t[VAR_8].hv % VAR_7;
   VAR_10 = ((VAR_5->t[VAR_8].hv % (VAR_7 - 2)) & ~1) + 1;
   while (VAR_6[VAR_9].p != ((void*)0)) {
    VAR_9 += VAR_10;
    if (VAR_9 >= VAR_7)
     VAR_9 -= VAR_7;
   }
   VAR_6[VAR_9].hv = VAR_5->t[VAR_8].hv;
   VAR_6[VAR_9].p = VAR_5->t[VAR_8].p;
  }
 }
 (VAR_5->info.free)(VAR_5->t, VAR_5->info.data);
 VAR_5->t = VAR_6;
 VAR_5->size = VAR_7;
 VAR_5->total -= VAR_5->deleted;
 VAR_5->deleted = 0;
}
