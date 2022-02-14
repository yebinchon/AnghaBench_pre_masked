
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u_int32_t ;
typedef int u_char ;
typedef int token_t ;
typedef int pid_t ;
typedef int gid_t ;
struct TYPE_3__ {int machine; int port; } ;
typedef TYPE_1__ au_tid_t ;
typedef int au_id_t ;
typedef int au_asid_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;

token_t *
FUNC_4(au_id_t VAR_1, uid_t VAR_2, gid_t VAR_3, uid_t VAR_4, gid_t VAR_5,
    pid_t VAR_6, au_asid_t VAR_7, au_tid_t *VAR_8)
{
 token_t *VAR_9;
 u_char *VAR_10 = ((void*)0);

 FUNC_3(VAR_9, VAR_10, sizeof(u_char) + 9 * sizeof(u_int32_t));
 if (VAR_9 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_10, VAR_0);
 FUNC_2(VAR_10, VAR_1);
 FUNC_2(VAR_10, VAR_2);
 FUNC_2(VAR_10, VAR_3);
 FUNC_2(VAR_10, VAR_4);
 FUNC_2(VAR_10, VAR_5);
 FUNC_2(VAR_10, VAR_6);
 FUNC_2(VAR_10, VAR_7);
 FUNC_2(VAR_10, VAR_8->port);
 FUNC_0(VAR_10, &VAR_8->machine, sizeof(u_int32_t));

 return (VAR_9);
}
