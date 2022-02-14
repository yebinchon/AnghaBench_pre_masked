
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int hits; int files; } ;
typedef TYPE_1__ Path ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_4(Path *VAR_3, const char *VAR_4, const char *VAR_5)
{
 char *VAR_6;
 const char *VAR_7;

 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_1, "   %s ...\n", VAR_3->name);
 }







 for (VAR_6 = VAR_3->name, VAR_7 = VAR_4; *VAR_6 && *VAR_6 == *VAR_7; VAR_6++, VAR_7++) {
  continue;
 }
 if (*VAR_6 != '\0' || VAR_7 != VAR_5 - 1) {
  return ((void*)0);
 }

 if (FUNC_1(&VAR_3->files, VAR_5) == ((void*)0)) {
  if (FUNC_0(VAR_0)) {
   FUNC_3(VAR_1, "   must be here but isn't -- returning\n");
  }

  return FUNC_2("");
 }

 VAR_3->hits += 1;
 VAR_2 += 1;
 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_1, "   returning %s\n", VAR_4);
 }
 return (FUNC_2(VAR_4));
}
