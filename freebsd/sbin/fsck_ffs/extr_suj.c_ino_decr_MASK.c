
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 union dinode* FUNC_4 (scalar_t__) ;
 int FUNC_5 (union dinode*,scalar_t__,int) ;
 int FUNC_6 (char*,int ,int,int) ;

__attribute__((used)) static void
FUNC_7(ino_t VAR_5)
{
 union dinode *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_5);
 VAR_8 = FUNC_0(VAR_6, VAR_4);
 VAR_9 = FUNC_0(VAR_6, VAR_3);
 if (VAR_8 < 1)
  FUNC_2("Inode %d link count %d invalid\n", VAR_5, VAR_8);
 if (VAR_9 == 0)
  FUNC_2("Inode %d has a link of %d with 0 mode\n", VAR_5, VAR_8);
 VAR_8--;
 if ((VAR_9 & VAR_1) == VAR_0)
  VAR_7 = 2;
 else
  VAR_7 = 1;
 if (VAR_8 < VAR_7) {
  if (VAR_2)
   FUNC_6("ino %ju not enough links to live %d < %d\n",
       (uintmax_t)VAR_5, VAR_8, VAR_7);
  FUNC_5(VAR_6, VAR_5, VAR_9);
  return;
 }
 FUNC_1(VAR_6, VAR_4, VAR_8);
 FUNC_3(VAR_5);
}
