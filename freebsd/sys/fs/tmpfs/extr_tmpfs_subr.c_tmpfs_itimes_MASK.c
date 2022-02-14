
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct timespec {int dummy; } ;
struct tmpfs_node {int tn_status; struct timespec tn_ctime; struct timespec tn_mtime; struct timespec tn_atime; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tmpfs_node*) ;
 int VAR_3 ;
 int FUNC_2 (struct tmpfs_node*) ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct tmpfs_node*,int,int ) ;
 int FUNC_5 (struct timespec*) ;

void
FUNC_6(struct vnode *VAR_4, const struct timespec *VAR_5,
    const struct timespec *VAR_6)
{
 struct tmpfs_node *VAR_7;
 struct timespec VAR_8;

 FUNC_0(VAR_4, "tmpfs_itimes");
 VAR_7 = FUNC_3(VAR_4);

 if ((VAR_7->tn_status & (VAR_1 | VAR_3 |
     VAR_2)) == 0)
  return;

 FUNC_5(&VAR_8);
 FUNC_1(VAR_7);
 if (VAR_7->tn_status & VAR_1) {
  if (VAR_5 == ((void*)0))
    VAR_5 = &VAR_8;
  VAR_7->tn_atime = *VAR_5;
 }
 if (VAR_7->tn_status & VAR_3) {
  if (VAR_6 == ((void*)0))
   VAR_6 = &VAR_8;
  VAR_7->tn_mtime = *VAR_6;
 }
 if (VAR_7->tn_status & VAR_2)
  VAR_7->tn_ctime = VAR_8;
 VAR_7->tn_status &= ~(VAR_1 | VAR_3 |
     VAR_2);
 FUNC_2(VAR_7);


 FUNC_4(VAR_7, sizeof(*VAR_7), VAR_0);
}
