
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int leap_table_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

leap_table_t *
FUNC_2(
 int VAR_2)
{
 leap_table_t *VAR_3, *VAR_4;

 VAR_3 = VAR_0;
 if (VAR_3 == &VAR_1[0]) {
  VAR_4 = &VAR_1[1];
 } else if (VAR_3 == &VAR_1[1]) {
  VAR_4 = &VAR_1[0];
 } else {
  VAR_3 = &VAR_1[0];
  VAR_4 = &VAR_1[1];
  FUNC_1(VAR_3);
  FUNC_1(VAR_4);
  VAR_0 = VAR_3;
 }
 if (VAR_2) {
  FUNC_0(VAR_4, VAR_3, sizeof(leap_table_t));
  VAR_3 = VAR_4;
 }

 return VAR_3;
}
