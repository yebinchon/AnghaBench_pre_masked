
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int amq_sync_umnt ;
typedef int amq_string ;
typedef int XDRPROC_T_TYPE ;
typedef int SVC_IN_ARG_TYPE ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

amq_sync_umnt *
FUNC_2(amq_string *VAR_5, CLIENT *VAR_6)
{
  static amq_sync_umnt VAR_7;
  enum clnt_stat VAR_8;

  FUNC_1((char *) &VAR_7, 0, sizeof(VAR_7));
  if ((VAR_8 = FUNC_0(VAR_6, VAR_0,
  (XDRPROC_T_TYPE) VAR_3, (SVC_IN_ARG_TYPE) VAR_5,
  (XDRPROC_T_TYPE) VAR_4, (SVC_IN_ARG_TYPE) &VAR_7,
  VAR_2)) != VAR_1) {
    return (((void*)0));
  }
  return &VAR_7;
}
