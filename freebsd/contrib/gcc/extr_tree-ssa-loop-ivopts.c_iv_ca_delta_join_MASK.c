
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_ca_delta {struct iv_ca_delta* next_change; } ;



__attribute__((used)) static struct iv_ca_delta *
FUNC_0 (struct iv_ca_delta *VAR_0, struct iv_ca_delta *VAR_1)
{
  struct iv_ca_delta *VAR_2;

  if (!VAR_1)
    return VAR_0;

  if (!VAR_0)
    return VAR_1;

  for (VAR_2 = VAR_0; VAR_2->next_change; VAR_2 = VAR_2->next_change)
    continue;
  VAR_2->next_change = VAR_1;

  return VAR_0;
}
