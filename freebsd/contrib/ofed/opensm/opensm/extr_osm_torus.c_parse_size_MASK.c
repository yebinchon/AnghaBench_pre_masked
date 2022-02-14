
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int *,char const*) ;
 unsigned int FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static
bool FUNC_2(unsigned *VAR_0, unsigned *VAR_1, unsigned VAR_2,
  const char *VAR_3)
{
 char *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(((void*)0), VAR_3);
 if (!VAR_4)
  return 0;
 *VAR_0 = FUNC_1(VAR_4, &VAR_5, 0);
 if (*VAR_0) {
  if (*VAR_5 == 't' || *VAR_5 == 'T')
   *VAR_1 &= ~VAR_2;
  else if (*VAR_5 == 'm' || *VAR_5 == 'M')
   *VAR_1 |= VAR_2;







  if (*VAR_0 == 2)
   *VAR_1 |= VAR_2;
 }
 return 1;
}
