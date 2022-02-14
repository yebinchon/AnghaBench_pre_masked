
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
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__*,char*) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(const struct inode *VAR_5, qsize_t VAR_6)
{
 int VAR_7, VAR_8 = VAR_1;
 char VAR_9[VAR_0];



 if (FUNC_0(VAR_5))
  return VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_9[VAR_7] = VAR_2;
 FUNC_2(&FUNC_6(VAR_5->i_sb)->dqptr_sem);
 if (FUNC_0(VAR_5)) {
  FUNC_9(&FUNC_6(VAR_5->i_sb)->dqptr_sem);
  return VAR_3;
 }
 FUNC_7(&VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!VAR_5->i_dquot[VAR_7])
   continue;
  if (FUNC_1(VAR_5->i_dquot[VAR_7], VAR_6, VAR_9+VAR_7)
      == VAR_1)
   goto warn_put_all;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!VAR_5->i_dquot[VAR_7])
   continue;
  FUNC_3(VAR_5->i_dquot[VAR_7], VAR_6);
 }
 VAR_8 = VAR_3;
warn_put_all:
 FUNC_8(&VAR_4);
 if (VAR_8 == VAR_3)

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   if (VAR_5->i_dquot[VAR_7])
    FUNC_5(VAR_5->i_dquot[VAR_7]);
 FUNC_4(VAR_5->i_dquot, VAR_9);
 FUNC_9(&FUNC_6(VAR_5->i_sb)->dqptr_sem);
 return VAR_8;
}
