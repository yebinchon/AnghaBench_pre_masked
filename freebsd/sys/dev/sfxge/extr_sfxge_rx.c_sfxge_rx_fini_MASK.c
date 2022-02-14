
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int rxq_count; } ;


 int FUNC_0 (struct sfxge_softc*,int) ;

void
FUNC_1(struct sfxge_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->rxq_count;
 while (--VAR_1 >= 0)
  FUNC_0(VAR_0, VAR_1);

 VAR_0->rxq_count = 0;
}
