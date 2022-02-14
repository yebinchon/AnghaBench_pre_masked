
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int nn_map_t ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int * FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (char*,char,int) ;
 scalar_t__ FUNC_5 (char const*,int ,int *,char*,int) ;
 scalar_t__ FUNC_6 (char const*,struct stat*) ;
 int VAR_5 ;
 char* FUNC_7 (scalar_t__) ;

nn_map_t *FUNC_8(const char *VAR_6)
{
 nn_map_t *VAR_7;
 char VAR_8[VAR_2 + 1];

 if (!VAR_6) {






  return ((void*)0);

 }

 VAR_7 = FUNC_3(sizeof(*VAR_7));
 if (!VAR_7)
  return ((void*)0);
 FUNC_0(VAR_7);

 FUNC_4(VAR_8, '\0', VAR_2 + 1);
 if (FUNC_5(VAR_6, VAR_4, VAR_7,
    VAR_8, VAR_2)) {
  if (VAR_3 == VAR_0) {
   FUNC_2(VAR_5,
    "WARNING failed to parse node name map "
    "\"%s\"\n",
    VAR_6);
   FUNC_2(VAR_5,
    "WARNING failed line: \"%s\"\n",
    VAR_8);
  }
  else
   FUNC_2(VAR_5,
    "WARNING failed to open node name map "
    "\"%s\" (%s)\n",
    VAR_6, FUNC_7(VAR_3));
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
