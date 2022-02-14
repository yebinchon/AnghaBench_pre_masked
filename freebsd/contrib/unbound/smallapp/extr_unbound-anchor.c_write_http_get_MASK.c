
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static int
FUNC_1(SSL* VAR_1, const char* VAR_2, const char* VAR_3)
{
 if(FUNC_0(VAR_1, "GET /%s HTTP/1.1", VAR_2) &&
    FUNC_0(VAR_1, "Host: %s", VAR_3) &&
    FUNC_0(VAR_1, "User-Agent: unbound-anchor/%s",
     VAR_0) &&



    FUNC_0(VAR_1, "", ((void*)0))) {
  return 1;
 }
 return 0;
}
