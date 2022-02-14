
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int e6000sw_softc_t ;
typedef int device_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
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
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 e6000sw_softc_t *VAR_16;
 uint32_t VAR_17;

 VAR_16 = FUNC_2(VAR_12);
 FUNC_0(VAR_16, VAR_3);
 if (FUNC_1(VAR_16, VAR_10, VAR_4)) {
  FUNC_3(VAR_12, "Timeout while waiting for switch\n");
  return (VAR_0);
 }

 VAR_17 = VAR_14 & VAR_9;
 VAR_17 |= (VAR_13 << VAR_5) & VAR_6;


 FUNC_5(VAR_16, VAR_2, VAR_11, VAR_15);
 FUNC_5(VAR_16, VAR_2, VAR_10,
     VAR_17 | VAR_7);
 if (FUNC_1(VAR_16, VAR_10, VAR_4)) {
  FUNC_3(VAR_12, "Timeout while waiting for switch\n");
  return (VAR_0);
 }


 FUNC_5(VAR_16, VAR_2, VAR_10,
     VAR_17 | VAR_8);
 if (FUNC_1(VAR_16, VAR_10, VAR_4)) {
  FUNC_3(VAR_12, "Timeout while waiting for switch\n");
  return (VAR_0);
 }


 VAR_17 = FUNC_4(VAR_16, VAR_2, VAR_11);

 return (VAR_17 & VAR_1);
}
