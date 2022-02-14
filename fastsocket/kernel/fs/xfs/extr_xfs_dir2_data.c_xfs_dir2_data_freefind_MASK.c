
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ length; } ;
typedef TYPE_2__ xfs_dir2_data_unused_t ;
struct TYPE_8__ {TYPE_4__* bestfree; int magic; } ;
struct TYPE_10__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ xfs_dir2_data_t ;
struct TYPE_11__ {scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_4__ xfs_dir2_data_free_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

xfs_dir2_data_free_t *
FUNC_3(
 xfs_dir2_data_t *VAR_3,
 xfs_dir2_data_unused_t *VAR_4)
{
 xfs_dir2_data_free_t *VAR_5;
 xfs_dir2_data_aoff_t VAR_6;





 VAR_6 = (xfs_dir2_data_aoff_t)((char *)VAR_4 - (char *)VAR_3);
 if (FUNC_1(VAR_4->length) <
     FUNC_1(VAR_3->hdr.bestfree[VAR_1 - 1].length))
  return ((void*)0);



 for (VAR_5 = &VAR_3->hdr.bestfree[0];
      VAR_5 < &VAR_3->hdr.bestfree[VAR_1];
      VAR_5++) {
  if (!VAR_5->offset)
   return ((void*)0);
  if (FUNC_1(VAR_5->offset) == VAR_6)
   return VAR_5;
 }



 return ((void*)0);
}
