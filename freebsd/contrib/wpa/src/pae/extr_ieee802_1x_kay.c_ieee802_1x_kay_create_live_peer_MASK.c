
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct receive_sc {int list; int sci; } ;
struct ieee802_1x_mka_participant {int rxsc_list; int live_peers; int kay; int current_peer_sci; } ;
struct ieee802_1x_kay_peer {int list; int sci; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct receive_sc* FUNC_1 (int const*,int ) ;
 int FUNC_2 (struct receive_sc*) ;
 struct receive_sc* FUNC_3 (int *) ;
 int FUNC_4 (struct receive_sc*) ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int ,struct receive_sc*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static struct ieee802_1x_kay_peer *
FUNC_8(struct ieee802_1x_mka_participant *VAR_1,
    const u8 *VAR_2, u32 VAR_3)
{
 struct ieee802_1x_kay_peer *VAR_4;
 struct receive_sc *VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5(&VAR_4->sci, &VAR_1->current_peer_sci,
    sizeof(VAR_4->sci));

 VAR_5 = FUNC_3(&VAR_4->sci);
 if (!VAR_5) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 if (FUNC_6(VAR_1->kay, VAR_5)) {
  FUNC_4(VAR_5);
  FUNC_4(VAR_4);
  return ((void*)0);
 }
 FUNC_0(&VAR_1->live_peers, &VAR_4->list);
 FUNC_0(&VAR_1->rxsc_list, &VAR_5->list);

 FUNC_7(VAR_0, "KaY: Live peer created");
 FUNC_2(VAR_4);

 return VAR_4;
}
