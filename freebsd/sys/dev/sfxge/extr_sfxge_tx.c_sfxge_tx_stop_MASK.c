
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int txq_count; int enp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sfxge_softc*,int) ;

void
FUNC_2(struct sfxge_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->txq_count;
 while (--VAR_1 >= 0)
  FUNC_1(VAR_0, VAR_1);


 FUNC_0(VAR_0->enp);
}
