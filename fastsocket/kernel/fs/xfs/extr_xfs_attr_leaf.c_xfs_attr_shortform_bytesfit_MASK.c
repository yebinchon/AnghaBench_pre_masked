
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int m_flags; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_10__ {int if_bytes; int if_broot; } ;
struct TYPE_9__ {int di_format; int di_forkoff; } ;
struct TYPE_12__ {TYPE_2__ i_df; TYPE_1__ i_d; TYPE_3__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef int xfs_dev_t ;
typedef int uuid_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*) ;

int
FUNC_7(xfs_inode_t *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 xfs_mount_t *VAR_9 = VAR_3->i_mount;

 VAR_5 = (FUNC_4(VAR_9) - VAR_4) >> 3;

 switch (VAR_3->i_d.di_format) {
 case 130:
  VAR_6 = FUNC_5(sizeof(xfs_dev_t), 8) >> 3;
  return (VAR_5 >= VAR_6) ? VAR_6 : 0;
 case 128:
  VAR_6 = FUNC_5(sizeof(uuid_t), 8) >> 3;
  return (VAR_5 >= VAR_6) ? VAR_6 : 0;
 }
 if (VAR_4 <= FUNC_3(VAR_3))
  return VAR_3->i_d.di_forkoff;






 if (!(VAR_9->m_flags & VAR_2))
  return 0;

 VAR_8 = VAR_3->i_df.if_bytes;

 switch (VAR_3->i_d.di_format) {
 case 129:







  if (!VAR_3->i_d.di_forkoff && VAR_3->i_df.if_bytes >
      FUNC_6(VAR_3))
   VAR_8 = FUNC_2(VAR_1);
  break;
 case 131:






  if (VAR_3->i_d.di_forkoff) {
   if (VAR_5 < VAR_3->i_d.di_forkoff)
    return 0;
   return VAR_3->i_d.di_forkoff;
  }
  VAR_8 = FUNC_1(VAR_3->i_df.if_broot);
  break;
 }





 VAR_6 = FUNC_0(VAR_8, FUNC_2(VAR_1));
 VAR_6 = FUNC_5(VAR_6, 8) >> 3;


 VAR_7 = FUNC_4(VAR_9) - FUNC_2(VAR_0);
 VAR_7 = VAR_7 >> 3;

 if (VAR_5 >= VAR_7)
  return VAR_7;
 if (VAR_5 >= VAR_6)
  return VAR_5;
 return 0;
}
