
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vol; int count; int mrec_lock; int mft_no; } ;
typedef TYPE_2__ ntfs_inode ;
struct TYPE_5__ {int sb; } ;
typedef int MFT_RECORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,char*,int ) ;

MFT_RECORD *FUNC_10(ntfs_inode *VAR_0)
{
 MFT_RECORD *VAR_1;

 FUNC_8("Entering for mft_no 0x%lx.", VAR_0->mft_no);


 FUNC_3(&VAR_0->count);


 FUNC_6(&VAR_0->mrec_lock);

 VAR_1 = FUNC_5(VAR_0);
 if (FUNC_4(!FUNC_0(VAR_1)))
  return VAR_1;

 FUNC_7(&VAR_0->mrec_lock);
 FUNC_2(&VAR_0->count);
 FUNC_9(VAR_0->vol->sb, "Failed with error code %lu.", -FUNC_1(VAR_1));
 return VAR_1;
}
