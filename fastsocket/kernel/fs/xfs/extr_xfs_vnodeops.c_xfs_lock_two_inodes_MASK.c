
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int li_flags; } ;
typedef TYPE_1__ xfs_log_item_t ;
struct TYPE_9__ {scalar_t__ i_ino; scalar_t__ i_itemp; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int,int) ;

void
FUNC_6(
 xfs_inode_t *VAR_5,
 xfs_inode_t *VAR_6,
 uint VAR_7)
{
 xfs_inode_t *VAR_8;
 int VAR_9 = 0;
 xfs_log_item_t *VAR_10;

 if (VAR_7 & (VAR_3|VAR_2))
  FUNC_0((VAR_7 & (VAR_1|VAR_0)) == 0);
 FUNC_0(VAR_5->i_ino != VAR_6->i_ino);

 if (VAR_5->i_ino > VAR_6->i_ino) {
  VAR_8 = VAR_5;
  VAR_5 = VAR_6;
  VAR_6 = VAR_8;
 }

 again:
 FUNC_2(VAR_5, FUNC_5(VAR_7, 0));






 VAR_10 = (xfs_log_item_t *)VAR_5->i_itemp;
 if (VAR_10 && (VAR_10->li_flags & VAR_4)) {
  if (!FUNC_3(VAR_6, FUNC_5(VAR_7, 1))) {
   FUNC_4(VAR_5, VAR_7);
   if ((++VAR_9 % 5) == 0)
    FUNC_1(1);
   goto again;
  }
 } else {
  FUNC_2(VAR_6, FUNC_5(VAR_7, 1));
 }
}
