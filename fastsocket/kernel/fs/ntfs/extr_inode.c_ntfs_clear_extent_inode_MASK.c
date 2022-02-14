
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int base_ntfs_ino; } ;
struct TYPE_11__ {int nr_extents; TYPE_2__* vol; TYPE_1__ ext; int mft_no; } ;
typedef TYPE_3__ ntfs_inode ;
struct TYPE_10__ {int sb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,char*) ;

void FUNC_9(ntfs_inode *VAR_0)
{
 FUNC_6("Entering for inode 0x%lx.", VAR_0->mft_no);

 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_0->nr_extents != -1);
 FUNC_4(VAR_0);


 FUNC_7(VAR_0);
}
