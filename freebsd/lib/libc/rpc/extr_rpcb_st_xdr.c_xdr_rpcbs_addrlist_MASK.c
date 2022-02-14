
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct rpcbs_addrlist {int dummy; } ;
struct TYPE_3__ {struct rpcbs_addrlist* next; int netid; int failure; int success; int vers; int prog; } ;
typedef TYPE_1__ rpcbs_addrlist ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char**,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;

bool_t
FUNC_5(XDR *VAR_3, rpcbs_addrlist *VAR_4)
{
 struct rpcbs_addrlist **VAR_5;

     if (!FUNC_2(VAR_3, &VAR_4->prog)) {
  return (VAR_0);
     }
     if (!FUNC_3(VAR_3, &VAR_4->vers)) {
  return (VAR_0);
     }
     if (!FUNC_0(VAR_3, &VAR_4->success)) {
  return (VAR_0);
     }
     if (!FUNC_0(VAR_3, &VAR_4->failure)) {
  return (VAR_0);
     }
     if (!FUNC_4(VAR_3, &VAR_4->netid, VAR_1)) {
  return (VAR_0);
     }

     VAR_5 = &VAR_4->next;

     if (!FUNC_1(VAR_3, (char **) VAR_5,
   sizeof (rpcbs_addrlist),
   (xdrproc_t)FUNC_5)) {
  return (VAR_0);
     }

 return (VAR_2);
}
