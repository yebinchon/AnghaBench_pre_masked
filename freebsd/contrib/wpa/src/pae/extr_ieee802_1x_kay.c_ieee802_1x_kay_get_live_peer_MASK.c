
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802_1x_mka_participant {int live_peers; } ;
struct ieee802_1x_kay_peer {int dummy; } ;


 struct ieee802_1x_kay_peer* FUNC_0 (int *,int const*) ;

__attribute__((used)) static struct ieee802_1x_kay_peer *
FUNC_1(struct ieee802_1x_mka_participant *VAR_0,
        const u8 *VAR_1)
{
 return FUNC_0(&VAR_0->live_peers, VAR_1);
}
