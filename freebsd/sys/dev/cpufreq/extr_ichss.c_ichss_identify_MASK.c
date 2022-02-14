
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pmbase ;
typedef int driver_t ;
typedef int * device_t ;


 int * FUNC_0 (int *,int,char*,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int ,int,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int * VAR_11 ;
 int * FUNC_6 (int ,int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,int ) ;

__attribute__((used)) static void
FUNC_13(driver_t *VAR_12, device_t VAR_13)
{
 device_t VAR_14;
 uint32_t VAR_15;

 if (FUNC_12("ichss", 0))
  return;






 if (FUNC_4(VAR_13) != 0)
  return;


 if (FUNC_3(VAR_13, "ichss", -1))
  return;







 VAR_11 = FUNC_6(0, 0x1f, 0);
 if (VAR_11 == ((void*)0) ||
     FUNC_9(VAR_11) != VAR_9 ||
     (FUNC_7(VAR_11) != VAR_5 &&
     FUNC_7(VAR_11) != VAR_6 &&
     FUNC_7(VAR_11) != VAR_7))
  return;






 if (FUNC_7(VAR_11) == VAR_5) {
  device_t VAR_16;

  VAR_16 = FUNC_6(0, 0, 0);
  if (VAR_16 != ((void*)0) &&
      FUNC_9(VAR_16) == VAR_9 &&
      FUNC_7(VAR_16) == VAR_8 &&
      FUNC_8(VAR_16) < 5)
   return;
 }


 VAR_15 = FUNC_10(VAR_11, VAR_4,
     sizeof(VAR_15));
 if ((VAR_15 & VAR_2) == 0) {
  FUNC_11("ichss: invalid PMBASE memory type\n");
  return;
 }
 VAR_15 &= VAR_3;
 if (VAR_15 == 0) {
  FUNC_11("ichss: invalid zero PMBASE address\n");
  return;
 }
 FUNC_1("ichss: PMBASE is %#x\n", VAR_15);

 VAR_14 = FUNC_0(VAR_13, 20, "ichss", 0);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(VAR_13, "add SpeedStep child failed\n");
  return;
 }


 FUNC_2(VAR_14, VAR_10, 0, VAR_15 + VAR_0,
     1);
 FUNC_2(VAR_14, VAR_10, 1, VAR_15 + VAR_1,
     1);
}
