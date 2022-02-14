
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ di_aformat; } ;
struct TYPE_13__ {TYPE_1__ i_d; int i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_14__ {TYPE_2__* dp; } ;
typedef TYPE_3__ xfs_attr_list_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_4 ;

int
FUNC_9(xfs_attr_list_context_t *VAR_5)
{
 int VAR_6;
 xfs_inode_t *VAR_7 = VAR_5->dp;

 FUNC_1(VAR_4);

 if (FUNC_0(VAR_7->i_mount))
  return VAR_0;

 FUNC_6(VAR_7, VAR_3);




 if (!FUNC_7(VAR_7)) {
  VAR_6 = 0;
 } else if (VAR_7->i_d.di_aformat == VAR_2) {
  VAR_6 = FUNC_4(VAR_5);
 } else if (FUNC_5(VAR_7, VAR_1)) {
  VAR_6 = FUNC_2(VAR_5);
 } else {
  VAR_6 = FUNC_3(VAR_5);
 }

 FUNC_8(VAR_7, VAR_3);

 return VAR_6;
}
