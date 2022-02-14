
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voidp ;
typedef int u_long ;
struct rpc_msg {int dummy; } ;
typedef int enum_t ;
typedef int (* XDRPROC_T_TYPE ) (int *,int ) ;
typedef int XDR ;
typedef int AUTH ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct rpc_msg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int ) ;

int
FUNC_7(char *VAR_2, int VAR_3, u_long VAR_4, struct rpc_msg *VAR_5, voidp VAR_6, XDRPROC_T_TYPE VAR_7, AUTH *VAR_8)
{
  XDR VAR_9;
  int VAR_10;






  enum_t VAR_11 = (enum_t) VAR_4;

  FUNC_6(&VAR_9, VAR_2, VAR_3, VAR_1);




  if (!FUNC_2(&VAR_9, VAR_5))
    return -VAR_0;




  if (!FUNC_4(&VAR_9, &VAR_11))
    return -VAR_0;




  if (!FUNC_0(VAR_8, &VAR_9))
    return -VAR_0;




  if (!(*VAR_7) (&VAR_9, VAR_6))
    return -VAR_0;




  VAR_10 = FUNC_5(&VAR_9);




  FUNC_3(&VAR_9);

  return VAR_10;
}
