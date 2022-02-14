
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef void* vm_paddr_t ;
typedef int uint32_t ;
struct devmap_entry {scalar_t__ pd_size; void* pd_pa; int pd_va; } ;
typedef int ranges ;
typedef int phandle_t ;
typedef int pcell_t ;
struct TYPE_4__ {int mapped; scalar_t__ size; void* pa; int va; } ;
struct TYPE_3__ {scalar_t__ bank; scalar_t__ size; int va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,int) ;
 scalar_t__ FUNC_2 (int ,int*,int*) ;
 void* FUNC_3 (void*,int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

int
FUNC_5(phandle_t VAR_6, struct devmap_entry *VAR_7,
    int VAR_8, int *VAR_9)
{
 pcell_t VAR_10[VAR_2 * VAR_3];
 pcell_t *VAR_11;
 uint32_t VAR_12, VAR_13;
 vm_paddr_t VAR_14;
 vm_size_t VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 if ((FUNC_2(VAR_6, &VAR_17, &VAR_18)) != 0)
  return (VAR_0);

 VAR_19 = FUNC_4(VAR_6);
 if (VAR_19 > 2) {




  return (VAR_1);
 }

 VAR_12 = (VAR_17 + VAR_19 + VAR_18);
 if (VAR_12 > VAR_3)
  return (VAR_1);

 VAR_12 *= sizeof(pcell_t);

 VAR_16 = FUNC_1(VAR_6, "ranges", VAR_10, sizeof(VAR_10));
  if (VAR_16 <= 0)
  return (VAR_0);


  VAR_16 = VAR_16 / VAR_12;





  VAR_16 = FUNC_0(VAR_16, VAR_8);

  VAR_11 = &VAR_10[0];
  VAR_22 = 0;


 for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {


  VAR_13 = FUNC_3((void *)VAR_11, 1);
  VAR_11 += 1;

  if (VAR_13 > VAR_2) {

   VAR_11 += ((VAR_17 - 1) + VAR_19 +
       VAR_18);
   continue;
  }


  VAR_20 = -1;
  for (VAR_23 = 0; VAR_5[VAR_23].bank >= 0; VAR_23++) {
   if (VAR_5[VAR_23].bank == VAR_13) {
    VAR_20 = VAR_23;
    break;
   }
  }


  if (VAR_20 == -1) {
   VAR_11 += ((VAR_17 - 1) + VAR_19 +
       VAR_18);
   continue;
  }


  VAR_11 += (VAR_17 - 1);


  VAR_14 = FUNC_3((void *)VAR_11, VAR_19);
  VAR_11 += VAR_19;


  VAR_15 = FUNC_3((void *)VAR_11, VAR_18);
  VAR_11 += VAR_18;

  if (VAR_15 > VAR_5[VAR_20].size) {

   continue;
  }

  VAR_7[VAR_22].pd_va = VAR_5[VAR_20].va;
  VAR_7[VAR_22].pd_pa = VAR_14;
  VAR_7[VAR_22].pd_size = VAR_15;


  VAR_4[VAR_13].va = VAR_7[VAR_22].pd_va;
  VAR_4[VAR_13].pa = VAR_7[VAR_22].pd_pa;
  VAR_4[VAR_13].size = VAR_7[VAR_22].pd_size;
  VAR_4[VAR_13].mapped = 1;

  VAR_22++;
 }

 *VAR_9 = VAR_22;
 return (0);
}
