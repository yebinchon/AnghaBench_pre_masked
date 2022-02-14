
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ u_num; } ;
struct figpar_config {TYPE_1__ value; int * action; scalar_t__ type; int * directive; } ;


 struct figpar_config VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

struct figpar_config *
FUNC_1(struct figpar_config VAR_1[], const char *VAR_2)
{
 uint32_t VAR_3;


 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (&VAR_0);


 for (VAR_3 = 0; VAR_1[VAR_3].directive != ((void*)0); VAR_3++)
  if (FUNC_0(VAR_1[VAR_3].directive, VAR_2) == 0)
   return (&(VAR_1[VAR_3]));


 VAR_0.directive = ((void*)0);
 VAR_0.type = 0;
 VAR_0.action = ((void*)0);
 VAR_0.value.u_num = 0;

 return (&VAR_0);
}
