
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int isc_portset_t ;
typedef int isc_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;

isc_result_t
FUNC_3(isc_mem_t *VAR_2, isc_portset_t **VAR_3) {
 isc_portset_t *VAR_4;

 FUNC_0(VAR_3 != ((void*)0) && *VAR_3 == ((void*)0));

 VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return (VAR_0);


 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 *VAR_3 = VAR_4;

 return (VAR_1);
}
