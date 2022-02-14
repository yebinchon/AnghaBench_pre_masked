
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voidp ;
typedef int res ;
typedef int amq_map_info_list ;
typedef int XDRPROC_T_TYPE ;
typedef int SVC_IN_ARG_TYPE ;
typedef int CLIENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

amq_map_info_list *
FUNC_2(voidp VAR_5, CLIENT *VAR_6)
{
  static amq_map_info_list VAR_7;

  FUNC_1((char *) &VAR_7, 0, sizeof(VAR_7));
  if (FUNC_0(VAR_6, VAR_0, (XDRPROC_T_TYPE) VAR_4, VAR_5,
  (XDRPROC_T_TYPE) VAR_3,
  (SVC_IN_ARG_TYPE) &VAR_7, VAR_2) != VAR_1) {
    return (((void*)0));
  }
  return (&VAR_7);
}
