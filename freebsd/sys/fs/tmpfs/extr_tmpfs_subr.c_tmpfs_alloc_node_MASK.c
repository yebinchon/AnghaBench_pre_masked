
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_object_t ;
typedef int uid_t ;
struct TYPE_4__ {int tn_aobj; } ;
struct TYPE_3__ {struct tmpfs_node* tn_parent; int * tn_readdir_lastp; int tn_readdir_lastn; int tn_dupindex; int tn_dirhead; } ;
struct tmpfs_node {int tn_type; int tn_refcount; int tn_attached; TYPE_2__ tn_reg; int tn_size; int tn_link; TYPE_1__ tn_dir; int tn_links; scalar_t__ tn_rdev; int tn_id; int tn_mode; int tn_gid; int tn_uid; int tn_atime; int tn_mtime; int tn_ctime; int tn_birthtime; } ;
struct tmpfs_mount {scalar_t__ tm_nodes_inuse; scalar_t__ tm_nodes_max; int tm_refcount; int tm_nodes_used; int * tm_root; int tm_ino_unr; int tm_node_pool; } ;
struct mount {int mnt_kern_flag; } ;
typedef int mode_t ;
typedef int gid_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct tmpfs_node*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tmpfs_mount*) ;
 int FUNC_7 (struct tmpfs_node*) ;
 int FUNC_8 (struct tmpfs_node*) ;
 int FUNC_9 (struct tmpfs_mount*) ;





 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;


 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,char const*,int ) ;
 int FUNC_15 (char*,struct tmpfs_node*,int) ;
 int FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (struct tmpfs_mount*,int) ;
 int VAR_14 ;
 scalar_t__ FUNC_18 (int ,struct tmpfs_mount*,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int *,int ,int ,int ,int *) ;

int
FUNC_23(struct mount *VAR_15, struct tmpfs_mount *VAR_16, enum vtype VAR_17,
    uid_t VAR_18, gid_t VAR_19, mode_t VAR_20, struct tmpfs_node *VAR_21,
    const char *VAR_22, dev_t VAR_23, struct tmpfs_node **VAR_24)
{
 struct tmpfs_node *VAR_25;
 vm_object_t VAR_26;



 FUNC_4(FUNC_1(VAR_16->tm_root == ((void*)0), VAR_21 == ((void*)0) && VAR_17 == 132));

 FUNC_4(FUNC_0(VAR_17 == 130, VAR_22 != ((void*)0)));
 FUNC_4(FUNC_0(VAR_17 == 134 || VAR_17 == 133, VAR_23 != VAR_13));

 if (VAR_16->tm_nodes_inuse >= VAR_16->tm_nodes_max)
  return (VAR_1);
 if (FUNC_17(VAR_16, 1) == 0)
  return (VAR_1);

 if ((VAR_15->mnt_kern_flag & VAR_4) != 0) {
  return (VAR_0);
 }
 if ((VAR_15->mnt_kern_flag & VAR_5) != 0)
  return (VAR_2);

 VAR_25 = (struct tmpfs_node *)FUNC_18(VAR_16->tm_node_pool, VAR_16,
     VAR_7);


 VAR_25->tn_type = VAR_17;
 FUNC_19(&VAR_25->tn_atime);
 VAR_25->tn_birthtime = VAR_25->tn_ctime = VAR_25->tn_mtime =
     VAR_25->tn_atime;
 VAR_25->tn_uid = VAR_18;
 VAR_25->tn_gid = VAR_19;
 VAR_25->tn_mode = VAR_20;
 VAR_25->tn_id = FUNC_12(&VAR_16->tm_ino_unr);
 VAR_25->tn_refcount = 1;


 switch (VAR_25->tn_type) {
 case 134:
 case 133:
  VAR_25->tn_rdev = VAR_23;
  break;

 case 132:
  FUNC_5(&VAR_25->tn_dir.tn_dirhead);
  FUNC_2(&VAR_25->tn_dir.tn_dupindex);
  FUNC_4(VAR_21 != VAR_25);
  FUNC_4(FUNC_1(VAR_21 == ((void*)0), VAR_16->tm_root == ((void*)0)));
  VAR_25->tn_dir.tn_parent = (VAR_21 == ((void*)0)) ? VAR_25 : VAR_21;
  VAR_25->tn_dir.tn_readdir_lastn = 0;
  VAR_25->tn_dir.tn_readdir_lastp = ((void*)0);
  VAR_25->tn_links++;
  FUNC_7(VAR_25->tn_dir.tn_parent);
  VAR_25->tn_dir.tn_parent->tn_links++;
  FUNC_8(VAR_25->tn_dir.tn_parent);
  break;

 case 131:

 case 128:
  break;

 case 130:
  FUNC_4(FUNC_16(VAR_22) < VAR_3);
  VAR_25->tn_size = FUNC_16(VAR_22);
  VAR_25->tn_link = FUNC_13(VAR_25->tn_size, VAR_6,
      VAR_7);
  FUNC_14(VAR_25->tn_link, VAR_22, VAR_25->tn_size);
  break;

 case 129:
  VAR_26 = VAR_25->tn_reg.tn_aobj =
      FUNC_22(VAR_8, ((void*)0), 0, VAR_12, 0,
   ((void*)0) );
  FUNC_10(VAR_26);

  FUNC_21(VAR_26, VAR_9 | VAR_11);
  FUNC_20(VAR_26, VAR_10);
  FUNC_11(VAR_26);
  break;

 default:
  FUNC_15("tmpfs_alloc_node: type %p %d", VAR_25,
      (int)VAR_25->tn_type);
 }

 FUNC_6(VAR_16);
 FUNC_3(&VAR_16->tm_nodes_used, VAR_25, VAR_14);
 VAR_25->tn_attached = 1;
 VAR_16->tm_nodes_inuse++;
 VAR_16->tm_refcount++;
 FUNC_9(VAR_16);

 *VAR_24 = VAR_25;
 return (0);
}
