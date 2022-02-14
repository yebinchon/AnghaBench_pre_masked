
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct proc {int p_flag; TYPE_2__* p_ucred; TYPE_1__* p_sysent; } ;
struct image_params {int canary; int execpathp; int * auxargs; struct proc* proc; } ;
struct TYPE_7__ {int phdr; int phent; int phnum; int pagesz; int base; int flags; int entry; int execfd; } ;
struct TYPE_6__ {int cr_ruid; int cr_svuid; int cr_rgid; int cr_svgid; } ;
struct TYPE_5__ {int sv_shared_page_base; } ;
typedef int Elf_Auxinfo ;
typedef TYPE_3__ Elf_Auxargs ;
typedef TYPE_3__ Elf64_Auxargs ;


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
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ) ;
 int VAR_24 ;
 int FUNC_3 (int *,void*,int) ;
 int VAR_25 ;
 int FUNC_4 (int *,int ) ;
 int VAR_26 ;
 int * FUNC_5 (int,int ,int) ;
 int VAR_27 ;

__attribute__((used)) static void
FUNC_6(struct image_params *VAR_28, u_long *VAR_29)
{
 Elf_Auxargs *VAR_30;
 Elf_Auxinfo *VAR_31, *VAR_32;
 u_long VAR_33;
 struct proc *VAR_34;
 int VAR_35;

 VAR_34 = VAR_28->proc;
 VAR_30 = (Elf64_Auxargs *)VAR_28->auxargs;
 VAR_31 = VAR_32 = FUNC_5(VAR_14 * sizeof(*VAR_32), VAR_21,
     VAR_22 | VAR_23);

 VAR_35 = VAR_34->p_flag & VAR_24 ? 1 : 0;
 FUNC_0(VAR_32, VAR_20,
     VAR_28->proc->p_sysent->sv_shared_page_base);
 FUNC_0(VAR_32, VAR_16, VAR_25);
 FUNC_0(VAR_32, VAR_13, VAR_27);
 FUNC_0(VAR_32, VAR_9, VAR_30->phdr);
 FUNC_0(VAR_32, VAR_10, VAR_30->phent);
 FUNC_0(VAR_32, VAR_11, VAR_30->phnum);
 FUNC_0(VAR_32, VAR_8, VAR_30->pagesz);
 FUNC_0(VAR_32, VAR_0, VAR_30->base);
 FUNC_0(VAR_32, VAR_5, VAR_30->flags);
 FUNC_0(VAR_32, VAR_2, VAR_30->entry);
 FUNC_0(VAR_32, VAR_12, VAR_28->proc->p_ucred->cr_ruid);
 FUNC_0(VAR_32, VAR_3, VAR_28->proc->p_ucred->cr_svuid);
 FUNC_0(VAR_32, VAR_6, VAR_28->proc->p_ucred->cr_rgid);
 FUNC_0(VAR_32, VAR_1, VAR_28->proc->p_ucred->cr_svgid);
 FUNC_0(VAR_32, VAR_19, VAR_35);
 FUNC_0(VAR_32, VAR_17, FUNC_2(VAR_26));
 FUNC_0(VAR_32, VAR_18, VAR_28->canary);
 if (VAR_28->execpathp != 0)
  FUNC_0(VAR_32, VAR_15, VAR_28->execpathp);
 if (VAR_30->execfd != -1)
  FUNC_0(VAR_32, VAR_4, VAR_30->execfd);
 FUNC_0(VAR_32, VAR_7, 0);

 FUNC_4(VAR_28->auxargs, VAR_21);
 VAR_28->auxargs = ((void*)0);
 FUNC_1(VAR_32 - VAR_31 <= VAR_14, ("Too many auxargs"));

 VAR_33 = sizeof(*VAR_31) * (VAR_32 - VAR_31);
 *VAR_29 -= VAR_33;
 FUNC_3(VAR_31, (void *)*VAR_29, VAR_33);
 FUNC_4(VAR_31, VAR_21);
}
