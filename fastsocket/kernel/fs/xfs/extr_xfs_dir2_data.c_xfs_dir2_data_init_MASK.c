
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_22__ {int m_dirblksize; } ;
typedef TYPE_4__ xfs_mount_t ;
struct TYPE_23__ {TYPE_4__* i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
typedef int xfs_dir2_db_t ;
struct TYPE_24__ {void* length; void* freetag; } ;
typedef TYPE_6__ xfs_dir2_data_unused_t ;
struct TYPE_21__ {TYPE_2__* bestfree; int magic; } ;
struct TYPE_25__ {TYPE_3__ hdr; TYPE_1__* u; } ;
typedef TYPE_7__ xfs_dir2_data_t ;
struct TYPE_26__ {TYPE_7__* data; } ;
typedef TYPE_8__ xfs_dabuf_t ;
struct TYPE_27__ {int * trans; TYPE_5__* dp; } ;
typedef TYPE_9__ xfs_da_args_t ;
typedef int uint ;
struct TYPE_20__ {void* length; void* offset; } ;
struct TYPE_19__ {TYPE_6__ unused; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_5__*,int ,int,TYPE_8__**,int ) ;
 int FUNC_4 (int *,TYPE_8__*) ;
 int FUNC_5 (int *,TYPE_8__*,TYPE_6__*) ;
 void** FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;

int
FUNC_8(
 xfs_da_args_t *VAR_4,
 xfs_dir2_db_t VAR_5,
 xfs_dabuf_t **VAR_6)
{
 xfs_dabuf_t *VAR_7;
 xfs_dir2_data_t *VAR_8;
 xfs_inode_t *VAR_9;
 xfs_dir2_data_unused_t *VAR_10;
 int VAR_11;
 int VAR_12;
 xfs_mount_t *VAR_13;
 xfs_trans_t *VAR_14;
 int VAR_15;

 VAR_9 = VAR_4->dp;
 VAR_13 = VAR_9->i_mount;
 VAR_14 = VAR_4->trans;



 VAR_11 = FUNC_3(VAR_14, VAR_9, FUNC_7(VAR_13, VAR_5), -1, &VAR_7,
  VAR_0);
 if (VAR_11) {
  return VAR_11;
 }
 FUNC_0(VAR_7 != ((void*)0));



 VAR_8 = VAR_7->data;
 VAR_8->hdr.magic = FUNC_2(VAR_3);
 VAR_8->hdr.bestfree[0].offset = FUNC_1(sizeof(VAR_8->hdr));
 for (VAR_12 = 1; VAR_12 < VAR_1; VAR_12++) {
  VAR_8->hdr.bestfree[VAR_12].length = 0;
  VAR_8->hdr.bestfree[VAR_12].offset = 0;
 }



 VAR_10 = &VAR_8->u[0].unused;
 VAR_10->freetag = FUNC_1(VAR_2);

 VAR_15=VAR_13->m_dirblksize - (uint)sizeof(VAR_8->hdr);
 VAR_8->hdr.bestfree[0].length = FUNC_1(VAR_15);
 VAR_10->length = FUNC_1(VAR_15);
 *FUNC_6(VAR_10) = FUNC_1((char *)VAR_10 - (char *)VAR_8);



 FUNC_4(VAR_14, VAR_7);
 FUNC_5(VAR_14, VAR_7, VAR_10);
 *VAR_6 = VAR_7;
 return 0;
}
