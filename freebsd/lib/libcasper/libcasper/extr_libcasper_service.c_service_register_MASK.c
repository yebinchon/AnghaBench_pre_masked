
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct casper_service {int * cs_service; } ;
typedef int service_limit_func_t ;
typedef int service_command_func_t ;


 int FUNC_0 (int *,struct casper_service*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct casper_service*) ;
 struct casper_service* FUNC_2 (int) ;
 int * FUNC_3 (char const*,int *,int *,int ) ;
 int * FUNC_4 (char const*) ;

struct casper_service *
FUNC_5(const char *VAR_2, service_limit_func_t *VAR_3,
   service_command_func_t *VAR_4, uint64_t VAR_5)
{
 struct casper_service *VAR_6;

 if (VAR_4 == ((void*)0))
  return (((void*)0));
 if (VAR_2 == ((void*)0) || VAR_2[0] == '\0')
  return (((void*)0));
 if (FUNC_4(VAR_2) != ((void*)0))
  return (((void*)0));

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_6->cs_service = FUNC_3(VAR_2, VAR_3, VAR_4,
     VAR_5);
 if (VAR_6->cs_service == ((void*)0)) {
  FUNC_1(VAR_6);
  return (((void*)0));
 }
 FUNC_0(&VAR_0, VAR_6, VAR_1);

 return (VAR_6);
}
