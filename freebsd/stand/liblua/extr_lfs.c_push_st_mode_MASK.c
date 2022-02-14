
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static void
FUNC_8(lua_State *VAR_1, struct stat *VAR_2)
{
 const char *VAR_3;
 mode_t VAR_4;

 VAR_4 = (VAR_2->st_mode & VAR_0);
 if (FUNC_5(VAR_4))
  VAR_3 = "file";
 else if (FUNC_2(VAR_4))
  VAR_3 = "directory";
 else if (FUNC_4(VAR_4))
  VAR_3 = "link";
 else if (FUNC_6(VAR_4))
  VAR_3 = "socket";
 else if (FUNC_3(VAR_4))
  VAR_3 = "fifo";
 else if (FUNC_1(VAR_4))
  VAR_3 = "char device";
 else if (FUNC_0(VAR_4))
  VAR_3 = "block device";
 else
  VAR_3 = "other";

 FUNC_7(VAR_1, VAR_3);
}
