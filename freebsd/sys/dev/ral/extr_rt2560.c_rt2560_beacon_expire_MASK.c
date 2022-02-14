
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2560_tx_data {int * ni; int m; int map; } ;
struct TYPE_2__ {size_t next; int data_dmat; struct rt2560_tx_data* data; } ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct rt2560_softc {TYPE_1__ bcnq; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2560_softc*,int,char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct rt2560_softc*,int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct rt2560_softc *VAR_5)
{
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 struct rt2560_tx_data *VAR_7;

 if (VAR_6->ic_opmode != VAR_2 &&
     VAR_6->ic_opmode != VAR_1 &&
     VAR_6->ic_opmode != VAR_3)
  return;

 VAR_7 = &VAR_5->bcnq.data[VAR_5->bcnq.next];



 if (VAR_7->ni == ((void*)0))
         return;

 FUNC_1(VAR_5->bcnq.data_dmat, VAR_7->map, VAR_0);
 FUNC_2(VAR_5->bcnq.data_dmat, VAR_7->map);


 FUNC_3(VAR_7->ni, VAR_7->m, 1);

 FUNC_4(VAR_5, VAR_7->m, VAR_7->ni);

 FUNC_0(VAR_5, 15, "%s", "beacon expired\n");

 VAR_5->bcnq.next = (VAR_5->bcnq.next + 1) % VAR_4;
}
