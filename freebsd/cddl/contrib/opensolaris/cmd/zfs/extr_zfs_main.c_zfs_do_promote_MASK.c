
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 char* FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(int VAR_5, char **VAR_6)
{
 zfs_handle_t *VAR_7;
 int VAR_8 = 0;


 if (VAR_5 > 1 && VAR_6[1][0] == '-') {
  (void) FUNC_0(VAR_4, FUNC_1("invalid option '%c'\n"),
      VAR_6[1][1]);
  FUNC_2(VAR_0);
 }


 if (VAR_5 < 2) {
  (void) FUNC_0(VAR_4, "%s", FUNC_1("missing clone filesystem"
      " argument\n"));
  FUNC_2(VAR_0);
 }
 if (VAR_5 > 2) {
  (void) FUNC_0(VAR_4, "%s", FUNC_1("too many arguments\n"));
  FUNC_2(VAR_0);
 }

 VAR_7 = FUNC_4(VAR_3, VAR_6[1], VAR_1 | VAR_2);
 if (VAR_7 == ((void*)0))
  return (1);

 VAR_8 = (FUNC_5(VAR_7) != 0);


 FUNC_3(VAR_7);
 return (VAR_8);
}
