
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_2__ {int const* tk; int const* kck; } ;
struct wpa_tdls_peer {int tpk_set; TYPE_1__ tpk; int const* addr; int const* inonce; int const* rnonce; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int const*,int,char*,int const*,int,int const*,int) ;
 int FUNC_3 (int,int const**,size_t*,int const*) ;
 int FUNC_4 (int ,char*,int const*,int) ;
 int FUNC_5 (int ,char*,int const*,int) ;

__attribute__((used)) static void FUNC_6(struct wpa_tdls_peer *VAR_4,
      const u8 *VAR_5, const u8 *VAR_6)
{
 u8 VAR_7[VAR_2];
 const u8 *VAR_8[2];
 size_t VAR_9[2];
 u8 VAR_10[3 * VAR_0];





 VAR_9[0] = VAR_3;
 VAR_9[1] = VAR_3;
 if (FUNC_0(VAR_4->inonce, VAR_4->rnonce, VAR_3) < 0) {
  VAR_8[0] = VAR_4->inonce;
  VAR_8[1] = VAR_4->rnonce;
 } else {
  VAR_8[0] = VAR_4->rnonce;
  VAR_8[1] = VAR_4->inonce;
 }
 FUNC_4(VAR_1, "TDLS: min(Nonce)", VAR_8[0], VAR_3);
 FUNC_4(VAR_1, "TDLS: max(Nonce)", VAR_8[1], VAR_3);
 FUNC_3(2, VAR_8, VAR_9, VAR_7);
 FUNC_5(VAR_1, "TDLS: TPK-Key-Input",
   VAR_7, VAR_2);






 if (FUNC_0(VAR_5, VAR_4->addr, VAR_0) < 0) {
  FUNC_1(VAR_10, VAR_5, VAR_0);
  FUNC_1(VAR_10 + VAR_0, VAR_4->addr, VAR_0);
 } else {
  FUNC_1(VAR_10, VAR_4->addr, VAR_0);
  FUNC_1(VAR_10 + VAR_0, VAR_5, VAR_0);
 }
 FUNC_1(VAR_10 + 2 * VAR_0, VAR_6, VAR_0);
 FUNC_4(VAR_1, "TDLS: KDF Context", VAR_10, sizeof(VAR_10));

 FUNC_2(VAR_7, VAR_2, "TDLS PMK", VAR_10, sizeof(VAR_10),
     (u8 *) &VAR_4->tpk, sizeof(VAR_4->tpk));
 FUNC_5(VAR_1, "TDLS: TPK-KCK",
   VAR_4->tpk.kck, sizeof(VAR_4->tpk.kck));
 FUNC_5(VAR_1, "TDLS: TPK-TK",
   VAR_4->tpk.tk, sizeof(VAR_4->tpk.tk));
 VAR_4->tpk_set = 1;
}
