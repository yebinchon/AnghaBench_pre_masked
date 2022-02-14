
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct mgb_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 struct mgb_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mgb_softc*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct mgb_softc *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(FUNC_1(VAR_10));

 if (FUNC_3(VAR_14, VAR_1,
     0, VAR_2) == VAR_9)
  return VAR_0;
 VAR_15 = (VAR_11 & VAR_4) << VAR_5;
 VAR_15 |= (VAR_12 & VAR_6) << VAR_7;
 VAR_15 |= VAR_2 | VAR_8;
 FUNC_0(VAR_14, VAR_3, VAR_13);
 FUNC_0(VAR_14, VAR_1, VAR_15);
 if (FUNC_3(VAR_14, VAR_1, 0, VAR_2) ==
     VAR_9)
  return VAR_0;
 return 0;
}
