
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_entropy_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int *,size_t,int **) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int VAR_4 ;

isc_result_t
FUNC_7(isc_mem_t *VAR_5, isc_entropy_t *VAR_6, size_t VAR_7) {
 isc_result_t VAR_8 = VAR_0;

 FUNC_2(VAR_5 != ((void*)0));
 FUNC_0(VAR_2 == ((void*)0));

 FUNC_3(FUNC_6(&VAR_4, VAR_3) == VAR_0);

 FUNC_1(&VAR_1);

 if (VAR_2 == ((void*)0))
  VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_2);

 FUNC_4(&VAR_1);

 return (VAR_8);
}
