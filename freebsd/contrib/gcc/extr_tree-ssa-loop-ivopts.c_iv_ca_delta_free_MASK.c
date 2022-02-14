
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_ca_delta {struct iv_ca_delta* next_change; } ;


 int FUNC_0 (struct iv_ca_delta*) ;

__attribute__((used)) static void
FUNC_1 (struct iv_ca_delta **VAR_0)
{
  struct iv_ca_delta *VAR_1, *VAR_2;

  for (VAR_1 = *VAR_0; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next_change;
      FUNC_0 (VAR_1);
    }

  *VAR_0 = ((void*)0);
}
