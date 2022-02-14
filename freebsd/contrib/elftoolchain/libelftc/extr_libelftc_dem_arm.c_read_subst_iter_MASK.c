
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** container; } ;
struct demangle_data {int* p; TYPE_1__ vec; TYPE_1__ arg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_2 (int*,char**,int) ;

__attribute__((used)) static int
FUNC_3(struct demangle_data *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 char VAR_6;
 char *VAR_7;

 if (VAR_3 == ((void*)0))
  return (-1);

 ++VAR_3->p;
 FUNC_1(*VAR_3->p > 48 && *VAR_3->p < 58 && "*d->p not in ASCII numeric range");

 VAR_6 = *VAR_3->p - 48;

 FUNC_1(VAR_6 > 1);

 ++VAR_3->p;

 VAR_5 = FUNC_2(VAR_3->p, &VAR_7, 10);
 if (VAR_5 == 0 && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
  return (-1);

 FUNC_1(VAR_5 > 0);
 FUNC_1(VAR_7 != ((void*)0));

 VAR_3->p = VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_6 ; ++VAR_4) {
  if (FUNC_0(&VAR_3->vec, VAR_3->arg.container[VAR_5 - 1]) == 0)
   return (-1);

  if (FUNC_0(&VAR_3->arg, VAR_3->arg.container[VAR_5 - 1]) == 0)
   return (-1);

  if (VAR_4 != VAR_6 - 1 &&
      FUNC_0(&VAR_3->vec, ", ") == 0)
   return (-1);
 }

 if (*VAR_3->p == '\0')
  return (1);

 return (0);
}
