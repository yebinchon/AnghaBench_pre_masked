
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffec_softc {int dummy; } ;
typedef int device_t ;


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
 int FUNC_0 (struct ffec_softc*,int ,int) ;
 struct ffec_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ffec_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 struct ffec_softc *VAR_15;

 VAR_15 = FUNC_1(VAR_11);

 FUNC_0(VAR_15, VAR_1, VAR_0);

 FUNC_0(VAR_15, VAR_8, VAR_3 |
     VAR_9 | VAR_10 |
     ((VAR_12 << VAR_5) & VAR_4) |
     ((VAR_13 << VAR_7) & VAR_6) |
     (VAR_14 & VAR_2));

 if (!FUNC_3(VAR_15)) {
  FUNC_2(VAR_11, "timeout waiting for mii write\n");
  return (-1);
 }

 return (0);
}
