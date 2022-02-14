
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(void **VAR_0, char *VAR_1)
{
 int *VAR_2 = *VAR_0;
 char *VAR_3 = (char *)VAR_2;
 int VAR_4 = *(uint8_t *)VAR_3;

 FUNC_0(VAR_1, VAR_3 + 1, VAR_4);
 VAR_1[VAR_4] = 0;
 VAR_3 += VAR_4 + 1;
 *VAR_0 = (void *)VAR_3;
}
