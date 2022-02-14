
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802_1x_mka_participant {int dummy; } ;
struct ieee802_1x_kay_peer {int dummy; } ;


 struct ieee802_1x_kay_peer* FUNC_0 (struct ieee802_1x_mka_participant*,int const*) ;
 struct ieee802_1x_kay_peer* FUNC_1 (struct ieee802_1x_mka_participant*,int const*) ;

__attribute__((used)) static struct ieee802_1x_kay_peer *
FUNC_2(struct ieee802_1x_mka_participant *VAR_0,
   const u8 *VAR_1)
{
 struct ieee802_1x_kay_peer *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
