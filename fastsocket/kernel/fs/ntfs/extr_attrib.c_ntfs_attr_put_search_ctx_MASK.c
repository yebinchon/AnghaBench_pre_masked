
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ base_ntfs_ino; scalar_t__ ntfs_ino; } ;
typedef TYPE_1__ ntfs_attr_search_ctx ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(ntfs_attr_search_ctx *VAR_1)
{
 if (VAR_1->base_ntfs_ino && VAR_1->ntfs_ino != VAR_1->base_ntfs_ino)
  FUNC_1(VAR_1->ntfs_ino);
 FUNC_0(VAR_0, VAR_1);
 return;
}
