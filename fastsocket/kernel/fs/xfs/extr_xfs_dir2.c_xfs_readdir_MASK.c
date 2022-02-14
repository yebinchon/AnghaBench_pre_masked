
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xfs_off_t ;
struct TYPE_9__ {int di_mode; scalar_t__ di_format; } ;
struct TYPE_10__ {TYPE_1__ i_d; int i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int filldir_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,void*,int *,int ) ;
 int FUNC_6 (int *,TYPE_2__*,int*) ;
 int FUNC_7 (TYPE_2__*,void*,size_t,int *,int ) ;
 int FUNC_8 (TYPE_2__*,void*,int *,int ) ;
 int VAR_4 ;

int
FUNC_9(
 xfs_inode_t *VAR_5,
 void *VAR_6,
 size_t VAR_7,
 xfs_off_t *VAR_8,
 filldir_t VAR_9)
{
 int VAR_10;
 int VAR_11;

 FUNC_4(VAR_5);

 if (FUNC_2(VAR_5->i_mount))
  return FUNC_1(VAR_0);

 FUNC_0((VAR_5->i_d.di_mode & VAR_2) == VAR_1);
 FUNC_3(VAR_4);

 if (VAR_5->i_d.di_format == VAR_3)
  VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_8, VAR_9);
 else if ((VAR_10 = FUNC_6(((void*)0), VAR_5, &VAR_11)))
  ;
 else if (VAR_11)
  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_8, VAR_9);
 else
  VAR_10 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8,
           VAR_9);
 return VAR_10;
}
