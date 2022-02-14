
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {char channel; int flags; int dev_softc; } ;
typedef int aic_dev_softc_t ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_1)
{
 aic_dev_softc_t VAR_2;

 VAR_2 = VAR_1->dev_softc;
 switch (FUNC_0(VAR_2)) {
 case 130:
  VAR_1->channel = 'A';
  break;
 case 129:
  VAR_1->channel = 'B';
  break;
 case 128:
  VAR_1->channel = 'C';
  break;
 default:
  FUNC_1("adapter at unexpected slot %d\n"
         "unable to map to a channel\n",
         FUNC_0(VAR_2));
  VAR_1->channel = 'A';
  break;
 }
 VAR_1->flags |= VAR_0;
 return (0);
}
