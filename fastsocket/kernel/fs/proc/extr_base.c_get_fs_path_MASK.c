
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct fs_struct* fs; } ;
struct path {int dummy; } ;
struct fs_struct {int lock; struct path pwd; struct path root; } ;


 int VAR_0 ;
 int FUNC_0 (struct path*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_1, struct path *VAR_2, bool VAR_3)
{
 struct fs_struct *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_3(VAR_1);
 VAR_4 = VAR_1->fs;
 if (VAR_4) {
  FUNC_1(&VAR_4->lock);
  *VAR_2 = VAR_3 ? VAR_4->root : VAR_4->pwd;
  FUNC_0(VAR_2);
  FUNC_2(&VAR_4->lock);
  VAR_5 = 0;
 }
 FUNC_4(VAR_1);
 return VAR_5;
}
