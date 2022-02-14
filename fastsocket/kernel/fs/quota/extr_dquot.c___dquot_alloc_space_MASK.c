
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__* i_dquot; } ;
typedef int qsize_t ;
struct TYPE_2__ {int dqptr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ,int,char*) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__*,char*) ;
 int FUNC_6 (struct inode*,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct inode *VAR_8, qsize_t VAR_9, int VAR_10)
{
 int VAR_11, VAR_12 = VAR_6;
 char VAR_13[VAR_3];
 int VAR_14 = VAR_10 & VAR_2;
 int VAR_15 = VAR_10 & VAR_1;
 int VAR_16 = VAR_10 & VAR_0;





 if (FUNC_0(VAR_8)) {
  FUNC_6(VAR_8, VAR_9, VAR_15);
  goto out;
 }

 FUNC_2(&FUNC_8(VAR_8->i_sb)->dqptr_sem);
 if (FUNC_0(VAR_8)) {
  FUNC_6(VAR_8, VAR_9, VAR_15);
  goto out_unlock;
 }

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  VAR_13[VAR_11] = VAR_5;

 FUNC_9(&VAR_7);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (!VAR_8->i_dquot[VAR_11])
   continue;
  if (FUNC_1(VAR_8->i_dquot[VAR_11], VAR_9, VAR_14, VAR_13+VAR_11)
      == VAR_4 && !VAR_16) {
   VAR_12 = VAR_4;
   FUNC_10(&VAR_7);
   goto out_flush_warn;
  }
 }
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (!VAR_8->i_dquot[VAR_11])
   continue;
  if (VAR_15)
   FUNC_4(VAR_8->i_dquot[VAR_11], VAR_9);
  else
   FUNC_3(VAR_8->i_dquot[VAR_11], VAR_9);
 }
 FUNC_6(VAR_8, VAR_9, VAR_15);
 FUNC_10(&VAR_7);

 if (VAR_15)
  goto out_flush_warn;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  if (VAR_8->i_dquot[VAR_11])
   FUNC_7(VAR_8->i_dquot[VAR_11]);
out_flush_warn:
 FUNC_5(VAR_8->i_dquot, VAR_13);
out_unlock:
 FUNC_11(&FUNC_8(VAR_8->i_sb)->dqptr_sem);
out:
 return VAR_12;
}
