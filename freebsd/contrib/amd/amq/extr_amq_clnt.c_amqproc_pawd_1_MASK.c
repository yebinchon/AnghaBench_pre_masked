
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef int amq_string ;
typedef int XDRPROC_T_TYPE ;
typedef int SVC_IN_ARG_TYPE ;
typedef int CLIENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_3 ;

amq_string *
FUNC_2(amq_string *VAR_4, CLIENT *VAR_5)
{
  static amq_string VAR_6;

  FUNC_1((char *) &VAR_6, 0, sizeof(VAR_6));
  if (FUNC_0(VAR_5, VAR_0,
  (XDRPROC_T_TYPE) VAR_3, (SVC_IN_ARG_TYPE) VAR_4,
  (XDRPROC_T_TYPE) VAR_3, (SVC_IN_ARG_TYPE) &VAR_6,
  VAR_2) != VAR_1) {
    return (((void*)0));
  }
  return (&VAR_6);
}
