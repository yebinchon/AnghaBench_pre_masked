
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct permission {scalar_t__ listen_port; char* listen_host; int * host_to_connect; } ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct permission *VAR_0,
    const char *VAR_1, u_short VAR_2, int VAR_3)
{
 const char *VAR_4;

 if (VAR_0->host_to_connect == ((void*)0))
  return 0;
 if (VAR_0->listen_port != VAR_2)
  return 0;
 if (!VAR_3 && VAR_0->listen_host == ((void*)0) &&
     VAR_1 == ((void*)0))
  return 1;
 VAR_4 = VAR_3 ?
     FUNC_0(VAR_0->listen_host) :
     VAR_0->listen_host;
 if (VAR_4 == ((void*)0) || VAR_1 == ((void*)0) ||
     FUNC_1(VAR_4, VAR_1) != 0)
  return 0;
 return 1;
}
