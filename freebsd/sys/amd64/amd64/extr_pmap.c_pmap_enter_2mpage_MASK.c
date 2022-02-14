
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {int pat_mode; } ;
struct TYPE_6__ {int oflags; TYPE_1__ md; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int,int,int *,struct rwlock**) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(pmap_t VAR_12, vm_offset_t VAR_13, vm_page_t VAR_14, vm_prot_t VAR_15,
    struct rwlock **VAR_16)
{
 pd_entry_t VAR_17;
 pt_entry_t VAR_18;

 FUNC_0(VAR_12, VAR_1);
 VAR_18 = FUNC_4(VAR_12);
 VAR_17 = FUNC_1(VAR_14) | FUNC_2(VAR_12, VAR_14->md.pat_mode, 1) |
     VAR_3 | VAR_18;
 if ((VAR_14->oflags & VAR_10) == 0)
  VAR_17 |= VAR_2;
 if ((VAR_15 & VAR_9) == 0)
  VAR_17 |= VAR_11;
 if (VAR_13 < VAR_8)
  VAR_17 |= VAR_4;
 return (FUNC_3(VAR_12, VAR_13, VAR_17, VAR_7 |
     VAR_6 | VAR_5, ((void*)0), VAR_16) ==
     VAR_0);
}
