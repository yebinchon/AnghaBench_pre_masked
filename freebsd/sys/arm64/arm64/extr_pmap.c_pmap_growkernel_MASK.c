
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pd_entry_t ;
struct TYPE_8__ {int system_mtx; } ;
struct TYPE_7__ {int flags; } ;


 int FUNC_0 (int,char*) ;
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
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 TYPE_3__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int) ;
 int * FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (TYPE_3__*) ;
 TYPE_1__* FUNC_13 (int *,int,int) ;

void
FUNC_14(vm_offset_t VAR_16)
{
 vm_paddr_t VAR_17;
 vm_page_t VAR_18;
 pd_entry_t *VAR_19, *VAR_20, *VAR_21;

 FUNC_3(&VAR_13->system_mtx, VAR_6);

 VAR_16 = FUNC_11(VAR_16, VAR_4);
 if (VAR_16 - 1 >= FUNC_12(VAR_13))
  VAR_16 = FUNC_12(VAR_13);
 while (VAR_15 < VAR_16) {
  VAR_19 = FUNC_5(VAR_14, VAR_15);
  FUNC_0(FUNC_8(VAR_19) != 0,
      ("pmap_growkernel: No level 0 kernel entry"));

  VAR_20 = FUNC_6(VAR_19, VAR_15);
  if (FUNC_8(VAR_20) == 0) {

   VAR_18 = FUNC_13(((void*)0), VAR_15 >> VAR_0,
       VAR_8 | VAR_9 |
       VAR_10 | VAR_11);
   if (VAR_18 == ((void*)0))
    FUNC_4("pmap_growkernel: no memory to grow kernel");
   if ((VAR_18->flags & VAR_7) == 0)
    FUNC_10(VAR_18);

   FUNC_2(VAR_12);
   VAR_17 = FUNC_1(VAR_18);
   FUNC_9(VAR_20, VAR_17 | VAR_1);
   continue;
  }
  VAR_21 = FUNC_7(VAR_20, VAR_15);
  if (FUNC_8(VAR_21) != 0) {
   VAR_15 = (VAR_15 + VAR_4) & ~VAR_2;
   if (VAR_15 - 1 >= FUNC_12(VAR_13)) {
    VAR_15 = FUNC_12(VAR_13);
    break;
   }
   continue;
  }

  VAR_18 = FUNC_13(((void*)0), VAR_15 >> VAR_3,
      VAR_8 | VAR_9 | VAR_10 |
      VAR_11);
  if (VAR_18 == ((void*)0))
   FUNC_4("pmap_growkernel: no memory to grow kernel");
  if ((VAR_18->flags & VAR_7) == 0)
   FUNC_10(VAR_18);

  FUNC_2(VAR_12);
  VAR_17 = FUNC_1(VAR_18);
  FUNC_9(VAR_21, VAR_17 | VAR_5);

  VAR_15 = (VAR_15 + VAR_4) & ~VAR_2;
  if (VAR_15 - 1 >= FUNC_12(VAR_13)) {
   VAR_15 = FUNC_12(VAR_13);
   break;
  }
 }
}
