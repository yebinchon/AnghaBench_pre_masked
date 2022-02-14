
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_ino_t ;
struct TYPE_6__ {scalar_t__ i8count; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ xfs_dir2_sf_t ;
struct TYPE_8__ {int i8; int i4; } ;
typedef TYPE_3__ xfs_dir2_inou_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(xfs_dir2_sf_t *VAR_0, xfs_ino_t *VAR_1,
      xfs_dir2_inou_t *VAR_2)
{
 if ((VAR_0)->hdr.i8count == 0)
  FUNC_0(*(VAR_1), (VAR_2)->i4);
 else
  FUNC_1(*(VAR_1), (VAR_2)->i8);
}
