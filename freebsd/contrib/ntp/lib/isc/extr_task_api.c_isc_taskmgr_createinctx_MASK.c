
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_taskmgr_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_appctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int,unsigned int,int **) ;
 scalar_t__ FUNC_5 (int *,unsigned int,unsigned int,int **) ;

isc_result_t
FUNC_6(isc_mem_t *VAR_2, isc_appctx_t *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5,
   isc_taskmgr_t **VAR_6)
{
 isc_result_t VAR_7;

 FUNC_0(&VAR_1);

 FUNC_1(&FUNC_5 != ((void*)0));
 VAR_7 = FUNC_5)(VAR_2, VAR_4, VAR_5,
           VAR_6);

 FUNC_2(&VAR_1);

 if (VAR_7 == VAR_0)
  FUNC_3(VAR_3, *VAR_6);

 return (VAR_7);
}
