
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vint64 ;
typedef int uint32_t ;
typedef int time_t ;
typedef int leap_table_t ;
typedef int leap_era_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*) ;

int
FUNC_3(
 leap_era_t * VAR_2 ,
 uint32_t VAR_3,
 const time_t * VAR_4)
{
 const leap_table_t * VAR_5;
 vint64 VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 VAR_6 = FUNC_2(VAR_3, VAR_4);
 FUNC_0(VAR_2, VAR_5, &VAR_6);
 return VAR_1;
}
