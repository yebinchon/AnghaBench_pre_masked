
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct csr TYPE_1__ ;


typedef int uint8_t ;
struct nxprtc_softc {int dev; } ;
typedef int csr ;
struct csr {int cs1; int cs2; int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct nxprtc_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct nxprtc_softc *VAR_5)
{
 struct csr {
  uint8_t cs1;
  uint8_t cs2;
  uint8_t sec;
 } VAR_6;
 int VAR_7;


 if ((VAR_7 = FUNC_1(VAR_5->dev, VAR_3, &VAR_6,
     sizeof(VAR_6), VAR_4)) != 0){
  FUNC_0(VAR_5->dev, "cannot read RTC control regs\n");
  return (VAR_7);
 }







 if ((VAR_6.cs1 & VAR_1) || (VAR_6.sec & VAR_2)) {
  FUNC_0(VAR_5->dev,
      "WARNING: RTC battery failed; time is invalid\n");






  if ((VAR_7 = FUNC_2(VAR_5, VAR_3, 0)) != 0) {
   FUNC_0(VAR_5->dev, "cannot write CS1 reg\n");
   return (VAR_7);
  }

  if ((VAR_7 = FUNC_2(VAR_5, VAR_0, 0)) != 0) {
   FUNC_0(VAR_5->dev, "cannot write CS1 reg\n");
   return (VAR_7);
  }
 }

 return (0);
}
