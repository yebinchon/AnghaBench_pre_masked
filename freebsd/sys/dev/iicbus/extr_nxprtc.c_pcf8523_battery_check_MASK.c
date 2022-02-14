
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {scalar_t__ tv_sec; } ;
struct nxprtc_softc {scalar_t__ bat_time; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct timespec*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (struct nxprtc_softc*,int ,int*) ;
 int FUNC_5 (struct nxprtc_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct nxprtc_softc *VAR_4)
{
 struct timespec VAR_5;
 int VAR_6;
 uint8_t VAR_7;


 FUNC_1(&VAR_5);
 if (VAR_5.tv_sec < VAR_4->bat_time)
  return (0);
 VAR_4->bat_time = VAR_5.tv_sec + (60 * 60 * 24);
 VAR_6 = FUNC_5(VAR_4, VAR_3, VAR_2);
 if (VAR_6 != 0) {
  FUNC_0(VAR_4->dev, "cannot write CS3 reg\n");
  return (VAR_6);
 }
 FUNC_3("nxpbat", FUNC_2(10), 0, 0);
 if ((VAR_6 = FUNC_4(VAR_4, VAR_3, &VAR_7)) != 0) {
  FUNC_0(VAR_4->dev, "cannot read CS3 reg\n");
  return (VAR_6);
 }
 VAR_6 = FUNC_5(VAR_4, VAR_3, VAR_1);
 if (VAR_6 != 0) {
  FUNC_0(VAR_4->dev, "cannot write CS3 reg\n");
  return (VAR_6);
 }

 if (VAR_7 & VAR_0)
  FUNC_0(VAR_4->dev, "WARNING: RTC battery is low\n");

 return (0);
}
