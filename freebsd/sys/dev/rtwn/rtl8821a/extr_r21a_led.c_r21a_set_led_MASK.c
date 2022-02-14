
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int ledlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtwn_softc*,int ,int) ;

void
FUNC_1(struct rtwn_softc *VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_5 == VAR_3) {
  FUNC_0(VAR_4, VAR_2,
      VAR_0 | (VAR_6 ? 0 : VAR_1));
  VAR_4->ledlink = VAR_6;
 }
}
