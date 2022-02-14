
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_6__ {int magic; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ xfs_dir2_free_t ;
typedef int xfs_dir2_free_hdr_t ;
struct TYPE_8__ {TYPE_2__* data; } ;
typedef TYPE_3__ xfs_dabuf_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(
 xfs_trans_t *VAR_1,
 xfs_dabuf_t *VAR_2)
{
 xfs_dir2_free_t *VAR_3;

 VAR_3 = VAR_2->data;
 FUNC_0(FUNC_1(VAR_3->hdr.magic) == VAR_0);
 FUNC_2(VAR_1, VAR_2, (uint)((char *)&VAR_3->hdr - (char *)VAR_3),
  (uint)(sizeof(xfs_dir2_free_hdr_t) - 1));
}
