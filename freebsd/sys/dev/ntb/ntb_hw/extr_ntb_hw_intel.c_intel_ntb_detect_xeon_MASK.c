
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ntb_softc {int ppd; int conn_type; int device; int features; int dev_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ntb_softc *VAR_10)
{
 uint8_t VAR_11, VAR_12;

 VAR_11 = FUNC_2(VAR_10->device, VAR_3, 1);
 VAR_10->ppd = VAR_11;

 if ((VAR_11 & VAR_8) != 0)
  VAR_10->dev_type = VAR_1;
 else
  VAR_10->dev_type = VAR_2;

 if ((VAR_11 & VAR_9) != 0)
  VAR_10->features |= VAR_6;

 if (FUNC_0(VAR_10, VAR_4) &&
     !FUNC_0(VAR_10, VAR_6)) {
  FUNC_1(VAR_10->device,
      "Can not apply SB01BASE_LOCKUP workaround "
      "with split BARs disabled!\n");
  FUNC_1(VAR_10->device,
      "Expect system hangs under heavy NTB traffic!\n");
  VAR_10->features &= ~VAR_4;
 }





 if (FUNC_0(VAR_10, VAR_4))
  VAR_10->features &= ~VAR_5;

 VAR_12 = VAR_11 & VAR_7;
 switch (VAR_12) {
 case 130:
  VAR_10->conn_type = VAR_12;
  break;
 case 129:
 case 128:
 default:
  FUNC_1(VAR_10->device, "Unsupported connection type: %u\n",
      (unsigned)VAR_12);
  return (VAR_0);
 }
 return (0);
}
