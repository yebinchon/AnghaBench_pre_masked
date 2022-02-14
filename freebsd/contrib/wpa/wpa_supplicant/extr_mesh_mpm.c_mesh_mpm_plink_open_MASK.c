
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct sta_info {int dummy; } ;
struct mesh_conf {int dot11MeshRetryTimeout; } ;
typedef enum mesh_plink_state { ____Placeholder_mesh_plink_state } mesh_plink_state ;
struct TYPE_2__ {struct mesh_conf* mconf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,struct sta_info*) ;
 int FUNC_1 (int,int,int ,struct wpa_supplicant*,struct sta_info*) ;
 int FUNC_2 (struct wpa_supplicant*,struct sta_info*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct wpa_supplicant*,struct sta_info*,int) ;

__attribute__((used)) static void
FUNC_4(struct wpa_supplicant *VAR_2, struct sta_info *VAR_3,
      enum mesh_plink_state VAR_4)
{
 struct mesh_conf *VAR_5 = VAR_2->ifmsh->mconf;

 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_5->dot11MeshRetryTimeout / 1000,
          (VAR_5->dot11MeshRetryTimeout % 1000) * 1000,
          VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_2, VAR_3, VAR_0, 0);
 FUNC_3(VAR_2, VAR_3, VAR_4);
}
