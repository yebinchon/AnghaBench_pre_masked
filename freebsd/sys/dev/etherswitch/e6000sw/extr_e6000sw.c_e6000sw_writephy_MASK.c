
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int e6000sw_softc_t ;
typedef int device_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
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
 int VAR_12 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
 e6000sw_softc_t *VAR_17;

 VAR_17 = FUNC_2(VAR_13);
 if (!FUNC_4(VAR_17, VAR_14) || VAR_15 >= VAR_0) {
  FUNC_3(VAR_13, "Wrong register address.\n");
  return (VAR_1);
 }

 FUNC_0(VAR_17, VAR_5);
 if (FUNC_1(VAR_17, VAR_11, VAR_6)) {
  FUNC_3(VAR_13, "Timeout while waiting for switch\n");
  return (VAR_2);
 }

 FUNC_5(VAR_17, VAR_4, VAR_12,
     VAR_16 & VAR_3);
 FUNC_5(VAR_17, VAR_4, VAR_11,
     VAR_9 | (VAR_15 & VAR_10) |
     ((VAR_14 << VAR_7) & VAR_8));

 return (0);
}
