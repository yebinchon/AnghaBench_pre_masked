
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vint64 ;
typedef int uint32_t ;
typedef int time_t ;
typedef int leap_table_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int const*) ;

int
FUNC_4(
 int VAR_1,
 uint32_t VAR_2,
 const time_t * VAR_3 )
{
 leap_table_t * VAR_4;
 vint64 VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_3(VAR_2, VAR_3);
 return ( FUNC_0(VAR_4, &VAR_5, (VAR_1 != 0))
  && FUNC_2(VAR_4));
}
