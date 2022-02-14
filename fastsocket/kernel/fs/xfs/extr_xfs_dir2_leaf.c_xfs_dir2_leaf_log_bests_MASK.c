
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int t_mountp; } ;
typedef TYPE_3__ xfs_trans_t ;
typedef int xfs_dir2_leaf_tail_t ;
struct TYPE_12__ {int magic; } ;
struct TYPE_11__ {TYPE_2__ info; } ;
struct TYPE_14__ {TYPE_1__ hdr; } ;
typedef TYPE_4__ xfs_dir2_leaf_t ;
struct TYPE_15__ {TYPE_4__* data; } ;
typedef TYPE_5__ xfs_dabuf_t ;
typedef int uint ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,int ,int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(
 xfs_trans_t *VAR_1,
 xfs_dabuf_t *VAR_2,
 int VAR_3,
 int VAR_4)
{
 __be16 *VAR_5;
 __be16 *VAR_6;
 xfs_dir2_leaf_t *VAR_7;
 xfs_dir2_leaf_tail_t *VAR_8;

 VAR_7 = VAR_2->data;
 FUNC_0(FUNC_1(VAR_7->hdr.info.magic) == VAR_0);
 VAR_8 = FUNC_4(VAR_1->t_mountp, VAR_7);
 VAR_5 = FUNC_3(VAR_8) + VAR_3;
 VAR_6 = FUNC_3(VAR_8) + VAR_4;
 FUNC_2(VAR_1, VAR_2, (uint)((char *)VAR_5 - (char *)VAR_7),
  (uint)((char *)VAR_6 - (char *)VAR_7 + sizeof(*VAR_6) - 1));
}
