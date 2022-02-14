
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void
FUNC_2(qla_host_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_3);

 if (VAR_6 == VAR_2)
  return;

 VAR_4 = VAR_0 | (VAR_6 << VAR_1) | VAR_4;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);

 return;
}
