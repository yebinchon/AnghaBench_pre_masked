
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int exec_mtx; int exec_head; int taskqueue; int draining; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct workqueue_struct* FUNC_2 (int,int) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (char const*,int,int ,int *) ;
 int FUNC_5 (int *,int,int ,char*,char const*) ;
 int VAR_5 ;

struct workqueue_struct *
FUNC_6(const char *VAR_6, int VAR_7)
{
 struct workqueue_struct *VAR_8;




 if (VAR_7 == 0)
  VAR_7 = VAR_4;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1 | VAR_2);
 VAR_8->taskqueue = FUNC_4(VAR_6, VAR_1,
     VAR_5, &VAR_8->taskqueue);
 FUNC_1(&VAR_8->draining, 0);
 FUNC_5(&VAR_8->taskqueue, VAR_7, VAR_3, "%s", VAR_6);
 FUNC_0(&VAR_8->exec_head);
 FUNC_3(&VAR_8->exec_mtx, "linux_wq_exec", ((void*)0), VAR_0);

 return (VAR_8);
}
