
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int **,int *) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static uint8_t *
FUNC_3(uint64_t VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 uint64_t VAR_3;
 FUNC_1("  Tag_unknown_%ju: ", (uintmax_t) VAR_0);

 if (VAR_0 & 1) {
  FUNC_1("%s\n", (char *) VAR_1);
  VAR_1 += FUNC_2((char *) VAR_1) + 1;
 } else {
  VAR_3 = FUNC_0(&VAR_1, VAR_2);
  FUNC_1("%ju\n", (uintmax_t) VAR_3);
 }

 return (VAR_1);
}
