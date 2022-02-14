
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
typedef scalar_t__ pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {scalar_t__ pv_memattr; } ;
struct TYPE_6__ {int oflags; TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int,int,int *,struct rwlock**) ;

__attribute__((used)) static bool
FUNC_5(pmap_t VAR_20, vm_offset_t VAR_21, vm_page_t VAR_22, vm_prot_t VAR_23,
    struct rwlock **VAR_24)
{
 pd_entry_t VAR_25;

 FUNC_2(VAR_20, VAR_12);

 VAR_25 = (pd_entry_t)(FUNC_3(VAR_22) | VAR_3 |
     FUNC_1(VAR_22->md.pv_memattr) | FUNC_0(VAR_1) | VAR_11);
 if ((VAR_22->oflags & VAR_18) == 0) {
  VAR_25 |= VAR_5;
  VAR_25 &= ~VAR_0;
 }
 if ((VAR_23 & VAR_17) == 0 || VAR_22->md.pv_memattr == VAR_9)
  VAR_25 |= VAR_7;
 if (VAR_21 < VAR_16)
  VAR_25 |= FUNC_0(VAR_2) | VAR_4;
 else
  VAR_25 |= VAR_6;
 if (VAR_20 != VAR_19)
  VAR_25 |= VAR_8;
 return (FUNC_4(VAR_20, VAR_21, VAR_25, VAR_15 |
     VAR_14 | VAR_13, ((void*)0), VAR_24) ==
     VAR_10);
}
