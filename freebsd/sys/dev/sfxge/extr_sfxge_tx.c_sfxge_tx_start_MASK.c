
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int txq_count; int enp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sfxge_softc*,int) ;
 int FUNC_3 (struct sfxge_softc*,int) ;

int
FUNC_4(struct sfxge_softc *VAR_0)
{
 int VAR_1;
 int VAR_2;


 if ((VAR_2 = FUNC_1(VAR_0->enp)) != 0)
  return (VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_0->txq_count; VAR_1++) {
  if ((VAR_2 = FUNC_2(VAR_0, VAR_1)) != 0)
   goto fail;
 }

 return (0);

fail:
 while (--VAR_1 >= 0)
  FUNC_3(VAR_0, VAR_1);

 FUNC_0(VAR_0->enp);

 return (VAR_2);
}
