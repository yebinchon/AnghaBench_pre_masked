
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_intino_t ;
struct TYPE_6__ {scalar_t__ i8count; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ xfs_dir2_sf_t ;
struct TYPE_8__ {int i8; int i4; } ;
typedef TYPE_3__ xfs_dir2_inou_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline xfs_intino_t
FUNC_2(xfs_dir2_sf_t *VAR_0, xfs_dir2_inou_t *VAR_1)
{
 return ((VAR_0)->hdr.i8count == 0 ? (xfs_intino_t)FUNC_0((VAR_1)->i4) : (xfs_intino_t)FUNC_1((VAR_1)->i8));


}
