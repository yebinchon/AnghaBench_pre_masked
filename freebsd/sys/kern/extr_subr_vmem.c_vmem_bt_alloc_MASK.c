
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vmem_addr_t ;
typedef int vm_size_t ;
typedef int uma_zone_t ;
typedef int uint8_t ;
struct TYPE_2__ {int vmd_kernel_arena; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,int ,scalar_t__,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__,int ) ;

__attribute__((used)) static void *
FUNC_7(uma_zone_t VAR_11, vm_size_t VAR_12, int VAR_13, uint8_t *VAR_14,
    int VAR_15)
{
 vmem_addr_t VAR_16;

 *VAR_14 = VAR_5;





 FUNC_1(&VAR_10);
 if (FUNC_5(VAR_9[VAR_13].vmd_kernel_arena, VAR_12, 0, 0, 0,
     VAR_7, VAR_6,
     VAR_2 | VAR_1 | VAR_3 | VAR_0, &VAR_16) == 0) {
  if (FUNC_0(VAR_13, VAR_8, VAR_16, VAR_12,
      VAR_2 | VAR_3) == 0) {
   FUNC_2(&VAR_10);
   return ((void *)VAR_16);
  }
  FUNC_6(VAR_9[VAR_13].vmd_kernel_arena, VAR_16, VAR_12);
  FUNC_2(&VAR_10);




  if (VAR_15 & VAR_4)
   FUNC_4(VAR_13);
  return (((void*)0));
 }
 FUNC_2(&VAR_10);



 if (VAR_15 & VAR_4)
  FUNC_3("btalloc", 1);

 return (((void*)0));
}
