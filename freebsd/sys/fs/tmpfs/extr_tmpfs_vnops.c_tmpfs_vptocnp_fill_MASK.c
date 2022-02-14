
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct tmpfs_node {int dummy; } ;
struct TYPE_2__ {int td_name; } ;
struct tmpfs_dirent {scalar_t__ td_namelen; TYPE_1__ ud; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct tmpfs_node*,struct tmpfs_node*,struct tmpfs_dirent**) ;
 int FUNC_3 (struct vnode*,int ,struct tmpfs_node*,int ,struct vnode**) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static int
FUNC_6(struct vnode *VAR_3, struct tmpfs_node *VAR_4,
    struct tmpfs_node *VAR_5, char *VAR_6, int *VAR_7, struct vnode **VAR_8)
{
 struct tmpfs_dirent *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_3(VAR_3, VAR_2, VAR_5, VAR_1,
     VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_10 = FUNC_2(VAR_4, VAR_5, &VAR_9);
 if (VAR_10 == 0) {
  VAR_11 = *VAR_7;
  VAR_11 -= VAR_9->td_namelen;
  if (VAR_11 < 0) {
   VAR_10 = VAR_0;
  } else {
   FUNC_1(VAR_9->ud.td_name, VAR_6 + VAR_11, VAR_9->td_namelen);
   *VAR_7 = VAR_11;
  }
 }
 if (VAR_10 == 0) {
  if (VAR_3 != *VAR_8)
   FUNC_0(*VAR_8, 0);
 } else {
  if (VAR_3 != *VAR_8)
   FUNC_4(*VAR_8);
  else
   FUNC_5(VAR_3);
 }
 return (VAR_10);
}
