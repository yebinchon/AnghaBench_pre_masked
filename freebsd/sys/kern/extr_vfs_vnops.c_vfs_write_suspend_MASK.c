
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {scalar_t__ mnt_susp_owner; int mnt_kern_flag; scalar_t__ mnt_flag; scalar_t__ mnt_writeopcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct mount*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (scalar_t__*,int ,int,char*,int ) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct mount*,int ) ;
 int FUNC_11 (struct mount*) ;

int
FUNC_12(struct mount *VAR_9, int VAR_10)
{
 int VAR_11;

 FUNC_3(FUNC_11(VAR_9));

 FUNC_7(VAR_9);

 FUNC_0(VAR_9);
 FUNC_6(VAR_9);
 if (VAR_9->mnt_susp_owner == VAR_8) {
  FUNC_9(VAR_9);
  FUNC_1(VAR_9);
  return (VAR_0);
 }
 while (VAR_9->mnt_kern_flag & VAR_2)
  FUNC_5(&VAR_9->mnt_flag, FUNC_2(VAR_9), VAR_6 - 1, "wsuspfs", 0);
 if ((VAR_10 & VAR_7) != 0 &&
     (VAR_9->mnt_kern_flag & VAR_3) != 0) {
  FUNC_9(VAR_9);
  FUNC_1(VAR_9);
  return (VAR_1);
 }

 VAR_9->mnt_kern_flag |= VAR_2;
 VAR_9->mnt_susp_owner = VAR_8;
 if (VAR_9->mnt_writeopcount > 0)
  (void) FUNC_5(&VAR_9->mnt_writeopcount,
      FUNC_2(VAR_9), (VAR_6 - 1)|VAR_5, "suspwt", 0);
 else
  FUNC_1(VAR_9);
 if ((VAR_11 = FUNC_4(VAR_9, VAR_4)) != 0) {
  FUNC_10(VAR_9, 0);
  FUNC_8(VAR_9);
 }
 return (VAR_11);
}
