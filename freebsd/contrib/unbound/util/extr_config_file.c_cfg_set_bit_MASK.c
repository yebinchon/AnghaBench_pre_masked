
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint8_t* VAR_0, size_t VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2/8;
 FUNC_0((size_t)VAR_3 < VAR_1);
 (void)VAR_1;
 VAR_0[VAR_3] |= 1<<(VAR_2%8);
}
