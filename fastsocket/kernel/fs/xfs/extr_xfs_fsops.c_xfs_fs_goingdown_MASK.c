
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* m_super; } ;
typedef TYPE_2__ xfs_mount_t ;
struct super_block {int s_bdev; } ;
typedef int __uint32_t ;
struct TYPE_5__ {int s_bdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;



 struct super_block* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct super_block*) ;
 int FUNC_4 (TYPE_2__*,int) ;

int
FUNC_5(
 xfs_mount_t *VAR_3,
 __uint32_t VAR_4)
{
 switch (VAR_4) {
 case 130: {
  struct super_block *VAR_5 = FUNC_2(VAR_3->m_super->s_bdev);

  if (VAR_5 && !FUNC_0(VAR_5)) {
   FUNC_4(VAR_3, VAR_1);
   FUNC_3(VAR_5->s_bdev, VAR_5);
  }

  break;
 }
 case 129:
  FUNC_4(VAR_3, VAR_1);
  break;
 case 128:
  FUNC_4(VAR_3,
    VAR_1 | VAR_2);
  break;
 default:
  return FUNC_1(VAR_0);
 }

 return 0;
}
