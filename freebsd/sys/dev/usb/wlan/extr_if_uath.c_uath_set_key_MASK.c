
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int dummy; } ;
struct uath_cmd_crypto {void* flags; int* key; struct uath_cmd_crypto* magic2; void* mask; void* size; void* magic1; void* keyidx; } ;
struct ieee80211_key {int wk_keylen; int* wk_key; } ;
typedef int crypto ;


 int FUNC_0 (struct uath_softc*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct uath_cmd_crypto*,int,int) ;
 int FUNC_3 (struct uath_softc*,int ,struct uath_cmd_crypto*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct uath_softc *VAR_3, const struct ieee80211_key *VAR_4,
    int VAR_5)
{
 return (0);

}
