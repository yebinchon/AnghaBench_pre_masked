
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usie_softc {int sc_mtx; int sc_if_sync_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,struct usie_softc*) ;
 int FUNC_3 (struct usie_softc*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, int VAR_4)
{
 struct usie_softc *VAR_5 = VAR_3;

 FUNC_0(&VAR_5->sc_mtx);


 FUNC_3(VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_0);

 FUNC_2(&VAR_5->sc_if_sync_ch, 2 * VAR_1, VAR_2, VAR_5);

 FUNC_1(&VAR_5->sc_mtx);
}
