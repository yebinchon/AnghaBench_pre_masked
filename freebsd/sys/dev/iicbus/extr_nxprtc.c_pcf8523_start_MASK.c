
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct csr TYPE_1__ ;


typedef int uint8_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct nxprtc_softc {int use_ampm; int dev; scalar_t__ freqadj; scalar_t__ is212x; } ;
typedef scalar_t__ int8_t ;
typedef int csr ;
struct csr {int cs1; int cs2; int cs3; int sec; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct nxprtc_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int VAR_18 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_19 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (struct nxprtc_softc*) ;
 int FUNC_9 (struct nxprtc_softc*,int ,int*) ;
 int FUNC_10 (struct nxprtc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct nxprtc_softc *VAR_20)
{
 struct sysctl_ctx_list *VAR_21;
 struct sysctl_oid_list *VAR_22;
 struct csr {
  uint8_t cs1;
  uint8_t cs2;
  uint8_t cs3;
  uint8_t sec;
 } VAR_23;
 int VAR_24;
 uint8_t VAR_25, VAR_26;


 if ((VAR_24 = FUNC_6(VAR_20->dev, VAR_17, &VAR_23,
     sizeof(VAR_23), VAR_18)) != 0){
  FUNC_4(VAR_20->dev, "cannot read RTC control regs\n");
  return (VAR_24);
 }







 if ((VAR_23.cs3 & VAR_13) == VAR_12 ||
     (VAR_23.cs1 & VAR_15) || (VAR_23.sec & VAR_16)) {
  FUNC_4(VAR_20->dev,
      "WARNING: RTC battery failed; time is invalid\n");
  if (VAR_20->is212x) {
   VAR_24 = FUNC_10(VAR_20, VAR_17, 0);
   if (VAR_24 != 0) {
    FUNC_4(VAR_20->dev,
        "cannot write CS1 reg\n");
    return (VAR_24);
   }

   VAR_24 = FUNC_10(VAR_20, VAR_6, VAR_4);
   if (VAR_24 != 0) {
    FUNC_4(VAR_20->dev,
        "cannot write timestamp control\n");
    return (VAR_24);
   }

   VAR_25 = VAR_7;
   VAR_24 = FUNC_10(VAR_20, VAR_14, VAR_25);
   if (VAR_24 == 0)
    VAR_24 = FUNC_10(VAR_20, VAR_14,
        VAR_25 | VAR_8);
   if (VAR_24 != 0) {
    FUNC_4(VAR_20->dev,
        "cannot write CLKOUT control\n");
    return (VAR_24);
   }
   FUNC_7("nxpotp", FUNC_5(100), FUNC_5(10), 0);
  } else
   VAR_25 = VAR_10;


  if ((VAR_24 = FUNC_10(VAR_20, VAR_14, VAR_25)) != 0) {
   FUNC_4(VAR_20->dev, "cannot write CLKOUT control\n");
   return (VAR_24);
  }
 }






 FUNC_8(VAR_20);
 if (VAR_20->is212x) {
  if (VAR_23.cs1 & VAR_9)
   VAR_20->use_ampm = 1;

  VAR_24 = FUNC_9(VAR_20, VAR_5, &VAR_26);
  if (VAR_24 != 0) {
   FUNC_4(VAR_20->dev,
       "cannot read AGINGOFFSET register\n");
   return (VAR_24);
  }
  VAR_20->freqadj = (int8_t)VAR_26;

  VAR_21 = FUNC_2(VAR_20->dev);
  VAR_22 = FUNC_1(FUNC_3(VAR_20->dev));

  FUNC_0(VAR_21, VAR_22, VAR_3, "freqadj",
      VAR_1 | VAR_2 | VAR_0, VAR_20, 0,
      VAR_19, "I", "Frequency adjust in PPM, range [-7,+8]");
 } else {
  if (VAR_23.cs1 & VAR_11)
   VAR_20->use_ampm = 1;
 }

 return (0);
}
