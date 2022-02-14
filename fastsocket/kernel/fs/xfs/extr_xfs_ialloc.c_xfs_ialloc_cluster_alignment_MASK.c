
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* mp; } ;
typedef TYPE_1__ xfs_alloc_arg_t ;
struct TYPE_7__ {scalar_t__ sb_inoalignmt; } ;
struct TYPE_8__ {TYPE_2__ m_sb; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline int
FUNC_3(
 xfs_alloc_arg_t *VAR_0)
{
 if (FUNC_2(&VAR_0->mp->m_sb) &&
     VAR_0->mp->m_sb.sb_inoalignmt >=
      FUNC_0(VAR_0->mp, FUNC_1(VAR_0->mp)))
  return VAR_0->mp->m_sb.sb_inoalignmt;
 return 1;
}
