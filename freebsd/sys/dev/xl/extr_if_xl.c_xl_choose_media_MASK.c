
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xl_softc {int xl_xcvr; int xl_dev; int xl_media; int xl_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xl_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct xl_softc*) ;







 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct xl_softc*,int) ;

__attribute__((used)) static void
FUNC_4(struct xl_softc *VAR_8, int *VAR_9)
{

 FUNC_0(VAR_8);

 switch (VAR_8->xl_xcvr) {
 case 132:
  *VAR_9 = VAR_5|VAR_4;
  FUNC_3(VAR_8, *VAR_9);
  break;
 case 131:
  if (VAR_8->xl_type == VAR_7 &&
      VAR_8->xl_media == VAR_6) {
   *VAR_9 = VAR_5|VAR_3;
   FUNC_3(VAR_8, *VAR_9);
  } else {
   *VAR_9 = VAR_5|VAR_2;
   FUNC_3(VAR_8, *VAR_9);
  }
  break;
 case 129:
  *VAR_9 = VAR_5|VAR_1;
  FUNC_3(VAR_8, *VAR_9);
  break;
 case 130:
 case 133:
 case 128:

  break;
 case 134:
  *VAR_9 = VAR_5|VAR_0;
  break;
 default:
  FUNC_2(VAR_8->xl_dev, "unknown XCVR type: %d\n",
      VAR_8->xl_xcvr);




  *VAR_9 = VAR_5|VAR_4;
  break;
 }

 FUNC_1(VAR_8);
}
