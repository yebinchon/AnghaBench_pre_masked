
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct page *VAR_2, struct mm_struct *VAR_3,
    unsigned int VAR_4)
{
 if (VAR_4 & VAR_0) {
  FUNC_2(&VAR_3->mmap_sem);
  if (VAR_4 & VAR_1)
   FUNC_4(VAR_2);
  else
   FUNC_3(VAR_2);
  return 0;
 } else {
  if (VAR_4 & VAR_1) {
   int VAR_5;

   VAR_5 = FUNC_1(VAR_2);
   if (VAR_5) {
    FUNC_2(&VAR_3->mmap_sem);
    return 0;
   }
  } else
   FUNC_0(VAR_2);
  return 1;
 }
}
