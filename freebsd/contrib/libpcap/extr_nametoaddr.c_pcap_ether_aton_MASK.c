
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;

u_char *
FUNC_3(const char *VAR_0)
{
 register u_char *VAR_1, *VAR_2;
 register u_char VAR_3;

 VAR_2 = VAR_1 = (u_char *)FUNC_1(6);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 while (*VAR_0) {
  if (*VAR_0 == ':' || *VAR_0 == '.' || *VAR_0 == '-')
   VAR_0 += 1;
  VAR_3 = FUNC_2(*VAR_0++);
  if (FUNC_0((unsigned char)*VAR_0)) {
   VAR_3 <<= 4;
   VAR_3 |= FUNC_2(*VAR_0++);
  }
  *VAR_1++ = VAR_3;
 }

 return (VAR_2);
}
