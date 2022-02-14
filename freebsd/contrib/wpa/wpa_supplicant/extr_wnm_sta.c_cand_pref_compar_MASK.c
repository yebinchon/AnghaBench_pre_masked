
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbor_report {scalar_t__ preference; int preference_present; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct neighbor_report *VAR_2 = VAR_0;
 const struct neighbor_report *VAR_3 = VAR_1;

 if (!VAR_2->preference_present && !VAR_3->preference_present)
  return 0;
 if (!VAR_2->preference_present)
  return 1;
 if (!VAR_3->preference_present)
  return -1;
 if (VAR_3->preference > VAR_2->preference)
  return 1;
 if (VAR_3->preference < VAR_2->preference)
  return -1;
 return 0;
}
