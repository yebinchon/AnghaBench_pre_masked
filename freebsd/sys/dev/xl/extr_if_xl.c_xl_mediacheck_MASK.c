
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xl_softc {int xl_media; scalar_t__ xl_xcvr; scalar_t__ xl_type; int xl_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct xl_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct xl_softc *VAR_5)
{







 if (VAR_5->xl_media & (VAR_1 & ~VAR_2)) {




  if (VAR_5->xl_xcvr <= VAR_4)
   return;
  else {
   FUNC_0(VAR_5->xl_dev,
       "bogus xcvr value in EEPROM (%x)\n", VAR_5->xl_xcvr);
   FUNC_0(VAR_5->xl_dev,
       "choosing new default based on card type\n");
  }
 } else {
  if (VAR_5->xl_type == VAR_3 &&
      VAR_5->xl_media & VAR_0)
   return;
  FUNC_0(VAR_5->xl_dev,
"WARNING: no media options bits set in the media options register!!\n");
  FUNC_0(VAR_5->xl_dev,
"this could be a manufacturing defect in your adapter or system\n");
  FUNC_0(VAR_5->xl_dev,
"attempting to guess media type; you should probably consult your vendor\n");
 }

 FUNC_1(VAR_5, 1);
}
