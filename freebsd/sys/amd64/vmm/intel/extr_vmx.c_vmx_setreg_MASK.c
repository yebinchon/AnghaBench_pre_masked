
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vmx {TYPE_1__* ctx; int * vmcs; int vm; } ;
typedef int pmap_t ;
struct TYPE_2__ {int pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int,int*) ;
 int FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (struct vmx*,int,int ,int) ;
 int FUNC_7 (struct vmx*,int,int,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_10(void *VAR_9, int VAR_10, int VAR_11, uint64_t VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 uint64_t VAR_17;
 pmap_t VAR_18;
 struct vmx *VAR_19 = VAR_9;

 VAR_15 = FUNC_2(VAR_19->vm, VAR_10, &VAR_14);
 if (VAR_15 && VAR_14 != VAR_7)
  FUNC_1("vmx_setreg: %s%d is running", FUNC_3(VAR_19->vm), VAR_10);

 if (VAR_11 == VAR_6)
  return (FUNC_7(VAR_19, VAR_10, VAR_15, VAR_12));

 if (FUNC_9(&VAR_19->ctx[VAR_10], VAR_11, VAR_12) == 0)
  return (0);

 VAR_13 = FUNC_5(&VAR_19->vmcs[VAR_10], VAR_15, VAR_11, VAR_12);

 if (VAR_13 == 0) {





  if ((VAR_8 & VAR_3) != 0 &&
      (VAR_11 == VAR_5)) {
   FUNC_4(&VAR_19->vmcs[VAR_10], VAR_15,
        FUNC_0(VAR_1), &VAR_17);
   if (VAR_12 & VAR_0)
    VAR_17 |= VAR_2;
   else
    VAR_17 &= ~VAR_2;
   FUNC_5(&VAR_19->vmcs[VAR_10], VAR_15,
        FUNC_0(VAR_1), VAR_17);
  }

  VAR_16 = FUNC_8(VAR_11);
  if (VAR_16 > 0) {



   VAR_13 = FUNC_5(&VAR_19->vmcs[VAR_10], VAR_15,
        FUNC_0(VAR_16), VAR_12);
  }

  if (VAR_11 == VAR_4) {







   VAR_18 = VAR_19->ctx[VAR_10].pmap;
   FUNC_6(VAR_19, VAR_10, VAR_18, VAR_15);
  }
 }

 return (VAR_13);
}
