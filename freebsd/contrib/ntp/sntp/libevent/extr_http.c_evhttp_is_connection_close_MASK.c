
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct evkeyvalq*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct evkeyvalq* VAR_2)
{
 if (VAR_1 & VAR_0) {

  const char *VAR_3 = FUNC_0(VAR_2, "Proxy-Connection");
  return (VAR_3 == ((void*)0) || FUNC_1(VAR_3, "keep-alive") != 0);
 } else {
  const char *VAR_4 = FUNC_0(VAR_2, "Connection");
  return (VAR_4 != ((void*)0) && FUNC_1(VAR_4, "close") == 0);
 }
}
