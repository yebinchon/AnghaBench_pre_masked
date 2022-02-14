
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int ledlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtwn_softc*,int ,int ,int ) ;

void
FUNC_1(struct rtwn_softc *VAR_3, int VAR_4, int VAR_5)
{

 if (VAR_4 == VAR_2) {
  if (!VAR_5)
   FUNC_0(VAR_3, VAR_0, 0, VAR_1);
  else
   FUNC_0(VAR_3, VAR_0, VAR_1, 0);
  VAR_3->ledlink = VAR_5;
 }
}
