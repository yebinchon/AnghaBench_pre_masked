
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmx {TYPE_1__* cap; struct vmcs* vmcs; } ;
struct vmcs {int dummy; } ;
struct TYPE_2__ {int proc_ctls; int proc_ctls2; int set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vmcs*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct vmcs*) ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
 struct vmx *VAR_17 = VAR_13;
 struct vmcs *VAR_18 = &VAR_17->vmcs[VAR_14];
 uint32_t VAR_19;
 uint32_t *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_24 = VAR_0;
 VAR_20 = ((void*)0);

 switch (VAR_15) {
 case 131:
  if (VAR_8) {
   VAR_24 = 0;
   VAR_20 = &VAR_17->cap[VAR_14].proc_ctls;
   VAR_19 = *VAR_20;
   VAR_22 = VAR_3;
   VAR_23 = VAR_6;
  }
  break;
 case 130:
  if (VAR_10) {
   VAR_24 = 0;
   VAR_20 = &VAR_17->cap[VAR_14].proc_ctls;
   VAR_19 = *VAR_20;
   VAR_22 = VAR_4;
   VAR_23 = VAR_6;
  }
  break;
 case 129:
  if (VAR_11) {
   VAR_24 = 0;
   VAR_20 = &VAR_17->cap[VAR_14].proc_ctls;
   VAR_19 = *VAR_20;
   VAR_22 = VAR_5;
   VAR_23 = VAR_6;
  }
  break;
 case 128:
  if (VAR_12) {
   VAR_24 = 0;
   VAR_20 = &VAR_17->cap[VAR_14].proc_ctls2;
   VAR_19 = *VAR_20;
   VAR_22 = VAR_2;
   VAR_23 = VAR_7;
  }
  break;
 case 132:
  if (VAR_9) {
   VAR_24 = 0;
   VAR_20 = &VAR_17->cap[VAR_14].proc_ctls2;
   VAR_19 = *VAR_20;
   VAR_22 = VAR_1;
   VAR_23 = VAR_7;
  }
  break;
 default:
  break;
 }

 if (VAR_24 == 0) {
  if (VAR_16) {
   VAR_19 |= VAR_22;
  } else {
   VAR_19 &= ~VAR_22;
  }
  FUNC_1(VAR_18);
  VAR_21 = FUNC_2(VAR_23, VAR_19);
  FUNC_0(VAR_18);

  if (VAR_21) {
   VAR_24 = VAR_21;
  } else {




   if (VAR_20 != ((void*)0)) {
    *VAR_20 = VAR_19;
   }

   if (VAR_16) {
    VAR_17->cap[VAR_14].set |= (1 << VAR_15);
   } else {
    VAR_17->cap[VAR_14].set &= ~(1 << VAR_15);
   }
  }
 }

 return (VAR_24);
}
