
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_uid; scalar_t__ i_gid; int i_sb; struct dquot** i_dquot; } ;
struct iattr {int ia_valid; scalar_t__ ia_uid; scalar_t__ ia_gid; } ;
struct dquot {int dummy; } ;
typedef scalar_t__ qsize_t ;
struct TYPE_2__ {int dqptr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct dquot*,scalar_t__,int ,char*) ;
 int FUNC_2 (struct dquot*,int,char*) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 struct dquot* FUNC_4 (int ,scalar_t__,size_t) ;
 int FUNC_5 (struct dquot*) ;
 int FUNC_6 (struct dquot*,int) ;
 int FUNC_7 (struct dquot*,scalar_t__) ;
 int FUNC_8 (struct dquot*,scalar_t__) ;
 int FUNC_9 (struct dquot*,int) ;
 int FUNC_10 (struct dquot*,scalar_t__) ;
 int FUNC_11 (struct dquot*,scalar_t__) ;
 int FUNC_12 (struct dquot**,char*) ;
 char FUNC_13 (struct dquot*,scalar_t__) ;
 char FUNC_14 (struct dquot*,int) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (struct dquot*) ;
 TYPE_1__* FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct inode *VAR_9, struct iattr *VAR_10)
{
 qsize_t VAR_11, VAR_12;
 qsize_t VAR_13 = 0;
 struct dquot *VAR_14[VAR_3];
 struct dquot *VAR_15[VAR_3];
 int VAR_16, VAR_17 = VAR_6;
 int VAR_18 = VAR_10->ia_valid & VAR_1 && VAR_9->i_uid != VAR_10->ia_uid,
     VAR_19 = VAR_10->ia_valid & VAR_0 && VAR_9->i_gid != VAR_10->ia_gid;
 char VAR_20[VAR_3];
 char VAR_21[VAR_3], VAR_22[VAR_3];



 if (FUNC_0(VAR_9))
  return VAR_6;

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  VAR_14[VAR_16] = ((void*)0);
  VAR_15[VAR_16] = ((void*)0);
  VAR_20[VAR_16] = VAR_5;
 }
 if (VAR_18)
  VAR_15[VAR_7] = FUNC_4(VAR_9->i_sb, VAR_10->ia_uid,
           VAR_7);
 if (VAR_19)
  VAR_15[VAR_2] = FUNC_4(VAR_9->i_sb, VAR_10->ia_gid,
           VAR_2);

 FUNC_3(&FUNC_18(VAR_9->i_sb)->dqptr_sem);

 if (FUNC_0(VAR_9)) {
  FUNC_21(&FUNC_18(VAR_9->i_sb)->dqptr_sem);
  goto put_all;
 }
 FUNC_19(&VAR_8);
 VAR_12 = FUNC_15(VAR_9);
 VAR_13 = FUNC_16(VAR_9);
 VAR_11 = VAR_12 + VAR_13;

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  if (!VAR_15[VAR_16])
   continue;
  VAR_14[VAR_16] = VAR_9->i_dquot[VAR_16];
  if (FUNC_2(VAR_15[VAR_16], 1, VAR_20 + VAR_16) ==
      VAR_4 || FUNC_1(VAR_15[VAR_16], VAR_11, 0,
      VAR_20 + VAR_16) == VAR_4)
   goto over_quota;
 }




 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {



  if (!VAR_15[VAR_16])
   continue;


  if (VAR_14[VAR_16]) {
   VAR_21[VAR_16] =
    FUNC_14(VAR_14[VAR_16], 1);
   VAR_22[VAR_16] =
    FUNC_13(VAR_14[VAR_16], VAR_11);
   FUNC_6(VAR_14[VAR_16], 1);
   FUNC_7(VAR_14[VAR_16], VAR_12);
   FUNC_8(VAR_14[VAR_16],
        VAR_13);
  }

  FUNC_9(VAR_15[VAR_16], 1);
  FUNC_10(VAR_15[VAR_16], VAR_12);
  FUNC_11(VAR_15[VAR_16], VAR_13);

  VAR_9->i_dquot[VAR_16] = VAR_15[VAR_16];
 }
 FUNC_20(&VAR_8);
 FUNC_21(&FUNC_18(VAR_9->i_sb)->dqptr_sem);


 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  if (VAR_14[VAR_16])
   FUNC_17(VAR_14[VAR_16]);
  if (VAR_15[VAR_16]) {
   FUNC_17(VAR_15[VAR_16]);

   VAR_15[VAR_16] = ((void*)0);
  }
 }
warn_put_all:
 FUNC_12(VAR_15, VAR_20);
 FUNC_12(VAR_14, VAR_21);
 FUNC_12(VAR_14, VAR_22);
put_all:
 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  FUNC_5(VAR_14[VAR_16]);
  FUNC_5(VAR_15[VAR_16]);
 }
 return VAR_17;
over_quota:
 FUNC_20(&VAR_8);
 FUNC_21(&FUNC_18(VAR_9->i_sb)->dqptr_sem);

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
  VAR_14[VAR_16] = ((void*)0);
 VAR_17 = VAR_4;
 goto warn_put_all;
}
