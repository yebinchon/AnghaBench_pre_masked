
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct bcma_intr {int dummy; } ;
struct bcma_devinfo {scalar_t__ num_intrs; int intrs; int * res_agent; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (struct bcma_devinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,struct bcma_intr*,int ) ;
 scalar_t__ VAR_6 ;
 struct bcma_intr* FUNC_6 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8, device_t VAR_9,
    struct bcma_devinfo *VAR_10)
{
 uint32_t VAR_11, VAR_12;


 if (VAR_10->res_agent == ((void*)0))
  return (0);


 VAR_11 = FUNC_7(VAR_10->res_agent, VAR_1);
 if (!FUNC_1(VAR_11, VAR_0))
  return (0);


 VAR_12 = FUNC_7(VAR_10->res_agent,
      FUNC_4(VAR_3));
 if (VAR_12 >= VAR_4) {
  FUNC_8(VAR_8, "ignoring invalid OOBOUTWIDTH for core %u: "
      "%#x\n", FUNC_0(VAR_10), VAR_12);
  return (0);
 }



 for (uint32_t VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  struct bcma_intr *VAR_14;
  uint32_t VAR_15;
  uint8_t VAR_16;

  if (VAR_10->num_intrs == VAR_6)
   return (VAR_5);

  VAR_15 = FUNC_7(VAR_10->res_agent, FUNC_2(
      VAR_3, VAR_13));

  VAR_16 = (VAR_15 >> FUNC_3(VAR_13)) &
      VAR_2;

  VAR_14 = FUNC_6(VAR_3, VAR_13, VAR_16);
  if (VAR_14 == ((void*)0)) {
   FUNC_8(VAR_8, "failed allocating interrupt "
       "descriptor %#x for core %u\n", VAR_13,
       FUNC_0(VAR_10));
   return (VAR_5);
  }

  FUNC_5(&VAR_10->intrs, VAR_14, VAR_7);
  VAR_10->num_intrs++;
 }

 return (0);
}
