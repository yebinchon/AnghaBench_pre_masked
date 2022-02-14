
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int uma_zone_t ;
typedef int u_int8_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (int,int,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;

void *
FUNC_8(uma_zone_t VAR_12, vm_size_t VAR_13, int VAR_14, u_int8_t *VAR_15,
    int VAR_16)
{
 vm_paddr_t VAR_17;
 vm_page_t VAR_18;
 int VAR_19;
 void *VAR_20;

 *VAR_15 = VAR_6;
 VAR_19 = FUNC_4(VAR_16) | VAR_10;

 VAR_19 &= ~(VAR_9 | VAR_8);
 VAR_19 |= VAR_7;


 for (;;) {
  VAR_18 = FUNC_5(VAR_14, VAR_11,
      VAR_19);

  if (VAR_18 == ((void*)0) && FUNC_6(VAR_19, 1,
      0, VAR_0, VAR_4, 0))
   continue;

  if (VAR_18 != ((void*)0))
   break;
  if ((VAR_16 & VAR_2) != 0)
   return (((void*)0));
  FUNC_7(((void*)0));
 }

 VAR_17 = FUNC_1(VAR_18);
 if ((VAR_16 & VAR_1) == 0)
  FUNC_3(VAR_17);
 VAR_20 = (void *)FUNC_0(VAR_17);
 if ((VAR_16 & VAR_3) && (VAR_18->flags & VAR_5) == 0)
  FUNC_2(VAR_20, VAR_4);
 return (VAR_20);
}
