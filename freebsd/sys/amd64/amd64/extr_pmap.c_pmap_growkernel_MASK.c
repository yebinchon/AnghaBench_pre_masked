
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
struct TYPE_8__ {int system_mtx; } ;
struct TYPE_7__ {int flags; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,int ) ;
 int VAR_17 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int) ;
 int* FUNC_5 (int ,int) ;
 int* FUNC_6 (int*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_1__* FUNC_10 (int *,int,int) ;

void
FUNC_11(vm_offset_t VAR_18)
{
 vm_paddr_t VAR_19;
 vm_page_t VAR_20;
 pd_entry_t *VAR_21, VAR_22;
 pdp_entry_t *VAR_23;

 FUNC_1(&VAR_14->system_mtx, VAR_1);
 if (VAR_0 < VAR_18 && VAR_18 <= VAR_0 + VAR_17 * VAR_2)
  return;

 VAR_18 = FUNC_8(VAR_18, VAR_2);
 if (VAR_18 - 1 >= FUNC_9(VAR_14))
  VAR_18 = FUNC_9(VAR_14);
 while (VAR_16 < VAR_18) {
  VAR_23 = FUNC_5(VAR_15, VAR_16);
  if ((*VAR_23 & VAR_13) == 0) {

   VAR_20 = FUNC_10(((void*)0), VAR_16 >> VAR_3,
       VAR_6 | VAR_7 |
       VAR_8 | VAR_9);
   if (VAR_20 == ((void*)0))
    FUNC_2("pmap_growkernel: no memory to grow kernel");
   if ((VAR_20->flags & VAR_5) == 0)
    FUNC_7(VAR_20);
   VAR_19 = FUNC_0(VAR_20);
   *VAR_23 = (pdp_entry_t)(VAR_19 | VAR_13 | VAR_12 |
       VAR_10 | VAR_11);
   continue;
  }
  VAR_21 = FUNC_6(VAR_23, VAR_16);
  if ((*VAR_21 & VAR_13) != 0) {
   VAR_16 = (VAR_16 + VAR_2) & ~VAR_4;
   if (VAR_16 - 1 >= FUNC_9(VAR_14)) {
    VAR_16 = FUNC_9(VAR_14);
    break;
   }
   continue;
  }

  VAR_20 = FUNC_10(((void*)0), FUNC_4(VAR_16),
      VAR_6 | VAR_7 | VAR_8 |
      VAR_9);
  if (VAR_20 == ((void*)0))
   FUNC_2("pmap_growkernel: no memory to grow kernel");
  if ((VAR_20->flags & VAR_5) == 0)
   FUNC_7(VAR_20);
  VAR_19 = FUNC_0(VAR_20);
  VAR_22 = VAR_19 | VAR_13 | VAR_12 | VAR_10 | VAR_11;
  FUNC_3(VAR_21, VAR_22);

  VAR_16 = (VAR_16 + VAR_2) & ~VAR_4;
  if (VAR_16 - 1 >= FUNC_9(VAR_14)) {
   VAR_16 = FUNC_9(VAR_14);
   break;
  }
 }
}
