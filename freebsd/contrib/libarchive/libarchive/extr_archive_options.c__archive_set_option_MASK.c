
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
 int FUNC_0 (struct archive*,int,int ,char const*) ;
 int FUNC_1 (struct archive*,int ,char*,...) ;

int
FUNC_2(struct archive *VAR_5,
    const char *VAR_6, const char *VAR_7, const char *VAR_8,
    int VAR_9, const char *VAR_10, option_handler VAR_11)
{
 const char *VAR_12, *VAR_13, *VAR_14;
 int VAR_15;

 FUNC_0(VAR_5, VAR_9, VAR_3, VAR_10);

 VAR_12 = (VAR_6 != ((void*)0) && VAR_6[0] != '\0') ? VAR_6 : ((void*)0);
 VAR_13 = (VAR_7 != ((void*)0) && VAR_7[0] != '\0') ? VAR_7 : ((void*)0);
 VAR_14 = (VAR_8 != ((void*)0) && VAR_8[0] != '\0') ? VAR_8 : ((void*)0);

 if (VAR_13 == ((void*)0) && VAR_14 == ((void*)0))
  return (VAR_2);
 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_5, VAR_0, "Empty option");
  return (VAR_1);
 }

 VAR_15 = VAR_11(VAR_5, VAR_12, VAR_13, VAR_14);
 if (VAR_15 == VAR_4 - 1) {
  FUNC_1(VAR_5, VAR_0,
      "Unknown module name: `%s'", VAR_12);
  return (VAR_1);
 }
 if (VAR_15 == VAR_4) {
  FUNC_1(VAR_5, VAR_0,
      "Undefined option: `%s%s%s%s%s%s'",
      VAR_14?"":"!", VAR_12?VAR_12:"", VAR_12?":":"", VAR_13, VAR_14?"=":"", VAR_14?VAR_14:"");
  return (VAR_1);
 }
 return (VAR_15);
}
