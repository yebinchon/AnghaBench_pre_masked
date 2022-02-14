
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_dinode {int dummy; } ;
typedef struct xfs_dinode xfs_dinode_t ;
struct TYPE_2__ {int sb_inodelog; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;


 scalar_t__ FUNC_0 (struct xfs_buf*,int) ;

__attribute__((used)) static inline struct xfs_dinode *
FUNC_1(struct xfs_mount *VAR_0, struct xfs_buf *VAR_1, int VAR_2)
{
 return (xfs_dinode_t *)
  (FUNC_0(VAR_1, VAR_2 << (VAR_0)->m_sb.sb_inodelog));
}
