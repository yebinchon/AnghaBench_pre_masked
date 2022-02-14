
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int bool_t ;
typedef int XDRPROC_T_TYPE ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char**,int ,int ) ;

bool_t
FUNC_4(register XDR *VAR_4, char **VAR_5, u_int VAR_6, XDRPROC_T_TYPE VAR_7)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_pointer:");

  bool_t VAR_8;

  VAR_8 = (*VAR_5 != ((void*)0));
  if (!FUNC_2(VAR_4, &VAR_8)) {
    return (VAR_1);
  }
  if (!VAR_8) {
    *VAR_5 = ((void*)0);
    return (VAR_2);
  }

  return (FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7));
}
