
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 int * FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(int VAR_4, char **VAR_5, int VAR_6)
{
 zfs_handle_t *VAR_7;
 int VAR_8, VAR_9;


 if (VAR_4 < 3) {
  (void) FUNC_0(VAR_3, "%s", FUNC_1("missing argument(s)\n"));
  FUNC_3(VAR_0);
 }
 if (VAR_4 > 3) {
  (void) FUNC_0(VAR_3, "%s", FUNC_1("too many arguments\n"));
  FUNC_3(VAR_0);
 }

 VAR_8 = FUNC_2(VAR_5[1]);
 if (VAR_8 < 0) {
  (void) FUNC_0(VAR_3, "%s", FUNC_1("invalid jail id or name\n"));
  FUNC_3(VAR_0);
 }

 VAR_7 = FUNC_6(VAR_2, VAR_5[2], VAR_1);
 if (VAR_7 == ((void*)0))
  return (1);

 VAR_9 = (FUNC_5(VAR_7, VAR_8, VAR_6) != 0);

 FUNC_4(VAR_7);
 return (VAR_9);
}
