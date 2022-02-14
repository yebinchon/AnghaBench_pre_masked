
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct pfioc_ruleset {char* name; scalar_t__ nr; int path; } ;
typedef int prs ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,struct pfioc_ruleset*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct pfioc_ruleset*,int ,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_8(void)
{
 struct pfioc_ruleset VAR_7;
 u_int32_t VAR_8;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 FUNC_6(VAR_7.path, VAR_4, sizeof(VAR_7.path));
 if (FUNC_1(VAR_5, VAR_1, &VAR_7)) {
  if (VAR_6 == VAR_2)
   return (0);
  else
   return (1);
 }

 VAR_8 = VAR_7.nr;
 while (VAR_8) {
  char *VAR_9, *VAR_10;
  pid_t VAR_11;

  VAR_7.nr = VAR_8 - 1;
  if (FUNC_1(VAR_5, VAR_0, &VAR_7))
   return (1);
  VAR_6 = 0;
  if ((VAR_10 = FUNC_5(VAR_7.name, '(')) == ((void*)0))
   VAR_10 = VAR_7.name;
  else
   VAR_10++;
  VAR_11 = FUNC_7(VAR_10, &VAR_9, 10);
  if (!VAR_7.name[0] || VAR_6 ||
      (*VAR_9 && (VAR_10 == VAR_7.name || *VAR_9 != ')')))
   return (1);
  if ((FUNC_2(VAR_11, 0) && VAR_6 != VAR_3) || VAR_11 == FUNC_0()) {
   if (FUNC_4(VAR_4, VAR_7.name))
    return (1);
  }
  VAR_8--;
 }
 return (0);
}
