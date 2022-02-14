
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int intr_signed; char intr_iformat; int intr_type; } ;
typedef TYPE_1__ intr_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*) ;
 TYPE_1__* FUNC_6 (int) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static intr_t *
FUNC_8(const char *VAR_1, char **VAR_2)
{
 char VAR_3[256];
 char const *VAR_4;
 char *VAR_5;
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 1;
 char VAR_11 = '\0';
 intr_t *VAR_12;

 if (FUNC_2(VAR_1) > sizeof (VAR_3) - 1)
  FUNC_5("base type name \"%s\" is too long\n", VAR_1);

 FUNC_3(VAR_3, VAR_1, sizeof (VAR_3));

 for (VAR_5 = FUNC_4(VAR_3, " "); VAR_5 != ((void*)0); VAR_5 = FUNC_4(((void*)0), " ")) {
  if (FUNC_1(VAR_5, "signed") == 0)
   VAR_10 = 1;
  else if (FUNC_1(VAR_5, "unsigned") == 0)
   VAR_10 = 0;
  else if (FUNC_1(VAR_5, "long") == 0)
   VAR_6++;
  else if (FUNC_1(VAR_5, "char") == 0) {
   VAR_8++;
   VAR_11 = 'c';
  } else if (FUNC_1(VAR_5, "short") == 0)
   VAR_7++;
  else if (FUNC_1(VAR_5, "int") == 0)
   VAR_9++;
  else {





   return (((void*)0));
  }
 }

 if (VAR_8 > 1 || VAR_7 > 1 || VAR_9 > 1 || VAR_6 > 2)
  return (((void*)0));

 if (VAR_8 > 0) {
  if (VAR_6 > 0 || VAR_7 > 0 || VAR_9 > 0)
   return (((void*)0));

  VAR_4 = "char";

 } else if (VAR_7 > 0) {
  if (VAR_6 > 0)
   return (((void*)0));

  VAR_4 = "short";

 } else if (VAR_6 > 0) {
  VAR_4 = "long";

 } else {
  VAR_4 = "int";
 }

 VAR_12 = FUNC_6(sizeof (intr_t));
 VAR_12->intr_type = VAR_0;
 VAR_12->intr_signed = VAR_10;
 VAR_12->intr_iformat = VAR_11;

 FUNC_0(VAR_3, sizeof (VAR_3), "%s%s%s",
     (VAR_10 ? "" : "unsigned "),
     (VAR_6 > 1 ? "long " : ""),
     VAR_4);

 *VAR_2 = FUNC_7(VAR_3);
 return (VAR_12);
}
