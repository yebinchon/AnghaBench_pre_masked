
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union dinodep {TYPE_2__* dp2; TYPE_1__* dp1; } ;
typedef int uintmax_t ;
typedef scalar_t__ ino_t ;
struct TYPE_10__ {int d_error; } ;
struct TYPE_9__ {scalar_t__ fs_magic; } ;
struct TYPE_8__ {scalar_t__ di_flags; } ;
struct TYPE_7__ {scalar_t__ di_flags; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,union dinodep*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 union dinodep VAR_3;
 ino_t VAR_4;

 VAR_4 = FUNC_1();
 if (VAR_4 == (ino_t)-1 || VAR_4 == 0) {
  FUNC_5("Journal file does not exist");
  return;
 }
 FUNC_2("Clearing journal flags from inode %ju\n", (uintmax_t)VAR_4);
 if (FUNC_0(&VAR_1, &VAR_3, VAR_4) != 0) {
  FUNC_4("Failed to get journal inode: %s", VAR_1.d_error);
  return;
 }
 if (VAR_2.fs_magic == VAR_0)
  VAR_3.dp1->di_flags = 0;
 else
  VAR_3.dp2->di_flags = 0;
 if (FUNC_3(&VAR_1) < 0) {
  FUNC_4("Failed to write journal inode: %s", VAR_1.d_error);
  return;
 }
}
