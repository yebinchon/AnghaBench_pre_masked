
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__* i_dquot; } ;
typedef int qsize_t ;
struct TYPE_2__ {int dqptr_sem; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct inode *VAR_3, qsize_t VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_1;

 if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_3, VAR_4);
  goto out;
 }

 FUNC_1(&FUNC_5(VAR_3->i_sb)->dqptr_sem);
 if (FUNC_0(VAR_3)) {
  FUNC_8(&FUNC_5(VAR_3->i_sb)->dqptr_sem);
  FUNC_3(VAR_3, VAR_4);
  goto out;
 }

 FUNC_6(&VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3->i_dquot[VAR_5])
   FUNC_2(VAR_3->i_dquot[VAR_5],
       VAR_4);
 }

 FUNC_3(VAR_3, VAR_4);
 FUNC_7(&VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3->i_dquot[VAR_5])
   FUNC_4(VAR_3->i_dquot[VAR_5]);
 FUNC_8(&FUNC_5(VAR_3->i_sb)->dqptr_sem);
out:
 return VAR_6;
}
