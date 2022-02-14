
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int rpcbs_addrlist_ptr ;
typedef int rpcbs_addrlist ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char**,int,int ) ;
 scalar_t__ VAR_2 ;

bool_t
FUNC_1(XDR *VAR_3, rpcbs_addrlist_ptr *VAR_4)
{
 if (!FUNC_0(VAR_3, (char **)VAR_4, sizeof (rpcbs_addrlist),
   (xdrproc_t)VAR_2)) {
  return (VAR_0);
 }
 return (VAR_1);
}
