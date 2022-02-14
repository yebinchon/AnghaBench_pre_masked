
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int FUNC_0 (int *,int,int*) ;

__attribute__((used)) static int
FUNC_1(qla_host_t *VAR_0, uint32_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_1++) {

  VAR_5 = FUNC_0(VAR_0, (VAR_2 + VAR_4), VAR_1);

  if (VAR_5)
   return VAR_5;
 }

 return (VAR_5);
}
