
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tmc_softc {int etf_configured; int dev_type; int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct tmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8)
{
 struct tmc_softc *VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_2(VAR_8);


 FUNC_1(VAR_9->res, VAR_2, VAR_4);


 FUNC_1(VAR_9->res, VAR_7, VAR_4);

 VAR_10 = FUNC_0(VAR_9->res, VAR_6);
 VAR_10 &= VAR_5;
 switch (VAR_10) {
 case 128:
  VAR_9->dev_type = VAR_1;
  FUNC_3(VAR_8, "ETR configuration found\n");
  break;
 case 129:
  VAR_9->dev_type = VAR_0;
  FUNC_3(VAR_8, "ETF configuration found\n");
  if (VAR_9->etf_configured == 0) {
   FUNC_4(VAR_8);
   VAR_9->etf_configured = 1;
  }
  break;
 default:
  VAR_9->dev_type = VAR_3;
  break;
 }

 return (0);
}
