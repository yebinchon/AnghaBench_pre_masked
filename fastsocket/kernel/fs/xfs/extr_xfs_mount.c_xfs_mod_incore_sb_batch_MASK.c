
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ msb_field; int msb_delta; } ;
typedef TYPE_1__ xfs_mod_sb_t ;
typedef int uint ;
struct xfs_mount {int m_sb_lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_mount*,scalar_t__,int ,int) ;

int
FUNC_4(
 struct xfs_mount *VAR_2,
 xfs_mod_sb_t *VAR_3,
 uint VAR_4,
 int VAR_5)
{
 xfs_mod_sb_t *VAR_6;
 int VAR_7 = 0;







 FUNC_1(&VAR_2->m_sb_lock);
 for (VAR_6 = VAR_3; VAR_6 < (VAR_3 + VAR_4); VAR_6++) {
  FUNC_0(VAR_6->msb_field < VAR_1 ||
         VAR_6->msb_field > VAR_0);

  VAR_7 = FUNC_3(VAR_2, VAR_6->msb_field,
         VAR_6->msb_delta, VAR_5);
  if (VAR_7)
   goto unwind;
 }
 FUNC_2(&VAR_2->m_sb_lock);
 return 0;

unwind:
 while (--VAR_6 >= VAR_3) {
  VAR_7 = FUNC_3(VAR_2, VAR_6->msb_field,
         -VAR_6->msb_delta, VAR_5);
  FUNC_0(VAR_7 == 0);
 }
 FUNC_2(&VAR_2->m_sb_lock);
 return VAR_7;
}
