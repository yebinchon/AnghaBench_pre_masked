
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct service {int s_magic; int s_connections; int s_flags; int * s_command; int * s_limit; int * s_name; } ;
typedef int service_limit_func_t ;
typedef int service_command_func_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct service*) ;
 struct service* FUNC_2 (int) ;
 int * FUNC_3 (char const*) ;

struct service *
FUNC_4(const char *VAR_1, service_limit_func_t *VAR_2,
    service_command_func_t *VAR_3, uint64_t VAR_4)
{
 struct service *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_5->s_name = FUNC_3(VAR_1);
 if (VAR_5->s_name == ((void*)0)) {
  FUNC_1(VAR_5);
  return (((void*)0));
 }
 VAR_5->s_limit = VAR_2;
 VAR_5->s_command = VAR_3;
 VAR_5->s_flags = VAR_4;
 FUNC_0(&VAR_5->s_connections);
 VAR_5->s_magic = VAR_0;

 return (VAR_5);
}
