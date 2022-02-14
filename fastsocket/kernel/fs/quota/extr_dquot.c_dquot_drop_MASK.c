
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; struct dquot** i_dquot; } ;
struct dquot {int dummy; } ;
struct TYPE_2__ {int dqptr_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dquot*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct inode *VAR_1)
{
 int VAR_2;
 struct dquot *VAR_3[VAR_0];

 FUNC_0(&FUNC_2(VAR_1->i_sb)->dqptr_sem);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3[VAR_2] = VAR_1->i_dquot[VAR_2];
  VAR_1->i_dquot[VAR_2] = ((void*)0);
 }
 FUNC_3(&FUNC_2(VAR_1->i_sb)->dqptr_sem);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_3[VAR_2]);
 return 0;
}
