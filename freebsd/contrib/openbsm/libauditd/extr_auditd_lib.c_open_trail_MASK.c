
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(char *VAR_5, gid_t VAR_6, int *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_5(VAR_5, VAR_1 | VAR_0, VAR_3);
 if (VAR_8 < 0)
  return (-1);
 if (FUNC_4(VAR_8, -1, VAR_6) < 0 || FUNC_3(VAR_8, VAR_3 | VAR_2) < 0) {
  (void) FUNC_2(VAR_8);
  (void) FUNC_6(VAR_5);
  return (-1);
 }
 (void) FUNC_2(VAR_8);
 if (FUNC_0(VAR_5) < 0) {
  *VAR_7 = VAR_4;
  (void) FUNC_6(VAR_5);
  return (-1);
 }
 (void) FUNC_1(VAR_5);
 return (0);
}
