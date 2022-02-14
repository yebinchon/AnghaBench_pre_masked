
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sb_fdblocks; } ;
struct TYPE_10__ {scalar_t__ m_resblks; scalar_t__ m_resblks_avail; int m_sb_lock; TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_11__ {scalar_t__ resblks; scalar_t__ resblks_avail; } ;
typedef TYPE_3__ xfs_fsop_resblks_t ;
typedef scalar_t__ __uint64_t ;
typedef scalar_t__ __int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

int
FUNC_5(
 xfs_mount_t *VAR_3,
 __uint64_t *VAR_4,
 xfs_fsop_resblks_t *VAR_5)
{
 __int64_t VAR_6, VAR_7, VAR_8;
 __uint64_t VAR_9;


 if (VAR_4 == (__uint64_t *)((void*)0)) {
  if (!VAR_5)
   return VAR_0;
  VAR_5->resblks = VAR_3->m_resblks;
  VAR_5->resblks_avail = VAR_3->m_resblks_avail;
  return 0;
 }

 VAR_9 = *VAR_4;
retry:
 FUNC_1(&VAR_3->m_sb_lock);
 FUNC_4(VAR_3, 0);





 VAR_8 = 0;
 if (VAR_3->m_resblks > VAR_9) {
  VAR_6 = VAR_3->m_resblks_avail - VAR_9;
  if (VAR_6 > 0) {
   VAR_8 = VAR_6;
   VAR_3->m_resblks_avail -= VAR_6;
  }
  VAR_3->m_resblks = VAR_9;
 } else {
  __int64_t VAR_10;

  VAR_10 = VAR_3->m_sb.sb_fdblocks - FUNC_0(VAR_3);
  if (!VAR_10)
   goto out;

  VAR_7 = VAR_9 - VAR_3->m_resblks;
  VAR_6 = VAR_10 - VAR_7;
  if (VAR_6 < 0) {

   VAR_3->m_resblks += VAR_10;
   VAR_3->m_resblks_avail += VAR_10;
   VAR_8 = -VAR_10;
  } else {
   VAR_8 = -VAR_7;
   VAR_3->m_resblks = VAR_9;
   VAR_3->m_resblks_avail += VAR_7;
  }
 }
out:
 if (VAR_5) {
  VAR_5->resblks = VAR_3->m_resblks;
  VAR_5->resblks_avail = VAR_3->m_resblks_avail;
 }
 FUNC_2(&VAR_3->m_sb_lock);

 if (VAR_8) {
  int VAR_11;
  VAR_11 = FUNC_3(VAR_3, VAR_2,
       VAR_8, 0);
  if (VAR_11 == VAR_1)
   goto retry;
 }
 return 0;
}
