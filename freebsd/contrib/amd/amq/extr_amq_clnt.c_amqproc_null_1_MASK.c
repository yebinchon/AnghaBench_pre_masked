
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * voidp ;
typedef int res ;
typedef int XDRPROC_T_TYPE ;
typedef int CLIENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,char*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_3 ;

voidp
FUNC_2(voidp VAR_4, CLIENT *VAR_5)
{
  static char VAR_6;

  FUNC_1((char *) &VAR_6, 0, sizeof(VAR_6));
  if (FUNC_0(VAR_5, VAR_0,
  (XDRPROC_T_TYPE) VAR_3, VAR_4,
  (XDRPROC_T_TYPE) VAR_3, &VAR_6, VAR_2)
      != VAR_1) {
    return (((void*)0));
  }
  return ((voidp) &VAR_6);
}
