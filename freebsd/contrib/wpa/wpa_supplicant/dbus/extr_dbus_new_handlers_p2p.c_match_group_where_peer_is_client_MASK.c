
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {char* dbus_groupobj_path; } ;
struct peer_group_data {char** paths; int nb_paths; int error; int wpa_s; TYPE_1__* info; } ;
struct p2p_group_config {int ssid_len; int ssid; } ;
struct p2p_group {int dummy; } ;
struct TYPE_2__ {int p2p_device_addr; } ;


 int VAR_0 ;
 char** FUNC_0 (char**,int,int) ;
 struct p2p_group_config* FUNC_1 (struct p2p_group*) ;
 int FUNC_2 (struct p2p_group*,int ) ;
 struct wpa_supplicant* FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct p2p_group *VAR_1,
         void *VAR_2)
{
 struct peer_group_data *VAR_3 = VAR_2;
 const struct p2p_group_config *VAR_4;
 struct wpa_supplicant *VAR_5;
 char **VAR_6;

 if (!FUNC_2(VAR_1, VAR_3->info->p2p_device_addr))
  return 1;

 VAR_4 = FUNC_1(VAR_1);

 VAR_5 = FUNC_3(VAR_3->wpa_s, VAR_4->ssid,
      VAR_4->ssid_len);
 if (VAR_5 == ((void*)0))
  return 1;

 VAR_6 = FUNC_0(VAR_3->paths, VAR_3->nb_paths + 1,
     sizeof(char *));
 if (VAR_6 == ((void*)0))
  goto out_of_memory;

 VAR_3->paths = VAR_6;
 VAR_3->paths[VAR_3->nb_paths] = VAR_5->dbus_groupobj_path;
 VAR_3->nb_paths++;

 return 1;

out_of_memory:
 VAR_3->error = VAR_0;
 return 0;
}
