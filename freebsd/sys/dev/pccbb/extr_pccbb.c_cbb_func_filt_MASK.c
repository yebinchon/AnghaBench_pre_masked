
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {scalar_t__ cardok; } ;
struct cbb_intrhand {int (* filt ) (int ) ;int arg; struct cbb_softc* sc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cbb_softc*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3)
{
 struct cbb_intrhand *VAR_4 = (struct cbb_intrhand *)VAR_3;
 struct cbb_softc *VAR_5 = VAR_4->sc;




 if (!VAR_5->cardok)
  return (VAR_2);
 if (!FUNC_0(FUNC_1(VAR_5, VAR_0))) {
  VAR_5->cardok = 0;
  return (VAR_1);
 }





 return ((*VAR_4->filt)(VAR_4->arg));
}
