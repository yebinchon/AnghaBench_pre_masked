
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211s_hdr {int eaddr2; int eaddr1; int flags; int seqnum; int ttl; } ;
struct TYPE_4__ {int dot11MeshTTL; } ;
struct TYPE_5__ {int mesh_seqnum; TYPE_1__ mshcfg; } ;
struct TYPE_6__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (struct ieee80211s_hdr*,int ,int) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct ieee80211_sub_if_data *VAR_3,
         struct ieee80211s_hdr *VAR_4,
         const char *VAR_5, const char *VAR_6)
{
 if (FUNC_0(!VAR_5 && VAR_6))
  return 0;

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->ttl = VAR_3->u.mesh.mshcfg.dot11MeshTTL;


 FUNC_4(FUNC_1(VAR_3->u.mesh.mesh_seqnum), &VAR_4->seqnum);
 VAR_3->u.mesh.mesh_seqnum++;

 if (VAR_5 && !VAR_6) {
  VAR_4->flags |= VAR_1;
  FUNC_2(VAR_4->eaddr1, VAR_5, VAR_0);
  return 2 * VAR_0;
 } else if (VAR_5 && VAR_6) {
  VAR_4->flags |= VAR_2;
  FUNC_2(VAR_4->eaddr1, VAR_5, VAR_0);
  FUNC_2(VAR_4->eaddr2, VAR_6, VAR_0);
  return 3 * VAR_0;
 }

 return VAR_0;
}
