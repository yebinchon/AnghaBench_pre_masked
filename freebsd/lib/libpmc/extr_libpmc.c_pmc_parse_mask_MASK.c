
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pmc_masks {int pm_value; int * pm_name; } ;


 scalar_t__ FUNC_0 (char*,int *) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static int
FUNC_3(const struct pmc_masks *VAR_0, char *VAR_1, uint64_t *VAR_2)
{
 const struct pmc_masks *VAR_3;
 char *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_0 == ((void*)0))
  return (-1);
 VAR_4 = FUNC_1(VAR_1, '=');
 if (*++VAR_4 == '\0')
  return (-1);
 VAR_6 = 0;
 while ((VAR_5 = FUNC_2(&VAR_4, "+")) != ((void*)0)) {
  for (VAR_3 = VAR_0; VAR_3->pm_name && FUNC_0(VAR_5, VAR_3->pm_name);
      VAR_3++)
   ;
  if (VAR_3->pm_name == ((void*)0))
   return (-1);
  *VAR_2 |= VAR_3->pm_value;
  VAR_6++;
 }
 return (VAR_6);
}
