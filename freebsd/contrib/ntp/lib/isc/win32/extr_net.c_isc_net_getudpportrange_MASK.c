
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

isc_result_t
FUNC_2(int VAR_4, in_port_t *VAR_5, in_port_t *VAR_6) {
 int VAR_7 = VAR_2;

 FUNC_0(VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

 FUNC_1(VAR_4);

 if (VAR_7 != VAR_3) {
  *VAR_5 = VAR_1;
  *VAR_6 = VAR_0;
 }

 return (VAR_3);
}
