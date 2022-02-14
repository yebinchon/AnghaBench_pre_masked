
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path_id_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int,int,int) ;
 scalar_t__ FUNC_1 (int*,char const**,int*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,char*,int*) ;
 int FUNC_3 (char*,int,char*,char const*,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 () ;

__attribute__((used)) static path_id_t
FUNC_6(const char *VAR_1, int VAR_2, int VAR_3)
{
 path_id_t VAR_4;
 int VAR_5, VAR_6, VAR_7;
 char VAR_8[32];
 const char *VAR_9;

 VAR_4 = VAR_0;
 FUNC_3(VAR_8, sizeof(VAR_8), "%s%d", VAR_1, VAR_2);
 if (FUNC_4(VAR_8, "xpt0") == 0 && VAR_3 == 0)
  return (VAR_4);
 VAR_5 = 0;
 while ((FUNC_1(&VAR_5, &VAR_9, &VAR_6, "at", VAR_8)) == 0) {
  if (FUNC_4(VAR_9, "scbus")) {

   continue;
  }
  if (VAR_6 < 0)
   continue;
  if (FUNC_2("scbus", VAR_6, "bus", &VAR_7) == 0) {
   if (VAR_3 == VAR_7) {
    VAR_4 = VAR_6;
    break;
   }
  } else if (VAR_3 == 0) {

   VAR_4 = VAR_6;
   break;
  } else {
   FUNC_0("Ambiguous scbus configuration for %s%d "
          "bus %d, cannot wire down.  The kernel "
          "config entry for scbus%d should "
          "specify a controller bus.\n"
          "Scbus will be assigned dynamically.\n",
          VAR_1, VAR_2, VAR_3, VAR_6);
   break;
  }
 }

 if (VAR_4 == VAR_0)
  VAR_4 = FUNC_5();
 return (VAR_4);
}
