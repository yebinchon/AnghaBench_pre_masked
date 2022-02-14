
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct ufs2_dinode {int dummy; } ;
struct TYPE_3__ {scalar_t__ fs_magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,struct ufs2_dinode*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void
FUNC_2(union dinode *VAR_3)
{

 if (VAR_2.fs_magic == VAR_0)
  FUNC_1(&VAR_2, (struct ufs2_dinode *)VAR_3);
 FUNC_0(VAR_1);
}
