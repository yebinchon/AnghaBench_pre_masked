
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct files_struct* files; } ;
struct files_struct {int count; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 struct files_struct* FUNC_1 (struct files_struct*,int*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2, struct task_struct * VAR_3)
{
 struct files_struct *VAR_4, *VAR_5;
 int VAR_6 = 0;




 VAR_4 = VAR_1->files;
 if (!VAR_4)
  goto out;

 if (VAR_2 & VAR_0) {
  FUNC_0(&VAR_4->count);
  goto out;
 }

 VAR_5 = FUNC_1(VAR_4, &VAR_6);
 if (!VAR_5)
  goto out;

 VAR_3->files = VAR_5;
 VAR_6 = 0;
out:
 return VAR_6;
}
