
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static inline int
FUNC_2(const char *VAR_0, int VAR_1)
{
 while (!FUNC_0(*VAR_0) && *VAR_0 != ':' && *VAR_0 != '=') {
  if (VAR_1 && FUNC_1((unsigned char)*VAR_0))
   break;
  VAR_0++;
 }

 return *VAR_0 != '\0';
}
