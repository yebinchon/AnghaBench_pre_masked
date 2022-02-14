
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mountlist ;
typedef int mountbody ;
typedef int bool_t ;
typedef int XDRPROC_T_TYPE ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,char**,int,int ) ;

bool_t
FUNC_3(XDR *VAR_5, mountlist *VAR_6)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_mountlist:");

  if (!FUNC_2(VAR_5, (char **) VAR_6, sizeof(mountbody), (XDRPROC_T_TYPE) VAR_4)) {
    return (VAR_1);
  }
  return (VAR_2);
}
