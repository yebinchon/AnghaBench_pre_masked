
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct image_params {scalar_t__ canary; scalar_t__ execpathp; int * auxargs; TYPE_3__* proc; } ;
struct TYPE_8__ {int phdr; int phent; int phnum; int pagesz; int flags; int entry; int base; int execfd; } ;
struct TYPE_7__ {int p_flag; TYPE_2__* p_ucred; TYPE_1__* p_sysent; } ;
struct TYPE_6__ {int cr_ruid; int cr_svuid; int cr_rgid; int cr_svgid; } ;
struct TYPE_5__ {int sv_shared_page_base; } ;
typedef int Elf32_Auxinfo ;
typedef TYPE_4__ Elf32_Auxargs ;


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
 int FUNC_2 (scalar_t__) ;
 int VAR_26 ;
 int FUNC_3 (int *,void*,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (int *,int ) ;
 int VAR_29 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_30 ;
 int * FUNC_6 (int,int ,int) ;
 int VAR_31 ;

__attribute__((used)) static void
FUNC_7(struct image_params *VAR_32, u_long *VAR_33)
{
 Elf32_Auxargs *VAR_34;
 Elf32_Auxinfo *VAR_35, *VAR_36;
 u_long VAR_37;
 int VAR_38;

 VAR_34 = (Elf32_Auxargs *)VAR_32->auxargs;
 VAR_35 = VAR_36 = FUNC_6(VAR_14 * sizeof(*VAR_36), VAR_23,
     VAR_24 | VAR_25);

 VAR_38 = VAR_32->proc->p_flag & VAR_26 ? 1 : 0;
 FUNC_0(VAR_36, VAR_21,
     VAR_32->proc->p_sysent->sv_shared_page_base);
 FUNC_0(VAR_36, VAR_20, VAR_29);
 FUNC_0(VAR_36, VAR_16, VAR_27);
 if (FUNC_5(VAR_28) >= VAR_22)
  FUNC_0(VAR_36, VAR_13, VAR_31);
 FUNC_0(VAR_36, VAR_9, VAR_34->phdr);
 FUNC_0(VAR_36, VAR_10, VAR_34->phent);
 FUNC_0(VAR_36, VAR_11, VAR_34->phnum);
 FUNC_0(VAR_36, VAR_8, VAR_34->pagesz);
 FUNC_0(VAR_36, VAR_5, VAR_34->flags);
 FUNC_0(VAR_36, VAR_2, VAR_34->entry);
 FUNC_0(VAR_36, VAR_0, VAR_34->base);
 FUNC_0(VAR_36, VAR_19, VAR_38);
 FUNC_0(VAR_36, VAR_12, VAR_32->proc->p_ucred->cr_ruid);
 FUNC_0(VAR_36, VAR_3, VAR_32->proc->p_ucred->cr_svuid);
 FUNC_0(VAR_36, VAR_6, VAR_32->proc->p_ucred->cr_rgid);
 FUNC_0(VAR_36, VAR_1, VAR_32->proc->p_ucred->cr_svgid);
 FUNC_0(VAR_36, VAR_17, FUNC_2(VAR_30));
 FUNC_0(VAR_36, VAR_18, FUNC_2(VAR_32->canary));
 if (VAR_32->execpathp != 0)
  FUNC_0(VAR_36, VAR_15, FUNC_2(VAR_32->execpathp));
 if (VAR_34->execfd != -1)
  FUNC_0(VAR_36, VAR_4, VAR_34->execfd);
 FUNC_0(VAR_36, VAR_7, 0);

 FUNC_4(VAR_32->auxargs, VAR_23);
 VAR_32->auxargs = ((void*)0);
 FUNC_1(VAR_36 - VAR_35 <= VAR_14, ("Too many auxargs"));

 VAR_37 = sizeof(*VAR_35) * (VAR_36 - VAR_35);
 *VAR_33 -= VAR_37;
 FUNC_3(VAR_35, (void *)*VAR_33, VAR_37);
 FUNC_4(VAR_35, VAR_23);
}
