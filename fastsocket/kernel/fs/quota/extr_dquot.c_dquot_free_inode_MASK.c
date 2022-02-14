
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__* i_dquot; } ;
typedef int qsize_t ;
struct TYPE_2__ {int dqptr_sem; } ;


 scalar_t__ FUNC_0 (struct inode const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__*,char*) ;
 char FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(const struct inode *VAR_3, qsize_t VAR_4)
{
 unsigned int VAR_5;
 char VAR_6[VAR_0];



 if (FUNC_0(VAR_3))
  return VAR_1;

 FUNC_1(&FUNC_6(VAR_3->i_sb)->dqptr_sem);

 if (FUNC_0(VAR_3)) {
  FUNC_9(&FUNC_6(VAR_3->i_sb)->dqptr_sem);
  return VAR_1;
 }
 FUNC_7(&VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_3->i_dquot[VAR_5])
   continue;
  VAR_6[VAR_5] = FUNC_4(VAR_3->i_dquot[VAR_5], VAR_4);
  FUNC_2(VAR_3->i_dquot[VAR_5], VAR_4);
 }
 FUNC_8(&VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3->i_dquot[VAR_5])
   FUNC_5(VAR_3->i_dquot[VAR_5]);
 FUNC_3(VAR_3->i_dquot, VAR_6);
 FUNC_9(&FUNC_6(VAR_3->i_sb)->dqptr_sem);
 return VAR_1;
}
