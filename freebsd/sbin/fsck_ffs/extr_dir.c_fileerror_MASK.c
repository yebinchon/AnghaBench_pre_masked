
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
typedef char* uintmax_t ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (union dinode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (union dinode*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 union dinode* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,union dinode*) ;
 int FUNC_7 (char*,char const*) ;

void
FUNC_8(ino_t VAR_6, ino_t VAR_7, const char *VAR_8)
{
 union dinode *VAR_9;
 char VAR_10[VAR_2 + 1];

 FUNC_7("%s ", VAR_8);
 if (VAR_7 < VAR_3 || VAR_7 > VAR_5) {
  FUNC_4("out-of-range inode number %ju", (uintmax_t)VAR_7);
  return;
 }
 VAR_9 = FUNC_3(VAR_7);
 FUNC_6(VAR_7, VAR_9);
 FUNC_5("\n");
 FUNC_2(VAR_10, VAR_6, VAR_7);
 if (FUNC_1(VAR_9))
  FUNC_4("%s=%s\n",
      (FUNC_0(VAR_9, VAR_4) & VAR_1) == VAR_0 ? "DIR" : "FILE",
      VAR_10);
 else
  FUNC_4("NAME=%s\n", VAR_10);
}
