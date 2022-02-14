
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int fasync_list; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct socket *VAR_4, int VAR_5, int VAR_6)
{
 if (!VAR_4 || !VAR_4->fasync_list)
  return -1;
 switch (VAR_5) {
 case 128:
  if (FUNC_2(VAR_3, &VAR_4->flags))
   break;
  goto call_kill;
 case 130:
  if (!FUNC_1(VAR_2, &VAR_4->flags))
   break;

 case 131:
call_kill:
  FUNC_0(VAR_4->fasync_list, VAR_0, VAR_6);
  break;
 case 129:
  FUNC_0(VAR_4->fasync_list, VAR_1, VAR_6);
 }
 return 0;
}
