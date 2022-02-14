
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
struct TYPE_9__ {TYPE_2__ hdr; } ;
typedef TYPE_3__ xfs_dir2_leaf_t ;
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
 xfs_dabuf_t *VAR_3)
{
 xfs_dir2_leaf_t *VAR_4;

 VAR_4 = VAR_3->data;
 FUNC_0(FUNC_1(VAR_4->hdr.info.magic) == VAR_0 ||
        FUNC_1(VAR_4->hdr.info.magic) == VAR_1);
 FUNC_2(VAR_2, VAR_3, (uint)((char *)&VAR_4->hdr - (char *)VAR_4),
  (uint)(sizeof(VAR_4->hdr) - 1));
}
