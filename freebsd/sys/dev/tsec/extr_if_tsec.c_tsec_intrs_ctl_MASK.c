
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {int dev; } ;
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
 int FUNC_0 (struct tsec_softc*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct tsec_softc *VAR_11, int VAR_12)
{
 device_t VAR_13;

 VAR_13 = VAR_11->dev;

 switch (VAR_12) {
 case 0:
  FUNC_0(VAR_11, VAR_10, 0);
  break;
 case 1:
  FUNC_0(VAR_11, VAR_10, VAR_0 |
      VAR_4 | VAR_1 | VAR_3 |
      VAR_2 | VAR_7 | VAR_6 |
      VAR_8 | VAR_9 | VAR_5);
  break;
 default:
  FUNC_1(VAR_13, "tsec_intrs_ctl(): unknown state value: %d\n",
      VAR_12);
 }
}
