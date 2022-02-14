
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct afd {size_t a_off; } ;
typedef size_t socklen_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_1(const struct afd *VAR_1,
    const struct sockaddr *VAR_2, socklen_t VAR_3,
    char *VAR_4, size_t VAR_5, char *VAR_6, size_t VAR_7, int VAR_8)
{
 size_t VAR_9;

 if (VAR_6 != ((void*)0) && VAR_7 > 0)
  *VAR_6 = '\0';
 if (VAR_4 != ((void*)0) && VAR_5 > 0) {
  VAR_9 = VAR_3 - VAR_1->a_off;

  if (VAR_9 + 1 > VAR_5) {
   *VAR_4 = '\0';
   return (VAR_0);
  }
  FUNC_0(VAR_4, (const char *)VAR_2 + VAR_1->a_off, VAR_9 + 1);
 }

 return (0);
}
