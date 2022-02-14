
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; } ;
struct TYPE_2__ {struct tmpfs_node* tn_parent; } ;
struct tmpfs_node {int tn_id; TYPE_1__ tn_dir; } ;
struct tmpfs_mount {int dummy; } ;
struct dirent {int d_namlen; char* d_name; scalar_t__ d_reclen; int d_type; int d_fileno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dirent*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tmpfs_node*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct tmpfs_node*) ;
 int FUNC_4 (struct tmpfs_node*) ;
 int FUNC_5 (struct tmpfs_node*) ;
 int FUNC_6 (struct dirent*) ;
 int FUNC_7 (struct tmpfs_mount*,struct tmpfs_node*,int ) ;
 int FUNC_8 (struct dirent*,scalar_t__,struct uio*) ;

__attribute__((used)) static int
FUNC_9(struct tmpfs_mount *VAR_5, struct tmpfs_node *VAR_6,
    struct uio *VAR_7)
{
 struct tmpfs_node *VAR_8;
 struct dirent VAR_9;
 int VAR_10;

 FUNC_5(VAR_6);
 FUNC_1(VAR_7->uio_offset == VAR_3);




 FUNC_2(VAR_6);
 VAR_8 = VAR_6->tn_dir.tn_parent;
 if (VAR_8 == ((void*)0))
  return (VAR_2);

 FUNC_3(VAR_8);
 VAR_9.d_fileno = VAR_8->tn_id;
 FUNC_4(VAR_8);

 VAR_9.d_type = VAR_0;
 VAR_9.d_namlen = 2;
 VAR_9.d_name[0] = '.';
 VAR_9.d_name[1] = '.';
 VAR_9.d_reclen = FUNC_0(&VAR_9);
 FUNC_6(&VAR_9);

 if (VAR_9.d_reclen > VAR_7->uio_resid)
  VAR_10 = VAR_1;
 else
  VAR_10 = FUNC_8(&VAR_9, VAR_9.d_reclen, VAR_7);

 FUNC_7(VAR_5, VAR_6, VAR_4);

 return (VAR_10);
}
