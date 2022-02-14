
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; } ;
struct tmpfs_node {int tn_id; } ;
struct tmpfs_mount {int dummy; } ;
struct dirent {int d_namlen; char* d_name; scalar_t__ d_reclen; int d_type; int d_fileno; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dirent*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tmpfs_node*) ;
 int FUNC_3 (struct dirent*) ;
 int FUNC_4 (struct tmpfs_mount*,struct tmpfs_node*,int ) ;
 int FUNC_5 (struct dirent*,scalar_t__,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct tmpfs_mount *VAR_4, struct tmpfs_node *VAR_5,
    struct uio *VAR_6)
{
 int VAR_7;
 struct dirent VAR_8;

 FUNC_2(VAR_5);
 FUNC_1(VAR_6->uio_offset == VAR_2);

 VAR_8.d_fileno = VAR_5->tn_id;
 VAR_8.d_type = VAR_0;
 VAR_8.d_namlen = 1;
 VAR_8.d_name[0] = '.';
 VAR_8.d_reclen = FUNC_0(&VAR_8);
 FUNC_3(&VAR_8);

 if (VAR_8.d_reclen > VAR_6->uio_resid)
  VAR_7 = VAR_1;
 else
  VAR_7 = FUNC_5(&VAR_8, VAR_8.d_reclen, VAR_6);

 FUNC_4(VAR_4, VAR_5, VAR_3);

 return (VAR_7);
}
