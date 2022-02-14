
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct vfs_hash_head {int dummy; } ;
struct mount {size_t mnt_hashseed; } ;


 size_t VAR_0 ;
 struct vfs_hash_head* VAR_1 ;

__attribute__((used)) static struct vfs_hash_head *
FUNC_0(const struct mount *VAR_2, u_int VAR_3)
{

 return (&VAR_1[(VAR_3 + VAR_2->mnt_hashseed) & VAR_0]);
}
