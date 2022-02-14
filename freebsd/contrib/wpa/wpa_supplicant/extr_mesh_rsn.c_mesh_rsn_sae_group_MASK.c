
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpa_supplicant {TYPE_4__* mesh_rsn; TYPE_3__* ifmsh; } ;
struct sae_data {int group; } ;
struct TYPE_8__ {size_t sae_group_index; } ;
struct TYPE_7__ {TYPE_2__** bss; } ;
struct TYPE_6__ {TYPE_1__* conf; } ;
struct TYPE_5__ {int* sae_groups; } ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t) ;
 scalar_t__ FUNC_1 (struct sae_data*,int) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_1,
         struct sae_data *VAR_2)
{
 int *VAR_3 = VAR_1->ifmsh->bss[0]->conf->sae_groups;


 if (!FUNC_0(VAR_3, VAR_1->mesh_rsn->sae_group_index))
  return -1;

 for (;;) {
  int VAR_4 = VAR_3[VAR_1->mesh_rsn->sae_group_index];

  if (VAR_4 <= 0)
   break;
  if (FUNC_1(VAR_2, VAR_4) == 0) {
   FUNC_2(VAR_1, VAR_0, "SME: Selected SAE group %d",
    VAR_2->group);
   return 0;
  }
  VAR_1->mesh_rsn->sae_group_index++;
 }

 return -1;
}
