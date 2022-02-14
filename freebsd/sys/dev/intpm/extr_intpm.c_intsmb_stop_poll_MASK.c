
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {int io_res; scalar_t__ isbusy; int dev; } ;


 int FUNC_0 (struct intsmb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct intsmb_softc *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_5);


 for (VAR_7 = 0; VAR_7 < 0x7fff; VAR_7++)
  if (FUNC_1(VAR_5->io_res, VAR_3) &
      VAR_2)
   break;


 for (VAR_7 = 0; VAR_7 < 0x7fff; VAR_7++) {
  VAR_8 = FUNC_1(VAR_5->io_res, VAR_3);
  if (!(VAR_8 & VAR_2)) {
   VAR_5->isbusy = 0;
   VAR_6 = FUNC_3(VAR_5->dev, VAR_8);
   return (VAR_6);
  }
 }


 VAR_5->isbusy = 0;
 VAR_9 = FUNC_1(VAR_5->io_res, VAR_0);
 FUNC_2(VAR_5->io_res, VAR_0, VAR_9 & ~VAR_1);
 return (VAR_4);
}
