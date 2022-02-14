
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vhpet {int config; int isr; TYPE_1__* timer; int vm; } ;
struct TYPE_2__ {int cap_config; int compval; int msireg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct vhpet*) ;
 int VAR_5 ;
 int FUNC_5 (struct vhpet*) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct vhpet*,int *) ;
 struct vhpet* FUNC_9 (void*) ;

int
FUNC_10(void *VAR_6, int VAR_7, uint64_t VAR_8, uint64_t *VAR_9, int VAR_10,
    void *VAR_11)
{
 int VAR_12, VAR_13;
 struct vhpet *VAR_14;
 uint64_t VAR_15;

 VAR_14 = FUNC_9(VAR_6);
 VAR_13 = VAR_8 - VAR_4;

 FUNC_4(VAR_14);


 if (VAR_10 != 4 && VAR_10 != 8) {
  FUNC_6(VAR_14->vm, "hpet invalid mmio read: "
      "offset 0x%08x, size %d", VAR_13, VAR_10);
  VAR_15 = 0;
  goto done;
 }


 if (VAR_13 & (VAR_10 - 1)) {
  FUNC_6(VAR_14->vm, "hpet invalid mmio read: "
      "offset 0x%08x, size %d", VAR_13, VAR_10);
  VAR_15 = 0;
  goto done;
 }

 if (VAR_13 == VAR_0 || VAR_13 == VAR_0 + 4) {
  VAR_15 = FUNC_7();
  goto done;
 }

 if (VAR_13 == VAR_1 || VAR_13 == VAR_1 + 4) {
  VAR_15 = VAR_14->config;
  goto done;
 }

 if (VAR_13 == VAR_2 || VAR_13 == VAR_2 + 4) {
  VAR_15 = VAR_14->isr;
  goto done;
 }

 if (VAR_13 == VAR_3 || VAR_13 == VAR_3 + 4) {
  VAR_15 = FUNC_8(VAR_14, ((void*)0));
  goto done;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (VAR_13 == FUNC_0(VAR_12) ||
      VAR_13 == FUNC_0(VAR_12) + 4) {
   VAR_15 = VAR_14->timer[VAR_12].cap_config;
   break;
  }

  if (VAR_13 == FUNC_1(VAR_12) ||
      VAR_13 == FUNC_1(VAR_12) + 4) {
   VAR_15 = VAR_14->timer[VAR_12].compval;
   break;
  }

  if (VAR_13 == FUNC_3(VAR_12) ||
      VAR_13 == FUNC_2(VAR_12)) {
   VAR_15 = VAR_14->timer[VAR_12].msireg;
   break;
  }
 }

 if (VAR_12 >= VAR_5)
  VAR_15 = 0;
done:
 FUNC_5(VAR_14);

 if (VAR_10 == 4) {
  if (VAR_13 & 0x4)
   VAR_15 >>= 32;
 }
 *VAR_9 = VAR_15;
 return (0);
}
