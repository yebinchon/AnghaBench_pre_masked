
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {int isbusy; int io_res; } ;


 int FUNC_0 (struct intsmb_softc*) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct intsmb_softc *VAR_10)
{

 FUNC_0(VAR_10);
 if ((FUNC_1(VAR_10->io_res, VAR_5) & VAR_1) ||



     VAR_10->isbusy)
  return (VAR_9);

 VAR_10->isbusy = 1;


 FUNC_2(VAR_10->io_res, VAR_6, 0);


 FUNC_2(VAR_10->io_res, VAR_5,
     VAR_4 | VAR_2 |
     VAR_0 | VAR_3);
 return (0);
}
