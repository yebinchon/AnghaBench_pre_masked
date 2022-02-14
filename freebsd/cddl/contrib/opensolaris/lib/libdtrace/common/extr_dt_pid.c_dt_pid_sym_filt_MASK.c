
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ st_shndx; scalar_t__ st_size; scalar_t__ st_value; } ;
struct TYPE_6__ {scalar_t__ dpp_last_taken; TYPE_2__ dpp_last; int dpp_func; } ;
typedef TYPE_1__ dt_pid_probe_t ;
typedef TYPE_2__ GElf_Sym ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__ const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, const GElf_Sym *VAR_2, const char *VAR_3)
{
 dt_pid_probe_t *VAR_4 = VAR_1;

 if (VAR_2->st_shndx == VAR_0)
  return (0);

 if (VAR_2->st_size == 0) {
  FUNC_0("st_size of %s is zero\n", VAR_3);
  return (0);
 }

 if (VAR_4->dpp_last_taken == 0 ||
     VAR_2->st_value != VAR_4->dpp_last.st_value ||
     VAR_2->st_size != VAR_4->dpp_last.st_size) {







  if (FUNC_3(VAR_3, "_init") == 0 || FUNC_3(VAR_3, "_fini") == 0)
   return (0);

  if ((VAR_4->dpp_last_taken = FUNC_2(VAR_3, VAR_4->dpp_func)) != 0) {
   VAR_4->dpp_last = *VAR_2;
   return (FUNC_1(VAR_4, VAR_2, VAR_3));
  }
 }

 return (0);
}
