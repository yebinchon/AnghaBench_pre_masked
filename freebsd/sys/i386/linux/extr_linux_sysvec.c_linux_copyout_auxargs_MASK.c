
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct ps_strings {int dummy; } ;
struct proc {int p_flag; TYPE_2__* p_ucred; TYPE_1__* p_sysent; } ;
struct image_params {int canary; int execpathp; int * auxargs; struct proc* proc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int phdr; int phent; int phnum; int pagesz; int flags; int entry; int base; int execfd; } ;
struct TYPE_5__ {int cr_ruid; int cr_svuid; int cr_rgid; int cr_svgid; } ;
struct TYPE_4__ {int sv_shared_page_base; scalar_t__ sv_psstrings; } ;
typedef int Elf32_Auxinfo ;
typedef TYPE_3__ Elf32_Auxargs ;
typedef int Elf32_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (int *) ;
 int VAR_26 ;
 int FUNC_3 (int *,void*,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int * FUNC_6 (int,int ,int) ;
 int VAR_31 ;

__attribute__((used)) static void
FUNC_7(struct image_params *VAR_32, u_long *VAR_33)
{
 struct proc *VAR_34;
 Elf32_Auxargs *VAR_35;
 Elf32_Auxinfo *VAR_36, *VAR_37;
 Elf32_Addr *VAR_38;
 struct ps_strings *VAR_39;
 u_long VAR_40;
 int VAR_41;

 VAR_34 = VAR_32->proc;
 VAR_41 = VAR_32->proc->p_flag & VAR_26 ? 1 : 0;
 VAR_39 = (struct ps_strings *)VAR_34->p_sysent->sv_psstrings;
 VAR_38 = (Elf32_Addr *)((caddr_t)VAR_39 - VAR_29);
 VAR_35 = (Elf32_Auxargs *)VAR_32->auxargs;
 VAR_36 = VAR_37 = FUNC_6(VAR_14 * sizeof(*VAR_37), VAR_23,
     VAR_24 | VAR_25);

 FUNC_0(VAR_37, VAR_21,
     VAR_32->proc->p_sysent->sv_shared_page_base);
 FUNC_0(VAR_37, VAR_20, VAR_30);
 FUNC_0(VAR_37, VAR_16, VAR_27);
 if (FUNC_5(VAR_28) >= VAR_22)
  FUNC_0(VAR_37, VAR_13, VAR_31);
 FUNC_0(VAR_37, VAR_9, VAR_35->phdr);
 FUNC_0(VAR_37, VAR_10, VAR_35->phent);
 FUNC_0(VAR_37, VAR_11, VAR_35->phnum);
 FUNC_0(VAR_37, VAR_8, VAR_35->pagesz);
 FUNC_0(VAR_37, VAR_5, VAR_35->flags);
 FUNC_0(VAR_37, VAR_2, VAR_35->entry);
 FUNC_0(VAR_37, VAR_0, VAR_35->base);
 FUNC_0(VAR_37, VAR_19, VAR_41);
 FUNC_0(VAR_37, VAR_12, VAR_32->proc->p_ucred->cr_ruid);
 FUNC_0(VAR_37, VAR_3, VAR_32->proc->p_ucred->cr_svuid);
 FUNC_0(VAR_37, VAR_6, VAR_32->proc->p_ucred->cr_rgid);
 FUNC_0(VAR_37, VAR_1, VAR_32->proc->p_ucred->cr_svgid);
 FUNC_0(VAR_37, VAR_17, FUNC_2(VAR_38));
 FUNC_0(VAR_37, VAR_18, VAR_32->canary);
 if (VAR_32->execpathp != 0)
  FUNC_0(VAR_37, VAR_15, VAR_32->execpathp);
 if (VAR_35->execfd != -1)
  FUNC_0(VAR_37, VAR_4, VAR_35->execfd);
 FUNC_0(VAR_37, VAR_7, 0);

 FUNC_4(VAR_32->auxargs, VAR_23);
 VAR_32->auxargs = ((void*)0);
 FUNC_1(VAR_37 - VAR_36 <= VAR_14, ("Too many auxargs"));

 VAR_40 = sizeof(*VAR_36) * (VAR_37 - VAR_36);
 *VAR_33 -= VAR_40;
 FUNC_3(VAR_36, (void *)*VAR_33, VAR_40);
 FUNC_4(VAR_36, VAR_23);
}
