
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct permission {scalar_t__ listen_port; int * listen_path; int * host_to_connect; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static int
FUNC_1(struct permission *VAR_1,
    const char *VAR_2)
{
 if (VAR_1->host_to_connect == ((void*)0))
  return 0;
 if (VAR_1->listen_port != VAR_0)
  return 0;
 if (VAR_1->listen_path == ((void*)0) ||
     FUNC_0(VAR_1->listen_path, VAR_2) != 0)
  return 0;
 return 1;
}
