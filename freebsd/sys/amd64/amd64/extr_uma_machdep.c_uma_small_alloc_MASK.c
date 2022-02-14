
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int uma_zone_t ;
typedef int u_int8_t ;
struct TYPE_3__ {int flags; int phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 TYPE_1__* FUNC_4 (int *,int ,int,int) ;

void *
FUNC_5(uma_zone_t VAR_6, vm_size_t VAR_7, int VAR_8, u_int8_t *VAR_9,
    int VAR_10)
{
 vm_page_t VAR_11;
 vm_paddr_t VAR_12;
 void *VAR_13;

 *VAR_9 = VAR_3;
 VAR_11 = FUNC_4(((void*)0), 0, VAR_8,
     FUNC_2(VAR_10) | VAR_4 | VAR_5);
 if (VAR_11 == ((void*)0))
  return (((void*)0));
 VAR_12 = VAR_11->phys_addr;
 if ((VAR_10 & VAR_0) == 0)
  FUNC_1(VAR_12);
 VAR_13 = (void *)FUNC_0(VAR_12);
 if ((VAR_10 & VAR_1) && (VAR_11->flags & VAR_2) == 0)
  FUNC_3(VAR_13);
 return (VAR_13);
}
