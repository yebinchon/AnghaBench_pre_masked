
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee802_1x_mka_participant {int potential_peers; } ;
struct ieee802_1x_kay_peer {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct ieee802_1x_kay_peer* FUNC_1 (int const*,int ) ;
 int FUNC_2 (struct ieee802_1x_kay_peer*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct ieee802_1x_kay_peer *
FUNC_4(
 struct ieee802_1x_mka_participant *VAR_1, const u8 *VAR_2, u32 VAR_3)
{
 struct ieee802_1x_kay_peer *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_1->potential_peers, &VAR_4->list);

 FUNC_3(VAR_0, "KaY: Potential peer created");
 FUNC_2(VAR_4);

 return VAR_4;
}
