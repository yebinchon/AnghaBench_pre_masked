
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void page ;
struct address_space {int page_tree; } ;
typedef unsigned int pgoff_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 void* FUNC_4 (void**) ;
 scalar_t__ FUNC_5 (void*) ;
 unsigned int FUNC_6 (int *,void***,int *,unsigned int,unsigned int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

unsigned FUNC_10(struct address_space *VAR_0, pgoff_t VAR_1,
       unsigned int VAR_2, struct page **VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;

 FUNC_7();
restart:
 VAR_6 = FUNC_6(&VAR_0->page_tree,
    (void ***)VAR_3, ((void*)0), VAR_1, VAR_2);
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  struct page *VAR_7;
repeat:
  VAR_7 = FUNC_4((void **)VAR_3[VAR_4]);
  if (FUNC_9(!VAR_7))
   continue;

  if (FUNC_5(VAR_7)) {
   if (FUNC_3(VAR_7)) {





    FUNC_0(VAR_1 | VAR_4);
    goto restart;
   }





   continue;
  }

  if (!FUNC_1(VAR_7))
   goto repeat;


  if (FUNC_9(VAR_7 != *((void **)VAR_3[VAR_4]))) {
   FUNC_2(VAR_7);
   goto repeat;
  }

  VAR_3[VAR_5] = VAR_7;
  VAR_5++;
 }
 FUNC_8();
 return VAR_5;
}
