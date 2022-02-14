
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int sub ;
struct pfioc_ruleset {char* path; scalar_t__ nr; char* name; } ;
typedef int pr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct pfioc_ruleset*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct pfioc_ruleset*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*,int) ;

int
FUNC_8(int VAR_8, int VAR_9, char *VAR_10)
{
 struct pfioc_ruleset VAR_11;
 u_int32_t VAR_12, VAR_13;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 FUNC_3(VAR_11.path, VAR_10, sizeof(VAR_11.path));
 if (FUNC_2(VAR_8, VAR_1, &VAR_11)) {
  if (VAR_6 == VAR_2)
   FUNC_1(VAR_7, "Anchor '%s' not found.\n",
       VAR_10);
  else
   FUNC_0(1, "DIOCGETRULESETS");
  return (-1);
 }
 VAR_12 = VAR_11.nr;
 for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13) {
  char VAR_14[VAR_3];

  VAR_11.nr = VAR_13;
  if (FUNC_2(VAR_8, VAR_0, &VAR_11))
   FUNC_0(1, "DIOCGETRULESET");
  if (!FUNC_6(VAR_11.name, VAR_5))
   continue;
  VAR_14[0] = 0;
  if (VAR_11.path[0]) {
   FUNC_7(VAR_14, VAR_11.path, sizeof(VAR_14));
   FUNC_7(VAR_14, "/", sizeof(VAR_14));
  }
  FUNC_7(VAR_14, VAR_11.name, sizeof(VAR_14));
  if (VAR_14[0] != '_' || (VAR_9 & VAR_4))
   FUNC_5("  %s\n", VAR_14);
  if ((VAR_9 & VAR_4) && FUNC_8(VAR_8, VAR_9, VAR_14))
   return (-1);
 }
 return (0);
}
