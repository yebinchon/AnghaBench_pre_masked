
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct kimage {unsigned long control_page; unsigned long nr_segments; TYPE_1__* segment; } ;
struct TYPE_4__ {unsigned long end; } ;
struct TYPE_3__ {unsigned long mem; unsigned long memsz; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 struct page* FUNC_0 (unsigned long) ;

__attribute__((used)) static struct page *FUNC_1(struct kimage *VAR_3,
            unsigned int VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 struct page *VAR_8;

 VAR_8 = ((void*)0);
 VAR_7 = (1 << VAR_4) << VAR_1;
 VAR_5 = (VAR_3->control_page + (VAR_7 - 1)) & ~(VAR_7 - 1);
 VAR_6 = VAR_5 + VAR_7 - 1;
 while (VAR_6 <= VAR_2.end) {
  unsigned long VAR_9;

  if (VAR_6 > VAR_0)
   break;
  if (VAR_6 > VAR_2.end)
   break;

  for (VAR_9 = 0; VAR_9 < VAR_3->nr_segments; VAR_9++) {
   unsigned long VAR_10, VAR_11;

   VAR_10 = VAR_3->segment[VAR_9].mem;
   VAR_11 = VAR_10 + VAR_3->segment[VAR_9].memsz - 1;
   if ((VAR_6 >= VAR_10) && (VAR_5 <= VAR_11)) {

    VAR_5 = (VAR_11 + (VAR_7 - 1)) & ~(VAR_7 - 1);
    VAR_6 = VAR_5 + VAR_7 - 1;
    break;
   }
  }

  if (VAR_9 == VAR_3->nr_segments) {
   VAR_8 = FUNC_0(VAR_5 >> VAR_1);
   break;
  }
 }
 if (VAR_8)
  VAR_3->control_page = VAR_6;

 return VAR_8;
}
