
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpp_token ;
typedef int cpp_reader ;


 unsigned char* FUNC_0 (int *,unsigned int) ;
 unsigned char* FUNC_1 (int *,int const*,unsigned char*,int) ;
 int FUNC_2 (int const*) ;

unsigned char *
FUNC_3 (cpp_reader *VAR_0, const cpp_token *VAR_1)
{
  unsigned int VAR_2 = FUNC_2 (VAR_1) + 1;
  unsigned char *VAR_3 = FUNC_0 (VAR_0, VAR_2), *VAR_4;

  VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_3, 0);
  VAR_4[0] = '\0';

  return VAR_3;
}
