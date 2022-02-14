
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vm {int dummy; } ;
struct vlapic {TYPE_1__* apic_page; } ;
typedef int cpuset_t ;
struct TYPE_2__ {int dfr; int ldr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vlapic*,char*,int) ;
 int FUNC_6 (struct vm*) ;
 int FUNC_7 (struct vm*,int) ;
 int FUNC_8 (struct vm*) ;
 struct vlapic* FUNC_9 (struct vm*,int) ;
 scalar_t__ FUNC_10 (struct vlapic*) ;

__attribute__((used)) static void
FUNC_11(struct vm *VAR_3, cpuset_t *VAR_4, uint32_t VAR_5, bool VAR_6,
    bool VAR_7, bool VAR_8)
{
 struct vlapic *VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17;
 cpuset_t VAR_18;
 int VAR_19;

 if ((VAR_8 && VAR_5 == 0xffffffff) ||
     (!VAR_8 && VAR_5 == 0xff)) {



  *VAR_4 = FUNC_6(VAR_3);
  return;
 }

 if (VAR_6) {



  FUNC_4(VAR_4);
  VAR_19 = FUNC_7(VAR_3, VAR_5);
  VAR_18 = FUNC_6(VAR_3);
  if (VAR_19 < FUNC_8(VAR_3) && FUNC_2(VAR_19, &VAR_18))
   FUNC_3(VAR_19, VAR_4);
 } else {




  VAR_14 = VAR_5 & 0xff;





  if (VAR_8) {
   VAR_17 = VAR_5 >> 16;
   VAR_15 = VAR_5 & 0xffff;
  } else {
   VAR_17 = (VAR_5 >> 4) & 0xf;
   VAR_15 = VAR_5 & 0xf;
  }





  FUNC_4(VAR_4);
  VAR_18 = FUNC_6(VAR_3);
  while ((VAR_19 = FUNC_1(&VAR_18)) != 0) {
   VAR_19--;
   FUNC_0(VAR_19, &VAR_18);

   VAR_9 = FUNC_9(VAR_3, VAR_19);
   VAR_10 = VAR_9->apic_page->dfr;
   VAR_11 = VAR_9->apic_page->ldr;

   if ((VAR_10 & VAR_2) ==
       VAR_1) {
    VAR_12 = VAR_11 >> 24;
    VAR_16 = VAR_14;
   } else if ((VAR_10 & VAR_2) ==
       VAR_0) {
    if (FUNC_10(VAR_9)) {
     VAR_13 = VAR_11 >> 16;
     VAR_12 = VAR_11 & 0xffff;
    } else {
     VAR_13 = VAR_11 >> 28;
     VAR_12 = (VAR_11 >> 24) & 0xf;
    }
    if (VAR_13 != VAR_17)
     continue;
    VAR_16 = VAR_15;
   } else {




    FUNC_5(VAR_9, "vlapic has bad logical "
        "model %x - cannot deliver interrupt", VAR_10);
    continue;
   }

   if ((VAR_16 & VAR_12) != 0) {
    FUNC_3(VAR_19, VAR_4);
    if (VAR_7)
     break;
   }
  }
 }
}
