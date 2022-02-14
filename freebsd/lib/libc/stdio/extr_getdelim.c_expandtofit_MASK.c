
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static inline int
FUNC_2(char ** __restrict VAR_3, size_t VAR_4, size_t * __restrict VAR_5)
{
 char *VAR_6;
 size_t VAR_7;

 if (VAR_4 > (size_t)VAR_1 + 1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 if (VAR_4 > *VAR_5) {
  if (VAR_4 == (size_t)VAR_1 + 1)
   VAR_7 = (size_t)VAR_1 + 1;
  else
   VAR_7 = FUNC_0(VAR_4);
  VAR_6 = FUNC_1(*VAR_3, VAR_7);
  if (VAR_6 == ((void*)0))
   return (-1);
  *VAR_5 = VAR_7;
  *VAR_3 = VAR_6;
 }
 return (0);
}
