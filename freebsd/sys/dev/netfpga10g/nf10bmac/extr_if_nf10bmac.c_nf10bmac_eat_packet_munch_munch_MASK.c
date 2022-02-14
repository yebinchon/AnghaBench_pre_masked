
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf10bmac_softc {int dummy; } ;
typedef int REGWTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nf10bmac_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct nf10bmac_softc *VAR_4)
{
 REGWTYPE VAR_5, VAR_6;

 do {
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  if ((VAR_5 & VAR_1) != 0)
   VAR_6 = FUNC_0(VAR_4, VAR_2);
 } while ((VAR_5 & VAR_1) != 0 &&
     (VAR_5 & VAR_0) == 0);
}
