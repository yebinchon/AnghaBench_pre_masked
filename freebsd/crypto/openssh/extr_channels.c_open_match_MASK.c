
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct permission {int port_to_connect; int * host_to_connect; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static int
FUNC_1(struct permission *VAR_2, const char *VAR_3,
    int VAR_4)
{
 if (VAR_2->host_to_connect == ((void*)0))
  return 0;
 if (VAR_2->port_to_connect != VAR_1 &&
     VAR_2->port_to_connect != VAR_4)
  return 0;
 if (FUNC_0(VAR_2->host_to_connect, VAR_0) != 0 &&
     FUNC_0(VAR_2->host_to_connect, VAR_3) != 0)
  return 0;
 return 1;
}
