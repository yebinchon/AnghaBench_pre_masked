
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
struct evutil_addrinfo {int ai_flags; } ;


 int VAR_0 ;
 struct servent* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, const char *VAR_2,
    const struct evutil_addrinfo *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1);
 if (VAR_4>=0)
  return VAR_4;
 return -1;
}
