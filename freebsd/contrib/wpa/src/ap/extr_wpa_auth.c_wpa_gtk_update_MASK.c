
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {int GN; size_t GTK_len; int GN_igtk; int * IGTK; int GNonce; int GMK; int Counter; int * GTK; } ;
struct TYPE_2__ {scalar_t__ ieee80211w; int group_mgmt_cipher; } ;
struct wpa_authenticator {int addr; TYPE_1__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int ,size_t) ;
 int FUNC_4 (int ,char*,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct wpa_authenticator *VAR_3,
     struct wpa_group *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_4->GNonce, VAR_4->Counter, VAR_2);
 FUNC_0(VAR_4->Counter, VAR_2);
 if (FUNC_3(VAR_4->GMK, "Group key expansion",
      VAR_3->addr, VAR_4->GNonce,
      VAR_4->GTK[VAR_4->GN - 1], VAR_4->GTK_len) < 0)
  VAR_5 = -1;
 FUNC_4(VAR_0, "GTK",
   VAR_4->GTK[VAR_4->GN - 1], VAR_4->GTK_len);
 return VAR_5;
}
