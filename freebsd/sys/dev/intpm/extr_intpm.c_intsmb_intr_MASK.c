
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {scalar_t__ isbusy; int io_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct intsmb_softc*) ;

__attribute__((used)) static int
FUNC_3(struct intsmb_softc *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_8->io_res, VAR_7);
 if (VAR_9 & VAR_3)
  return (1);

 if (VAR_9 & (VAR_6 | VAR_4 |
     VAR_2 | VAR_5)) {

  VAR_10 = FUNC_0(VAR_8->io_res, VAR_0);
  FUNC_1(VAR_8->io_res, VAR_0,
      VAR_10 & ~VAR_1);
  if (VAR_8->isbusy) {
   VAR_8->isbusy = 0;
   FUNC_2(VAR_8);
  }
  return (0);
 }
 return (1);
}
