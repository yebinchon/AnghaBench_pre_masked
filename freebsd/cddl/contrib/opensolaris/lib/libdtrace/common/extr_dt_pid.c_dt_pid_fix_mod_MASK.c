
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
struct TYPE_6__ {int pr_vaddr; } ;
typedef TYPE_1__ prmap_t ;
typedef int m ;
struct TYPE_7__ {char const* dtpd_mod; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
typedef int Lmid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ps_prochandle*,int ,int *) ;
 TYPE_1__* FUNC_1 (struct ps_prochandle*,int ,char const*) ;
 int FUNC_2 (struct ps_prochandle*,int ,char*,int) ;
 int FUNC_3 (char*,int,int ,char const*) ;
 int FUNC_4 (char const) ;
 int * FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char const*,char**,int) ;

__attribute__((used)) static const prmap_t *
FUNC_9(dtrace_probedesc_t *VAR_2, struct ps_prochandle *VAR_3)
{
 char VAR_4[VAR_0];
 Lmid_t VAR_5 = VAR_1;
 const char *VAR_6;
 const prmap_t *VAR_7;




 if (FUNC_5(VAR_2->dtpd_mod, '`') != ((void*)0)) {
  char *VAR_8;

  if (FUNC_6(VAR_2->dtpd_mod, "LM", 2) != 0 ||
      !FUNC_4(VAR_2->dtpd_mod[2]))
   return (((void*)0));

  VAR_5 = FUNC_8(&VAR_2->dtpd_mod[2], &VAR_8, 16);

  VAR_6 = VAR_8 + 1;

  if (*VAR_8 != '`' || FUNC_5(VAR_6, '`') != ((void*)0))
   return (((void*)0));

 } else {
  VAR_6 = VAR_2->dtpd_mod;
 }

 if ((VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6)) == ((void*)0))
  return (((void*)0));

 (void) FUNC_2(VAR_3, VAR_7->pr_vaddr, VAR_4, sizeof (VAR_4));
 if ((VAR_6 = FUNC_7(VAR_4, '/')) == ((void*)0))
  VAR_6 = &VAR_4[0];
 else
  VAR_6++;





 FUNC_3(VAR_2->dtpd_mod, sizeof (VAR_2->dtpd_mod), VAR_5, VAR_6);

 return (VAR_7);
}
