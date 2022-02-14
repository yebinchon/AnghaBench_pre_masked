
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static __inline unsigned int
FUNC_1(const char *VAR_0, unsigned int VAR_1)
{
 const char *VAR_2 = VAR_0;

 while (VAR_1--) {
  if (FUNC_0(*VAR_2))
   break;
  VAR_2++;
 }

 return (VAR_2 - VAR_0);
}
