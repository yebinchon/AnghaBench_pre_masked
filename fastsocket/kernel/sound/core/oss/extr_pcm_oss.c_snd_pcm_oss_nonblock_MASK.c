
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_lock; int f_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file * VAR_1)
{
 FUNC_0(&VAR_1->f_lock);
 VAR_1->f_flags |= VAR_0;
 FUNC_1(&VAR_1->f_lock);
 return 0;
}
