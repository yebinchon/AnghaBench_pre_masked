
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (int **,int *) ;
 int FUNC_1 (char*,int ,int *) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static uint8_t *
FUNC_3(uint8_t *VAR_0, uint8_t *VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = FUNC_0(&VAR_0, VAR_1);
 FUNC_1("flag = %ju, vendor = %s\n", (uintmax_t) VAR_2, VAR_0);
 VAR_0 += FUNC_2((char *) VAR_0) + 1;

 return (VAR_0);
}
