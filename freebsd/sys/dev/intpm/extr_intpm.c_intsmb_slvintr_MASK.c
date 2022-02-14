
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {int io_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct intsmb_softc*) ;

__attribute__((used)) static int
FUNC_3(struct intsmb_softc *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->io_res, VAR_0);
 if (VAR_7 & VAR_2)
  return (1);
 if (VAR_7 & VAR_1)
  FUNC_2(VAR_6);
 else if (VAR_7 & ~(VAR_1 | VAR_4
  | VAR_3)) {
 }


 FUNC_1(VAR_6->io_res, VAR_0,
     VAR_1 | VAR_4 |
     VAR_3 | VAR_5);
 return (0);
}
