
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int u_int ;
struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_3__ {void* sn_parent_id; void* sn_id; } ;
typedef TYPE_1__ sfs_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount const*,int ,int,int ,struct vnode**,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(const struct mount *VAR_2, int VAR_3, uint64_t VAR_4,
   uint64_t VAR_5, struct vnode **VAR_6)
{
 sfs_node_t VAR_7;
 int VAR_8;

 VAR_7.sn_id = VAR_5;
 VAR_7.sn_parent_id = VAR_4;
 VAR_8 = FUNC_0(VAR_2, (u_int)VAR_5, VAR_3, VAR_0, VAR_6,
     VAR_1, &VAR_7);
 return (VAR_8);
}
