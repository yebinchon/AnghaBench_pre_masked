
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__* i_dquot; } ;
typedef int qsize_t ;
struct TYPE_2__ {int dqptr_sem; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__*,char*) ;
 char FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct inode*,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct inode *VAR_4, qsize_t VAR_5, int VAR_6)
{
 unsigned int VAR_7;
 char VAR_8[VAR_1];
 int VAR_9 = VAR_6 & VAR_0;



 if (FUNC_0(VAR_4)) {
out_sub:
  FUNC_6(VAR_4, VAR_5, VAR_9);
  return VAR_2;
 }

 FUNC_1(&FUNC_8(VAR_4->i_sb)->dqptr_sem);

 if (FUNC_0(VAR_4)) {
  FUNC_11(&FUNC_8(VAR_4->i_sb)->dqptr_sem);
  goto out_sub;
 }
 FUNC_9(&VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!VAR_4->i_dquot[VAR_7])
   continue;
  VAR_8[VAR_7] = FUNC_5(VAR_4->i_dquot[VAR_7], VAR_5);
  if (VAR_9)
   FUNC_3(VAR_4->i_dquot[VAR_7], VAR_5);
  else
   FUNC_2(VAR_4->i_dquot[VAR_7], VAR_5);
 }
 FUNC_6(VAR_4, VAR_5, VAR_9);
 FUNC_10(&VAR_3);

 if (VAR_9)
  goto out_unlock;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_4->i_dquot[VAR_7])
   FUNC_7(VAR_4->i_dquot[VAR_7]);
out_unlock:
 FUNC_4(VAR_4->i_dquot, VAR_8);
 FUNC_11(&FUNC_8(VAR_4->i_sb)->dqptr_sem);
 return VAR_2;
}
