
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t n_args; TYPE_1__* args; int cmd; } ;
struct TYPE_5__ {int * arg_str; int arg_val; int argtype; } ;
typedef TYPE_2__ CMD ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_5(char *VAR_0, CMD *VAR_1)
{
    char *VAR_2, *VAR_3;

    VAR_2 = VAR_0;
    while (1) {
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 while (FUNC_1(*VAR_2)) ++VAR_2;
 if (*VAR_2 == '\0' || *VAR_2 == '#')
     break;
 VAR_1->cmd = *VAR_2++;




     while (1) {
     while (FUNC_1(*VAR_2)) ++VAR_2;
     if (*VAR_2 == '\0')
  break;
     if (*VAR_2 == '#')
  break;
     if (FUNC_0(*VAR_2))
  VAR_1->args[VAR_1->n_args].argtype = *VAR_2++;
     VAR_3 = ((void*)0);
     VAR_1->args[VAR_1->n_args].arg_val = FUNC_4(VAR_2, &VAR_3, 0);
      if (VAR_2 == VAR_3 || (!FUNC_1(*VAR_3) && *VAR_3 != '\0')) {
   char VAR_4;
   VAR_3 = VAR_2;
   while (!FUNC_1(*VAR_3) && *VAR_3 != '\0') ++VAR_3;
   VAR_4 = *VAR_3; *VAR_3 = '\0';
   VAR_1->args[VAR_1->n_args].arg_str = FUNC_3(VAR_2);
   *VAR_3 = VAR_4;
      } else
   VAR_1->args[VAR_1->n_args].arg_str = ((void*)0);
     VAR_2 = VAR_3;
     VAR_1->n_args++;
 }
 break;
    }
}
