
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_10__ {int length; } ;
typedef TYPE_2__ xfs_dir2_data_unused_t ;
struct TYPE_9__ {int magic; } ;
struct TYPE_11__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ xfs_dir2_data_t ;
typedef int xfs_dir2_data_off_t ;
struct TYPE_12__ {TYPE_3__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

void
FUNC_4(
 xfs_trans_t *VAR_2,
 xfs_dabuf_t *VAR_3,
 xfs_dir2_data_unused_t *VAR_4)
{
 xfs_dir2_data_t *VAR_5;

 VAR_5 = VAR_3->data;
 FUNC_0(FUNC_1(VAR_5->hdr.magic) == VAR_1 ||
        FUNC_1(VAR_5->hdr.magic) == VAR_0);



 FUNC_2(VAR_2, VAR_3, (uint)((char *)VAR_4 - (char *)VAR_5),
  (uint)((char *)&VAR_4->length + sizeof(VAR_4->length) -
         1 - (char *)VAR_5));



 FUNC_2(VAR_2, VAR_3,
  (uint)((char *)FUNC_3(VAR_4) - (char *)VAR_5),
  (uint)((char *)FUNC_3(VAR_4) - (char *)VAR_5 +
         sizeof(xfs_dir2_data_off_t) - 1));
}
