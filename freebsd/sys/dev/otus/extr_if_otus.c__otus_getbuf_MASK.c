
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int sc_tx_inactive; } ;
struct otus_data {int dummy; } ;


 struct otus_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct otus_data *
FUNC_2(struct otus_softc *VAR_1)
{
 struct otus_data *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->sc_tx_inactive);
 if (VAR_2 != ((void*)0))
  FUNC_1(&VAR_1->sc_tx_inactive, VAR_0);
 else
  VAR_2 = ((void*)0);

 return (VAR_2);
}
