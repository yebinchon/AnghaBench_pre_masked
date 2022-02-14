
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_long ;
struct uio {int uio_offset; scalar_t__ uio_resid; } ;
struct TYPE_5__ {struct tmpfs_dirent* tn_readdir_lastp; void* tn_readdir_lastn; } ;
struct tmpfs_node {TYPE_2__ tn_dir; } ;
struct tmpfs_mount {int dummy; } ;
struct TYPE_4__ {int td_name; } ;
struct tmpfs_dirent {int td_namelen; TYPE_1__ ud; TYPE_3__* td_node; } ;
struct tmpfs_dir_cursor {int dummy; } ;
struct dirent {int d_fileno; int d_namlen; scalar_t__ d_reclen; int d_name; int d_type; } ;
typedef void* off_t ;
struct TYPE_6__ {int tn_id; int tn_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct dirent*) ;
 int FUNC_1 (int) ;



 int VAR_10 ;
 int FUNC_2 (struct tmpfs_node*) ;







 int FUNC_3 (struct dirent*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,TYPE_3__*,int) ;
 struct tmpfs_dirent* FUNC_6 (struct tmpfs_node*,struct tmpfs_dir_cursor*) ;
 int FUNC_7 (struct tmpfs_mount*,struct tmpfs_node*,struct uio*) ;
 int FUNC_8 (struct tmpfs_mount*,struct tmpfs_node*,struct uio*) ;
 struct tmpfs_dirent* FUNC_9 (struct tmpfs_node*,int,struct tmpfs_dir_cursor*) ;
 struct tmpfs_dirent* FUNC_10 (struct tmpfs_node*,struct tmpfs_dir_cursor*) ;
 void* FUNC_11 (struct tmpfs_dirent*) ;
 int FUNC_12 (struct tmpfs_mount*,struct tmpfs_node*,int ) ;
 int FUNC_13 (struct dirent*,scalar_t__,struct uio*) ;

int
FUNC_14(struct tmpfs_mount *VAR_11, struct tmpfs_node *VAR_12,
    struct uio *VAR_13, int VAR_14, u_long *VAR_15, int *VAR_16)
{
 struct tmpfs_dir_cursor VAR_17;
 struct tmpfs_dirent *VAR_18;
 off_t VAR_19;
 int VAR_20;

 FUNC_2(VAR_12);

 VAR_19 = 0;
 switch (VAR_13->uio_offset) {
 case 137:
  VAR_20 = FUNC_7(VAR_11, VAR_12, VAR_13);
  if (VAR_20 != 0)
   return (VAR_20);
  VAR_13->uio_offset = 136;
  if (VAR_15 != ((void*)0))
   VAR_15[(*VAR_16)++] = VAR_19 = VAR_13->uio_offset;

 case 136:
  VAR_20 = FUNC_8(VAR_11, VAR_12, VAR_13);
  if (VAR_20 != 0)
   return (VAR_20);
  VAR_18 = FUNC_6(VAR_12, &VAR_17);
  VAR_13->uio_offset = FUNC_11(VAR_18);
  if (VAR_15 != ((void*)0))
   VAR_15[(*VAR_16)++] = VAR_19 = VAR_13->uio_offset;

  if (VAR_18 == ((void*)0))
   return (0);
  break;
 case 135:
  return (0);
 default:
  VAR_18 = FUNC_9(VAR_12, VAR_13->uio_offset, &VAR_17);
  if (VAR_18 == ((void*)0))
   return (VAR_8);
  if (VAR_15 != ((void*)0))
   VAR_19 = FUNC_11(VAR_18);
 }



 do {
  struct dirent VAR_21;



  if (VAR_18->td_node == ((void*)0)) {
   VAR_21.d_fileno = 1;
   VAR_21.d_type = VAR_7;
  } else {
   VAR_21.d_fileno = VAR_18->td_node->tn_id;
   switch (VAR_18->td_node->tn_type) {
   case 134:
    VAR_21.d_type = VAR_0;
    break;

   case 133:
    VAR_21.d_type = VAR_1;
    break;

   case 132:
    VAR_21.d_type = VAR_2;
    break;

   case 131:
    VAR_21.d_type = VAR_3;
    break;

   case 130:
    VAR_21.d_type = VAR_4;
    break;

   case 129:
    VAR_21.d_type = VAR_5;
    break;

   case 128:
    VAR_21.d_type = VAR_6;
    break;

   default:
    FUNC_5("tmpfs_dir_getdents: type %p %d",
        VAR_18->td_node, (int)VAR_18->td_node->tn_type);
   }
  }
  VAR_21.d_namlen = VAR_18->td_namelen;
  FUNC_1(VAR_18->td_namelen < sizeof(VAR_21.d_name));
  (void)FUNC_4(VAR_21.d_name, VAR_18->ud.td_name, VAR_18->td_namelen);
  VAR_21.d_reclen = FUNC_0(&VAR_21);
  FUNC_3(&VAR_21);



  if (VAR_21.d_reclen > VAR_13->uio_resid) {
   VAR_20 = VAR_9;
   break;
  }



  VAR_20 = FUNC_13(&VAR_21, VAR_21.d_reclen, VAR_13);
  if (VAR_20 == 0) {
   VAR_18 = FUNC_10(VAR_12, &VAR_17);
   if (VAR_15 != ((void*)0)) {
    VAR_19 = FUNC_11(VAR_18);
    FUNC_1(*VAR_16 < VAR_14);
    VAR_15[(*VAR_16)++] = VAR_19;
   }
  }
 } while (VAR_20 == 0 && VAR_13->uio_resid > 0 && VAR_18 != ((void*)0));


 if (VAR_15 == ((void*)0))
  VAR_19 = FUNC_11(VAR_18);


 VAR_13->uio_offset = VAR_19;
 VAR_12->tn_dir.tn_readdir_lastn = VAR_19;
 VAR_12->tn_dir.tn_readdir_lastp = VAR_18;

 FUNC_12(VAR_11, VAR_12, VAR_10);
 return VAR_20;
}
