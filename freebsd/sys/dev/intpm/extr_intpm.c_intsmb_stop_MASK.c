
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {int io_res; scalar_t__ isbusy; int dev; int lock; scalar_t__ poll; } ;


 int VAR_0 ;
 int FUNC_0 (struct intsmb_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,char*) ;
 int VAR_11 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct intsmb_softc*) ;
 int FUNC_6 (struct intsmb_softc*,int *,int,char*,int) ;

__attribute__((used)) static int
FUNC_7(struct intsmb_softc *VAR_12)
{
 int VAR_13, VAR_14;

 FUNC_0(VAR_12);

 if (VAR_12->poll || VAR_10)

  return (FUNC_5(VAR_12));

 VAR_13 = FUNC_6(VAR_12, &VAR_12->lock, VAR_7 | VAR_1, "SMBWAI", VAR_11 / 8);
 if (VAR_13 == 0) {
  VAR_14 = FUNC_1(VAR_12->io_res, VAR_4);
  if (!(VAR_14 & VAR_2)) {
   VAR_13 = FUNC_4(VAR_12->dev, VAR_14);
   if (VAR_13 == 0 && !(VAR_14 & VAR_3))
    FUNC_3(VAR_12->dev, "unknown cause why?\n");




   return (VAR_13);
  }
 }


 VAR_12->isbusy = 0;


 FUNC_2(VAR_12->io_res, VAR_5, VAR_6);
 if (VAR_13 == VAR_0)
  return (VAR_9);
 else
  return (VAR_8);
}
