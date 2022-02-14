
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int length; } ;
typedef TYPE_2__ xfs_dir2_data_unused_t ;
struct TYPE_8__ {TYPE_4__* bestfree; int magic; } ;
struct TYPE_10__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ xfs_dir2_data_t ;
struct TYPE_11__ {int length; int offset; } ;
typedef TYPE_4__ xfs_dir2_data_free_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

xfs_dir2_data_free_t *
FUNC_4(
 xfs_dir2_data_t *VAR_2,
 xfs_dir2_data_unused_t *VAR_3,
 int *VAR_4)
{
 xfs_dir2_data_free_t *VAR_5;
 xfs_dir2_data_free_t VAR_6;





 VAR_5 = VAR_2->hdr.bestfree;
 VAR_6.length = VAR_3->length;
 VAR_6.offset = FUNC_3((char *)VAR_3 - (char *)VAR_2);



 if (FUNC_1(VAR_6.length) > FUNC_1(VAR_5[0].length)) {
  VAR_5[2] = VAR_5[1];
  VAR_5[1] = VAR_5[0];
  VAR_5[0] = VAR_6;
  *VAR_4 = 1;
  return &VAR_5[0];
 }
 if (FUNC_1(VAR_6.length) > FUNC_1(VAR_5[1].length)) {
  VAR_5[2] = VAR_5[1];
  VAR_5[1] = VAR_6;
  *VAR_4 = 1;
  return &VAR_5[1];
 }
 if (FUNC_1(VAR_6.length) > FUNC_1(VAR_5[2].length)) {
  VAR_5[2] = VAR_6;
  *VAR_4 = 1;
  return &VAR_5[2];
 }
 return ((void*)0);
}
