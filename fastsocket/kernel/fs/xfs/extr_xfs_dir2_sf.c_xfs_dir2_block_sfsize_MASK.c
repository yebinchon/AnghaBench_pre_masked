
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xfs_mount_t ;
struct TYPE_12__ {int * i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef scalar_t__ xfs_ino_t ;
typedef int xfs_dir2_sf_t ;
typedef int xfs_dir2_sf_off_t ;
struct TYPE_13__ {int count; int i8count; int parent; } ;
typedef TYPE_2__ xfs_dir2_sf_hdr_t ;
struct TYPE_14__ {int address; } ;
typedef TYPE_3__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_ino8_t ;
typedef int xfs_dir2_ino4_t ;
typedef int xfs_dir2_dataptr_t ;
struct TYPE_15__ {int namelen; char* name; int inumber; } ;
typedef TYPE_4__ xfs_dir2_data_entry_t ;
struct TYPE_16__ {int count; } ;
typedef TYPE_5__ xfs_dir2_block_tail_t ;
typedef int xfs_dir2_block_t ;
typedef int uint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,scalar_t__*,int *) ;

int
FUNC_8(
 xfs_inode_t *VAR_2,
 xfs_dir2_block_t *VAR_3,
 xfs_dir2_sf_hdr_t *VAR_4)
{
 xfs_dir2_dataptr_t VAR_5;
 xfs_dir2_leaf_entry_t *VAR_6;
 xfs_dir2_block_tail_t *VAR_7;
 int VAR_8;
 xfs_dir2_data_entry_t *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 xfs_mount_t *VAR_14;
 int VAR_15;
 xfs_ino_t VAR_16 = 0;
 int VAR_17=0;

 VAR_14 = VAR_2->i_mount;

 VAR_8 = VAR_11 = VAR_15 = 0;
 VAR_7 = FUNC_4(VAR_14, VAR_3);
 VAR_6 = FUNC_3(VAR_7);




 for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_7->count); VAR_10++) {
  if ((VAR_5 = FUNC_1(VAR_6[VAR_10].address)) == VAR_1)
   continue;



  VAR_9 = (xfs_dir2_data_entry_t *)
        ((char *)VAR_3 + FUNC_5(VAR_14, VAR_5));





  VAR_12 = VAR_9->namelen == 1 && VAR_9->name[0] == '.';
  VAR_13 =
   VAR_9->namelen == 2 &&
   VAR_9->name[0] == '.' && VAR_9->name[1] == '.';




  if (!VAR_12 && !VAR_13) {
   VAR_8++;
   VAR_15 += VAR_9->namelen;
  } else if (VAR_13)
   VAR_16 = FUNC_2(VAR_9->inumber);



  VAR_17 = FUNC_6(VAR_11) +
         VAR_8 +
         VAR_8 * (uint)sizeof(xfs_dir2_sf_off_t) +
         VAR_15 +
         (VAR_11 ?
    (uint)sizeof(xfs_dir2_ino8_t) * VAR_8 :
    (uint)sizeof(xfs_dir2_ino4_t) * VAR_8);
  if (VAR_17 > FUNC_0(VAR_2))
   return VAR_17;
 }



 VAR_4->count = VAR_8;
 VAR_4->i8count = VAR_11;
 FUNC_7((xfs_dir2_sf_t *)VAR_4, &VAR_16, &VAR_4->parent);
 return VAR_17;
}
