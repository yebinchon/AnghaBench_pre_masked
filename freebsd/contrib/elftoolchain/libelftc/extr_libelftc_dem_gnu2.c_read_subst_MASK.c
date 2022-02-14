
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * container; } ;
struct demangle_data {char* p; TYPE_1__ arg; TYPE_1__ vec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(struct demangle_data *VAR_3)
{
 size_t VAR_4;
 char *VAR_5;

 if (VAR_3 == ((void*)0))
  return (-1);

 VAR_4 = FUNC_2(VAR_3->p + 1, &VAR_5, 10);
 if (VAR_4 == 0 && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
  return (-1);

 FUNC_1(VAR_4 > 0);
 FUNC_1(VAR_5 != ((void*)0));

 VAR_3->p = VAR_5;

 if (FUNC_0(&VAR_3->vec, VAR_3->arg.container[VAR_4 - 1]) == 0)
  return (-1);

 if (FUNC_0(&VAR_3->arg, VAR_3->arg.container[VAR_4 - 1]) == 0)
  return (-1);

 if (*VAR_3->p == '\0')
  return (1);

 return (0);
}
