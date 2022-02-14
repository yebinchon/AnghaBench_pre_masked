
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_mesh_proto_path {int mpp_descr; } ;
struct TYPE_4__ {int mpp_active; int mpp_descr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct ieee80211_mesh_proto_path const*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

int
FUNC_3(const struct ieee80211_mesh_proto_path *VAR_4)
{
 int VAR_5, VAR_6 = -1;

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3); VAR_5++) {
  if (FUNC_2(VAR_4->mpp_descr, VAR_3[VAR_5].mpp_descr,
      VAR_2) == 0)
   return VAR_0;
  if (!VAR_3[VAR_5].mpp_active && VAR_6 == -1)
   VAR_6 = VAR_5;
 }
 if (VAR_6 < 0)
  return VAR_1;
 FUNC_0(&VAR_3[VAR_6], VAR_4, sizeof(*VAR_4));
 VAR_3[VAR_6].mpp_active = 1;
 return 0;
}
