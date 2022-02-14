
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_3__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct mm_struct*,unsigned long,int,int,int ,struct page**,int *) ;
 int FUNC_2 (int *) ;

int __attribute__((weak)) FUNC_3(unsigned long VAR_1,
    int VAR_2, int VAR_3, struct page **VAR_4)
{
 struct mm_struct *VAR_5 = VAR_0->mm;
 int VAR_6;

 FUNC_0(&VAR_5->mmap_sem);
 VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_1, VAR_2,
     VAR_3, 0, VAR_4, ((void*)0));
 FUNC_2(&VAR_5->mmap_sem);

 return VAR_6;
}
