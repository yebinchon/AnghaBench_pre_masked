
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xfs_mount_t ;
struct TYPE_14__ {int di_gid; int di_uid; } ;
struct TYPE_15__ {TYPE_5__* i_gdquot; TYPE_5__* i_udquot; TYPE_1__ i_d; int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int uint ;
struct TYPE_16__ {struct TYPE_16__* q_gdquot; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_5__* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int,TYPE_5__*,TYPE_5__**) ;
 int FUNC_8 (TYPE_2__*) ;

int
FUNC_9(
 xfs_inode_t *VAR_5,
 uint VAR_6)
{
 xfs_mount_t *VAR_7 = VAR_5->i_mount;
 uint VAR_8 = 0;
 int VAR_9 = 0;

 if (!FUNC_8(VAR_5))
  return 0;

 FUNC_0(FUNC_5(VAR_5, VAR_3));

 if (FUNC_3(VAR_7)) {
  VAR_9 = FUNC_7(VAR_5, VAR_5->i_d.di_uid, VAR_2,
      VAR_6 & VAR_4,
      ((void*)0), &VAR_5->i_udquot);
  if (VAR_9)
   goto done;
  VAR_8++;
 }

 FUNC_0(FUNC_5(VAR_5, VAR_3));
 if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7) ?
   FUNC_7(VAR_5, VAR_5->i_d.di_gid, VAR_0,
      VAR_6 & VAR_4,
      VAR_5->i_udquot, &VAR_5->i_gdquot) :
   FUNC_7(VAR_5, FUNC_4(VAR_5), VAR_1,
      VAR_6 & VAR_4,
      VAR_5->i_udquot, &VAR_5->i_gdquot);




  if (VAR_9)
   goto done;
  VAR_8++;
 }





 if (VAR_8 == 2) {
  FUNC_0(FUNC_5(VAR_5, VAR_3));
  FUNC_0(VAR_5->i_udquot);
  FUNC_0(VAR_5->i_gdquot);







  if (VAR_5->i_udquot->q_gdquot == VAR_5->i_gdquot)
   goto done;



  FUNC_6(VAR_5->i_udquot, VAR_5->i_gdquot);
 }

 done:
 return VAR_9;
}
