
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct suj_ino {scalar_t__ si_ino; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ino_t ;


 scalar_t__ FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 union dinode* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (union dinode*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_8 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_9(struct suj_ino *VAR_10)
{
 union dinode *VAR_11;
 uint64_t VAR_12;
 uint64_t VAR_13;
 off_t VAR_14;
 off_t VAR_15;
 ino_t VAR_16;

 VAR_16 = VAR_10->si_ino;
 VAR_11 = FUNC_4(VAR_16);

 if (FUNC_0(VAR_11, VAR_5) == 0)
  return;






 VAR_9 = 0;
 VAR_13 = FUNC_6(VAR_11, VAR_16, VAR_8, VAR_2 | VAR_1);
 VAR_12 = FUNC_2(VAR_7, VAR_13);






 if (VAR_9 >= VAR_0) {
  VAR_14 = FUNC_0(VAR_11, VAR_6);
  VAR_15 = FUNC_7(VAR_7, VAR_9 + 1);
  if (VAR_14 > VAR_15)
   VAR_14 = VAR_15;

  FUNC_5(VAR_10->si_ino, VAR_14);
  return;
 }
 if (VAR_12 == FUNC_0(VAR_11, VAR_4))
  return;
 if (VAR_3)
  FUNC_8("ino %ju adjusting block count from %jd to %jd\n",
      (uintmax_t)VAR_16, FUNC_0(VAR_11, VAR_4), VAR_12);
 FUNC_1(VAR_11, VAR_4, VAR_12);
 FUNC_3(VAR_16);
}
