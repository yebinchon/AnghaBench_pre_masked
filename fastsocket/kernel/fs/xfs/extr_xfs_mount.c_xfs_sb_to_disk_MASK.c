
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_sb_t ;
typedef size_t xfs_sb_field_t ;
typedef int xfs_dsb_t ;
typedef scalar_t__ xfs_caddr_t ;
typedef int __uint64_t ;
typedef int __u64 ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __int64_t ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int offset; int type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* VAR_0 ;

void
FUNC_6(
 xfs_dsb_t *VAR_1,
 xfs_sb_t *VAR_2,
 __int64_t VAR_3)
{
 xfs_caddr_t VAR_4 = (xfs_caddr_t)VAR_1;
 xfs_caddr_t VAR_5 = (xfs_caddr_t)VAR_2;
 xfs_sb_field_t VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_3);
 if (!VAR_3)
  return;

 while (VAR_3) {
  VAR_6 = (xfs_sb_field_t)FUNC_5((__uint64_t)VAR_3);
  VAR_7 = VAR_0[VAR_6].offset;
  VAR_8 = VAR_0[VAR_6 + 1].offset - VAR_7;

  FUNC_0(VAR_0[VAR_6].type == 0 || VAR_0[VAR_6].type == 1);

  if (VAR_8 == 1 || VAR_0[VAR_6].type == 1) {
   FUNC_4(VAR_4 + VAR_7, VAR_5 + VAR_7, VAR_8);
  } else {
   switch (VAR_8) {
   case 2:
    *(__be16 *)(VAR_4 + VAR_7) =
     FUNC_1(*(__u16 *)(VAR_5 + VAR_7));
    break;
   case 4:
    *(__be32 *)(VAR_4 + VAR_7) =
     FUNC_2(*(__u32 *)(VAR_5 + VAR_7));
    break;
   case 8:
    *(__be64 *)(VAR_4 + VAR_7) =
     FUNC_3(*(__u64 *)(VAR_5 + VAR_7));
    break;
   default:
    FUNC_0(0);
   }
  }

  VAR_3 &= ~(1LL << VAR_6);
 }
}
