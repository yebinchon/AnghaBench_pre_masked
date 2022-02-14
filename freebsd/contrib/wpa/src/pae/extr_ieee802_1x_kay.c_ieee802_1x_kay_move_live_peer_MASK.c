
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct receive_sc {int list; scalar_t__ expire; int mn; int sci; } ;
struct ieee802_1x_mka_participant {int rxsc_list; int live_peers; int kay; int current_peer_sci; } ;
struct ieee802_1x_kay_peer {int list; scalar_t__ expire; int mn; int sci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct receive_sc*) ;
 struct receive_sc* FUNC_4 (struct ieee802_1x_mka_participant*,int *) ;
 struct receive_sc* FUNC_5 (int *) ;
 int FUNC_6 (struct receive_sc*) ;
 int FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (int ,struct receive_sc*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static struct ieee802_1x_kay_peer *
FUNC_11(struct ieee802_1x_mka_participant *VAR_3,
         u8 *VAR_4, u32 VAR_5)
{
 struct ieee802_1x_kay_peer *VAR_6;
 struct receive_sc *VAR_7;

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_5(&VAR_3->current_peer_sci);
 if (!VAR_7)
  return ((void*)0);

 FUNC_7(&VAR_6->sci, &VAR_3->current_peer_sci,
    sizeof(VAR_6->sci));
 VAR_6->mn = VAR_5;
 VAR_6->expire = FUNC_9(((void*)0)) + VAR_0 / 1000;

 FUNC_10(VAR_1, "KaY: Move potential peer to live peer");
 FUNC_3(VAR_6);

 FUNC_2(&VAR_6->list);
 if (FUNC_8(VAR_3->kay, VAR_7)) {
  FUNC_10(VAR_2, "KaY: Can't create SC, discard peer");
  FUNC_6(VAR_7);
  FUNC_6(VAR_6);
  return ((void*)0);
 }
 FUNC_1(&VAR_3->live_peers, &VAR_6->list);

 FUNC_0(&VAR_3->rxsc_list, &VAR_7->list);

 return VAR_6;
}
