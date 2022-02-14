
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_ops; } ;
struct task_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {int (* access ) (struct vm_area_struct*,unsigned long,void*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,struct page*,unsigned long,void*,void*,int) ;
 int FUNC_1 (struct vm_area_struct*,struct page*,unsigned long,void*,void*,int) ;
 int FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (struct task_struct*,struct mm_struct*,unsigned long,int,int,int,struct page**,struct vm_area_struct**) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long,void*,int,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct task_struct *VAR_1, struct mm_struct *VAR_2,
  unsigned long VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
 struct vm_area_struct *VAR_7;
 void *VAR_8 = VAR_4;

 FUNC_2(&VAR_2->mmap_sem);

 while (VAR_5) {
  int VAR_9, VAR_10, VAR_11;
  void *VAR_12;
  struct page *VAR_13 = ((void*)0);

  VAR_10 = FUNC_4(VAR_1, VAR_2, VAR_3, 1,
    VAR_6, 1, &VAR_13, &VAR_7);
  if (VAR_10 <= 0) {
    break;
   VAR_9 = VAR_10;
  } else {
   VAR_9 = VAR_5;
   VAR_11 = VAR_3 & (VAR_0-1);
   if (VAR_9 > VAR_0-VAR_11)
    VAR_9 = VAR_0-VAR_11;

   VAR_12 = FUNC_5(VAR_13);
   if (VAR_6) {
    FUNC_1(VAR_7, VAR_13, VAR_3,
        VAR_12 + VAR_11, VAR_4, VAR_9);
    FUNC_8(VAR_13);
   } else {
    FUNC_0(VAR_7, VAR_13, VAR_3,
          VAR_4, VAR_12 + VAR_11, VAR_9);
   }
   FUNC_6(VAR_13);
   FUNC_7(VAR_13);
  }
  VAR_5 -= VAR_9;
  VAR_4 += VAR_9;
  VAR_3 += VAR_9;
 }
 FUNC_10(&VAR_2->mmap_sem);

 return VAR_4 - VAR_8;
}
