
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;






 if (FUNC_4(VAR_4, "zfs") == 0 || FUNC_5(VAR_4, "nfs") != ((void*)0) ||
     VAR_5[0] == '\0' || VAR_2 != 0) {
  FUNC_6();
  return (0);
 }






 FUNC_0();
 if (FUNC_1(VAR_5))
  return (0);





 FUNC_6();
 FUNC_3("mountroot: waiting for device %s...\n", VAR_5);
 VAR_6 = VAR_1 / 10;
 VAR_7 = VAR_3 * VAR_1;
 do {
  FUNC_2("rmdev", VAR_6);
  VAR_7 -= VAR_6;
 } while (VAR_7 > 0 && !FUNC_1(VAR_5));

 if (VAR_7 <= 0)
  return (VAR_0);

 return (0);
}
