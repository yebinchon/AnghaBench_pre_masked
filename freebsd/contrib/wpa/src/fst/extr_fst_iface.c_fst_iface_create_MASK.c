
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fst_wpa_obj {int dummy; } ;
struct fst_iface_cfg {scalar_t__ llt; } ;
struct fst_iface {struct fst_iface_cfg cfg; int own_addr; int ifname; struct fst_group* group; struct fst_wpa_obj iface_obj; } ;
struct fst_group {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fst_group*,int ,char*,char const*) ;
 int FUNC_1 (struct fst_iface*,int ,char*) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,char const*,int) ;
 struct fst_iface* FUNC_4 (int) ;

struct fst_iface * FUNC_5(struct fst_group *VAR_3, const char *VAR_4,
        const u8 *VAR_5,
        const struct fst_wpa_obj *VAR_6,
        const struct fst_iface_cfg *VAR_7)
{
 struct fst_iface *VAR_8;

 VAR_8 = FUNC_4(sizeof(*VAR_8));
 if (!VAR_8) {
  FUNC_0(VAR_3, VAR_1, "cannot allocate iface for %s",
    VAR_4);
  return ((void*)0);
 }

 VAR_8->cfg = *VAR_7;
 VAR_8->iface_obj = *VAR_6;
 VAR_8->group = VAR_3;
 FUNC_3(VAR_8->ifname, VAR_4, sizeof(VAR_8->ifname));
 FUNC_2(VAR_8->own_addr, VAR_5, sizeof(VAR_8->own_addr));

 if (!VAR_8->cfg.llt) {
  FUNC_1(VAR_8, VAR_2, "Zero llt adjusted");
  VAR_8->cfg.llt = VAR_0;
 }

 return VAR_8;
}
