
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void page ;
struct address_space {int page_tree; } ;
typedef int pgoff_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (void*) ;
 void** FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

struct page *FUNC_9(struct address_space *VAR_0, pgoff_t VAR_1)
{
 void **VAR_2;
 struct page *VAR_3;

 FUNC_6();
repeat:
 VAR_3 = ((void*)0);
 VAR_2 = FUNC_5(&VAR_0->page_tree, VAR_1);
 if (VAR_2) {
  VAR_3 = FUNC_3(VAR_2);
  if (FUNC_8(!VAR_3))
   goto out;
  if (FUNC_4(VAR_3)) {
   if (FUNC_2(VAR_3))
    goto repeat;





   goto out;
  }
  if (!FUNC_0(VAR_3))
   goto repeat;






  if (FUNC_8(VAR_3 != *VAR_2)) {
   FUNC_1(VAR_3);
   goto repeat;
  }
 }
out:
 FUNC_7();

 return VAR_3;
}
