
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tok {char const* s; scalar_t__ v; } ;


 int FUNC_0 (char*,size_t,char const*,scalar_t__) ;

const char *
FUNC_1(register const struct tok *VAR_0, register const char *VAR_1,
    register u_int VAR_2, char *VAR_3, size_t VAR_4)
{
 if (VAR_0 != ((void*)0)) {
  while (VAR_0->s != ((void*)0)) {
   if (VAR_0->v == VAR_2)
    return (VAR_0->s);
   ++VAR_0;
  }
 }
 if (VAR_1 == ((void*)0))
  VAR_1 = "#%d";

 (void)FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2);
 return (const char *)VAR_3;
}
