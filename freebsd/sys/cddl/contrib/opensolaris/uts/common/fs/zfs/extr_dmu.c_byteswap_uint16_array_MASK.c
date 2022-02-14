
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(void *VAR_0, size_t VAR_1)
{
 uint16_t *VAR_2 = VAR_0;
 size_t VAR_3 = VAR_1 >> 1;
 int VAR_4;

 FUNC_0((VAR_1 & 1) == 0);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_2[VAR_4] = FUNC_1(VAR_2[VAR_4]);
}
