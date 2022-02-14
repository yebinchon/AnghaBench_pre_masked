
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ base_ntfs_ino; int is_first; scalar_t__ ntfs_ino; int base_mrec; int * al_entry; TYPE_1__* mrec; int * attr; } ;
typedef TYPE_2__ ntfs_attr_search_ctx ;
struct TYPE_5__ {int attrs_offset; } ;
typedef int ATTR_RECORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(ntfs_attr_search_ctx *VAR_0)
{
 if (FUNC_1(!VAR_0->base_ntfs_ino)) {

  VAR_0->is_first = 1;

  VAR_0->attr = (ATTR_RECORD*)((u8*)VAR_0->mrec +
    FUNC_0(VAR_0->mrec->attrs_offset));




  VAR_0->al_entry = ((void*)0);
  return;
 }
 if (VAR_0->ntfs_ino != VAR_0->base_ntfs_ino)
  FUNC_3(VAR_0->ntfs_ino);
 FUNC_2(VAR_0, VAR_0->base_ntfs_ino, VAR_0->base_mrec);
 return;
}
