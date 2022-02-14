
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
struct TYPE_10__ {int prs_lmid; } ;
typedef TYPE_1__ prsyminfo_t ;
struct TYPE_11__ {scalar_t__ pr_vaddr; } ;
typedef TYPE_2__ prmap_t ;
typedef int e_type ;
struct TYPE_12__ {int dofhp_mod; int dofhp_pid; scalar_t__ dofhp_addr; int dofhp_dof; } ;
typedef TYPE_3__ dof_helper_t ;
typedef int dh ;
struct TYPE_13__ {int st_value; } ;
typedef TYPE_4__ GElf_Sym ;
typedef scalar_t__ GElf_Half ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ps_prochandle*,scalar_t__*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ps_prochandle*,int ,char const*,char const*,TYPE_4__*,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int,int ,char const*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int,int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct ps_prochandle*,int) ;
 scalar_t__ FUNC_9 (struct ps_prochandle*,int,int ,TYPE_3__*,int) ;
 int FUNC_10 (struct ps_prochandle*,char*,int ,int ) ;
 int FUNC_11 (struct ps_prochandle*) ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (char const*,char) ;

__attribute__((used)) static int
FUNC_14(void *VAR_6, const prmap_t *VAR_7, const char *VAR_8)
{
 struct ps_prochandle *VAR_9 = VAR_6;
 GElf_Sym VAR_10;
 prsyminfo_t VAR_11;
 dof_helper_t VAR_12;
 GElf_Half VAR_13;
 const char *VAR_14;
 const char *VAR_15[] = { "___SUNW_dof", "__SUNW_dof" };
 int VAR_16, VAR_17 = -1;







 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  if (FUNC_1(VAR_9, VAR_4, VAR_8, VAR_15[VAR_16], &VAR_10,
      &VAR_11) != 0) {
   continue;
  }

  if ((VAR_14 = FUNC_13(VAR_8, '/')) == ((void*)0))
   VAR_14 = VAR_8;
  else
   VAR_14++;

  FUNC_3("lookup of %s succeeded for %s\n", VAR_15[VAR_16], VAR_14);

  if (FUNC_0(VAR_9, &VAR_13, sizeof (VAR_13), VAR_7->pr_vaddr +
      FUNC_6(VAR_2, VAR_13)) != sizeof (VAR_13)) {
   FUNC_3("read of ELF header failed");
   continue;
  }

  VAR_12.dofhp_dof = VAR_10.st_value;
  VAR_12.dofhp_addr = (VAR_13 == VAR_1) ? 0 : VAR_7->pr_vaddr;

  FUNC_4(VAR_12.dofhp_mod, sizeof (VAR_12.dofhp_mod),
      VAR_11.prs_lmid, VAR_14);
  if (VAR_17 == -1 &&
      (VAR_17 = FUNC_10(VAR_9, "/dev/dtrace/helper", VAR_3, 0)) < 0) {
   FUNC_3("pr_open of helper device failed: %s\n",
       FUNC_12(VAR_5));
   return (-1);
  }

  if (FUNC_9(VAR_9, VAR_17, VAR_0, &VAR_12, sizeof (VAR_12)) < 0)
   FUNC_3("DOF was rejected for %s\n", VAR_12.dofhp_mod);

 }

 if (VAR_17 != -1)



  (void) FUNC_8(VAR_9, VAR_17);


 return (0);
}
