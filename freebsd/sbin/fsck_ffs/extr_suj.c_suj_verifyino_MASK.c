
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
struct TYPE_2__ {int fs_mtime; } ;


 int FUNC_0 (union dinode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_2(union dinode *VAR_12)
{

 if (FUNC_0(VAR_12, VAR_8) != 1) {
  FUNC_1("Invalid link count %d for journal inode %ju\n",
      FUNC_0(VAR_12, VAR_8), (uintmax_t)VAR_11);
  return (-1);
 }

 if ((FUNC_0(VAR_12, VAR_5) & (VAR_2 | VAR_3)) !=
     (VAR_2 | VAR_3)) {
  FUNC_1("Invalid flags 0x%X for journal inode %ju\n",
      FUNC_0(VAR_12, VAR_5), (uintmax_t)VAR_11);
  return (-1);
 }

 if (FUNC_0(VAR_12, VAR_6) != (VAR_0 | VAR_1)) {
  FUNC_1("Invalid mode %o for journal inode %ju\n",
      FUNC_0(VAR_12, VAR_6), (uintmax_t)VAR_11);
  return (-1);
 }

 if (FUNC_0(VAR_12, VAR_9) < VAR_4) {
  FUNC_1("Invalid size %jd for journal inode %ju\n",
      FUNC_0(VAR_12, VAR_9), (uintmax_t)VAR_11);
  return (-1);
 }

 if (FUNC_0(VAR_12, VAR_7) != VAR_10->fs_mtime) {
  FUNC_1("Journal timestamp does not match fs mount time\n");
  return (-1);
 }

 return (0);
}
