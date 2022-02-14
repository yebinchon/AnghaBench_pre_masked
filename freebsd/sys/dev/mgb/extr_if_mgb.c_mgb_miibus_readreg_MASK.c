
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct mgb_softc*,int ) ;
 int FUNC_1 (struct mgb_softc*,int ,int) ;
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
 int FUNC_2 (int ) ;
 struct mgb_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct mgb_softc*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_10, int VAR_11, int VAR_12)
{
 struct mgb_softc *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(FUNC_2(VAR_10));

 if (FUNC_4(VAR_13, VAR_1, 0, VAR_2) ==
     VAR_9)
  return VAR_0;
 VAR_14 = (VAR_11 & VAR_4) << VAR_5;
 VAR_14 |= (VAR_12 & VAR_7) << VAR_8;
 VAR_14 |= VAR_2 | VAR_6;
 FUNC_1(VAR_13, VAR_1, VAR_14);
 if (FUNC_4(VAR_13, VAR_1, 0, VAR_2) ==
     VAR_9)
  return VAR_0;
 return (FUNC_0(VAR_13, VAR_3));
}
