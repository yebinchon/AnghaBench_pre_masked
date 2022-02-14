
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (char const*,size_t*) ;

int
FUNC_3(const char* VAR_0, uint8_t** VAR_1, size_t* VAR_2, int* VAR_3)
{
 *VAR_1 = FUNC_2(VAR_0, VAR_2);
 *VAR_3 = 0;
 if(!*VAR_1) {
  FUNC_1("cannot parse name %s", VAR_0);
  return 0;
 }
 *VAR_3 = FUNC_0(*VAR_1, VAR_2);
 return 1;
}
