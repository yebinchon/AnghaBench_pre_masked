
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_socketmgr_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_appctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int **) ;

isc_result_t
FUNC_6(isc_mem_t *VAR_2, isc_appctx_t *VAR_3,
     isc_socketmgr_t **VAR_4)
{
 isc_result_t VAR_5;

 FUNC_0(&VAR_1);

 FUNC_1(&FUNC_4 != ((void*)0));
 VAR_5 = FUNC_4)(VAR_2, VAR_4);

 FUNC_2(&VAR_1);

 if (VAR_5 == VAR_0)
  FUNC_3(VAR_3, *VAR_4);

 return (VAR_5);
}
