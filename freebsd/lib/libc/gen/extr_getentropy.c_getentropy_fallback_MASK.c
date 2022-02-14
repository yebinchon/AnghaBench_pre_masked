
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 size_t FUNC_1 (void*,size_t) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, size_t VAR_3)
{





 if (VAR_2 == ((void*)0) && VAR_3 > 0) {
  VAR_1 = VAR_0;
  return (-1);
 }
 if (FUNC_1(VAR_2, VAR_3) != VAR_3) {
  if (VAR_1 == VAR_0)
   return (-1);
  FUNC_0();
 }
 return (0);
}
