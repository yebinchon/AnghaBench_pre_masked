
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_iov_sysfs_attr_ar {int dummy; } ;
struct mlx4_ib_iov_port {int num; TYPE_1__* dentr_ar; void* cur_port; void* admin_alias_parent; void* gids_parent; void* pkeys_parent; void* mcgs_parent; struct mlx4_ib_dev* dev; } ;
struct mlx4_ib_dev {void* ports_parent; struct mlx4_ib_iov_port* iov_ports; int ib_dev; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct TYPE_5__ {int entry_num; } ;
struct TYPE_4__ {TYPE_3__* dentries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,struct ib_port_attr*,int) ;
 int FUNC_1 (struct mlx4_ib_iov_port*,TYPE_3__*,char*,void*,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (char*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,int) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_9(struct mlx4_ib_dev *VAR_6, int VAR_7)
{
 int VAR_8;
 char VAR_9[10];
 struct mlx4_ib_iov_port *VAR_10 = ((void*)0);
 int VAR_11 = 0 ;
 struct ib_port_attr VAR_12;


 VAR_11 = FUNC_0(&VAR_6->ib_dev, VAR_7, &VAR_12, 1);
 if (VAR_11)
  goto err;

 VAR_10 = &VAR_6->iov_ports[VAR_7 - 1];
 VAR_10->dev = VAR_6;
 VAR_10->num = VAR_7;







 VAR_10->dentr_ar = FUNC_6(sizeof (struct mlx4_ib_iov_sysfs_attr_ar),
     VAR_1);
 if (!VAR_10->dentr_ar) {
  VAR_11 = -VAR_0;
  goto err;
 }
 FUNC_8(VAR_9, "%d", VAR_7);
 VAR_10->cur_port = FUNC_3(VAR_9,
     FUNC_4(VAR_6->ports_parent));
 if (!VAR_10->cur_port) {
  VAR_11 = -VAR_0;
  goto kobj_create_err;
 }

 VAR_10->admin_alias_parent = FUNC_3("admin_guids",
        FUNC_4(VAR_10->cur_port));
 if (!VAR_10->admin_alias_parent) {
  VAR_11 = -VAR_0;
  goto err_admin_guids;
 }
 for (VAR_8 = 0 ; VAR_8 < VAR_12.gid_tbl_len; VAR_8++) {
  FUNC_8(VAR_9, "%d", VAR_8);
  VAR_10->dentr_ar->dentries[VAR_8].entry_num = VAR_8;
  VAR_11 = FUNC_1(VAR_10, &VAR_10->dentr_ar->dentries[VAR_8],
       VAR_9, VAR_10->admin_alias_parent,
       VAR_2, VAR_5);
  if (VAR_11)
   goto err_admin_alias_parent;
 }


 VAR_10->gids_parent = FUNC_3("gids",
        FUNC_4(VAR_10->cur_port));
 if (!VAR_10->gids_parent) {
  VAR_11 = -VAR_0;
  goto err_gids;
 }

 for (VAR_8 = 0 ; VAR_8 < VAR_12.gid_tbl_len; VAR_8++) {
  FUNC_8(VAR_9, "%d", VAR_8);
  VAR_10->dentr_ar->dentries[VAR_12.gid_tbl_len + VAR_8].entry_num = VAR_8;
  VAR_11 = FUNC_1(VAR_10,
      &VAR_10->dentr_ar->dentries[VAR_12.gid_tbl_len + VAR_8],
      VAR_9,
      VAR_10->gids_parent, VAR_4, ((void*)0));
  if (VAR_11)
   goto err_gids_parent;
 }


 VAR_10->pkeys_parent =
  FUNC_3("pkeys", FUNC_4(VAR_10->cur_port));
 if (!VAR_10->pkeys_parent) {
  VAR_11 = -VAR_0;
  goto err_pkeys;
 }

 for (VAR_8 = 0 ; VAR_8 < VAR_12.pkey_tbl_len; VAR_8++) {
  FUNC_8(VAR_9, "%d", VAR_8);
  VAR_10->dentr_ar->dentries[2 * VAR_12.gid_tbl_len + VAR_8].entry_num = VAR_8;
  VAR_11 = FUNC_1(VAR_10,
      &VAR_10->dentr_ar->dentries[2 * VAR_12.gid_tbl_len + VAR_8],
      VAR_9, VAR_10->pkeys_parent,
      VAR_3, ((void*)0));
  if (VAR_11)
   goto err_pkeys_parent;
 }


 VAR_10->mcgs_parent =
  FUNC_3("mcgs", FUNC_4(VAR_10->cur_port));
 if (!VAR_10->mcgs_parent) {
  VAR_11 = -VAR_0;
  goto err_mcgs;
 }
 return 0;

err_mcgs:
 FUNC_5(VAR_10->cur_port);

err_pkeys_parent:
 FUNC_5(VAR_10->pkeys_parent);

err_pkeys:
 FUNC_5(VAR_10->cur_port);

err_gids_parent:
 FUNC_5(VAR_10->gids_parent);

err_gids:
 FUNC_5(VAR_10->cur_port);

err_admin_alias_parent:
 FUNC_5(VAR_10->admin_alias_parent);

err_admin_guids:
 FUNC_5(VAR_10->cur_port);
 FUNC_5(VAR_10->cur_port);

kobj_create_err:
 FUNC_5(VAR_6->ports_parent);
 FUNC_2(VAR_10->dentr_ar);

err:
 FUNC_7("add_port_entries FAILED: for port:%d, error: %d\n",
        VAR_7, VAR_11);
 return VAR_11;
}
