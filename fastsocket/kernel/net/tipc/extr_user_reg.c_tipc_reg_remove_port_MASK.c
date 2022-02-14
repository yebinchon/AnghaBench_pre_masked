
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_port {scalar_t__ user_ref; int uport_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

int FUNC_3(struct user_port *VAR_5)
{
 if (VAR_5->user_ref == 0)
  return 0;
 if (VAR_5->user_ref > VAR_2)
  return -VAR_0;
 if (!VAR_4 )
  return -VAR_1;

 FUNC_1(&VAR_3);
 FUNC_0(&VAR_5->uport_list);
 FUNC_2(&VAR_3);
 return 0;
}
