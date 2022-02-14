
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int gfp_t ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,int ,int) ;
 TYPE_1__* FUNC_6 (int *,int ,int,unsigned long,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int,unsigned long,int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*) ;

vm_page_t
FUNC_10(gfp_t VAR_13, unsigned int VAR_14)
{
 vm_page_t VAR_15;

 if (VAR_7) {
  unsigned long VAR_16 = 1UL << VAR_14;
  int VAR_17 = VAR_8 | VAR_10 | VAR_9;

  if ((VAR_13 & VAR_4) != 0)
   VAR_17 |= VAR_11;
  if (VAR_14 == 0 && (VAR_13 & VAR_2) == 0) {
   VAR_15 = FUNC_5(((void*)0), 0, VAR_17);
   if (VAR_15 == ((void*)0))
    return (((void*)0));
  } else {
   vm_paddr_t VAR_18 = (VAR_13 & VAR_2) ?
       VAR_1 : VAR_0;
  retry:
   VAR_15 = FUNC_6(((void*)0), 0, VAR_17,
       VAR_16, 0, VAR_18, VAR_5, 0, VAR_12);

   if (VAR_15 == ((void*)0)) {
    if (VAR_13 & VAR_3) {
     if (!FUNC_7(VAR_17,
         VAR_16, 0, VAR_18, VAR_5, 0)) {
      FUNC_8(((void*)0));
     }
     VAR_13 &= ~VAR_3;
     goto retry;
    }
    return (((void*)0));
   }
  }
  if (VAR_13 & VAR_4) {
   unsigned long VAR_19;

   for (VAR_19 = 0; VAR_19 != VAR_16; VAR_19++) {
    vm_page_t VAR_20 = VAR_15 + VAR_19;

    if ((VAR_20->flags & VAR_6) == 0)
     FUNC_4(VAR_20);
   }
  }
 } else {
  vm_offset_t VAR_21;

  VAR_21 = FUNC_2(VAR_13, VAR_14);
  if (VAR_21 == 0)
   return (((void*)0));

  VAR_15 = FUNC_1(FUNC_9((void *)VAR_21));

  FUNC_0(VAR_21 == (vm_offset_t)FUNC_3(VAR_15),
      ("Page address mismatch"));
 }

 return (VAR_15);
}
