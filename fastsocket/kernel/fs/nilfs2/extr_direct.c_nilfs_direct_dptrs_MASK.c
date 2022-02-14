
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_direct_node {int dummy; } ;
struct TYPE_3__ {scalar_t__ u_data; } ;
struct TYPE_4__ {TYPE_1__ b_u; } ;
struct nilfs_direct {TYPE_2__ d_bmap; } ;
typedef int __le64 ;



__attribute__((used)) static inline __le64 *FUNC_0(const struct nilfs_direct *VAR_0)
{
 return (__le64 *)
  ((struct nilfs_direct_node *)VAR_0->d_bmap.b_u.u_data + 1);
}
