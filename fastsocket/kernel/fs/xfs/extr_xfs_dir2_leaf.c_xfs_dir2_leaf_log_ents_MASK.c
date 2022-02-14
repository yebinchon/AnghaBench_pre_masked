
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_7__ {int magic; } ;
struct TYPE_8__ {TYPE_1__ info; } ;
struct TYPE_9__ {int * ents; TYPE_2__ hdr; } ;
typedef TYPE_3__ xfs_dir2_leaf_t ;
typedef int xfs_dir2_leaf_entry_t ;
struct TYPE_10__ {TYPE_3__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_4__*,int ,int ) ;

void
FUNC_3(
 xfs_trans_t *VAR_2,
 xfs_dabuf_t *VAR_3,
 int VAR_4,
 int VAR_5)
{
 xfs_dir2_leaf_entry_t *VAR_6;
 xfs_dir2_leaf_entry_t *VAR_7;
 xfs_dir2_leaf_t *VAR_8;

 VAR_8 = VAR_3->data;
 FUNC_0(FUNC_1(VAR_8->hdr.info.magic) == VAR_0 ||
        FUNC_1(VAR_8->hdr.info.magic) == VAR_1);
 VAR_6 = &VAR_8->ents[VAR_4];
 VAR_7 = &VAR_8->ents[VAR_5];
 FUNC_2(VAR_2, VAR_3, (uint)((char *)VAR_6 - (char *)VAR_8),
  (uint)((char *)VAR_7 - (char *)VAR_8 + sizeof(*VAR_7) - 1));
}
