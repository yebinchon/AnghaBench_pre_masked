
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nfsftype ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;

bool_t
FUNC_3(XDR *VAR_4, nfsftype *VAR_5)
{
  enum_t VAR_6 = *VAR_5;

  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_ftype:");

  if (!FUNC_2(VAR_4, &VAR_6)) {
    return (VAR_1);
  }
  return (VAR_2);
}
