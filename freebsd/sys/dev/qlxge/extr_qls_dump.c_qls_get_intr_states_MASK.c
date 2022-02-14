
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(qla_host_t *VAR_2, uint32_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++) {

  FUNC_1(VAR_2, VAR_1, (0x037f0300 + VAR_4));

  *VAR_3 = FUNC_0(VAR_2, VAR_1);
 }
}
