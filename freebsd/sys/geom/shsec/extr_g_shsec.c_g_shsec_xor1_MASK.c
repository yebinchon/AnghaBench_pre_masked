
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0, uint32_t *VAR_1, ssize_t VAR_2)
{

 for (; VAR_2 > 0; VAR_2 -= sizeof(uint32_t), VAR_1++)
  *VAR_1 = *VAR_1 ^ *VAR_0++;
 FUNC_0(VAR_2 == 0, ("len != 0 (len=%zd)", VAR_2));
}
