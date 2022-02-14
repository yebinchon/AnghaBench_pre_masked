
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef int (* option_handler ) (struct archive*,char const*,char const*,char const*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive*,int,int ,char const*) ;
 int FUNC_1 (struct archive*,int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const**,char const**,char const**,char const**) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;

int
FUNC_6(struct archive *VAR_7, const char *VAR_8,
    int VAR_9, const char *VAR_10, option_handler VAR_11)
{
 int VAR_12 = 1, VAR_13 = 0, VAR_14 = 0, VAR_15;
 char *VAR_16;
 const char *VAR_17, *VAR_18, *VAR_19, *VAR_20;

 FUNC_0(VAR_7, VAR_9, VAR_4, VAR_10);

 if (VAR_8 == ((void*)0) || VAR_8[0] == '\0')
  return VAR_3;

 if ((VAR_16 = FUNC_5(VAR_8)) == ((void*)0)) {
  FUNC_1(VAR_7,
      VAR_6, "Out of memory adding file to list");
  return (VAR_2);
 }
 VAR_17 = (const char *)VAR_16;

 do {
  VAR_18 = VAR_19 = VAR_20 = ((void*)0);

  FUNC_3(&VAR_17, &VAR_18, &VAR_19, &VAR_20);
  if (VAR_18 == ((void*)0) && VAR_19 != ((void*)0) &&
      FUNC_4("__ignore_wrong_module_name__", VAR_19) == 0) {

   if (VAR_20 != ((void*)0)) {
    VAR_14 = 1;
    VAR_13 = 1;
   }
   continue;
  }

  VAR_15 = VAR_11(VAR_7, VAR_18, VAR_19, VAR_20);
  if (VAR_15 == VAR_2) {
   FUNC_2(VAR_16);
   return (VAR_2);
  }
  if (VAR_15 == VAR_1 && VAR_18 != ((void*)0)) {
   FUNC_2(VAR_16);
   return (VAR_1);
  }
  if (VAR_15 == VAR_5 - 1) {
   if (VAR_14)
    continue;

   FUNC_1(VAR_7, VAR_0,
       "Unknown module name: `%s'", VAR_18);
   FUNC_2(VAR_16);
   return (VAR_1);
  }
  if (VAR_15 == VAR_5) {

   FUNC_1(VAR_7, VAR_0,
       "Undefined option: `%s%s%s'",
       VAR_18?VAR_18:"", VAR_18?":":"", VAR_19);
   FUNC_2(VAR_16);
   return (VAR_1);
  }
  if (VAR_15 == VAR_3)
   VAR_13 = 1;
  else
   VAR_12 = 0;
 } while (VAR_17 != ((void*)0));

 FUNC_2(VAR_16);
 return VAR_12 ? VAR_3 : VAR_13 ? VAR_5 : VAR_1;
}
