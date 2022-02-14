
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmi_system_id {scalar_t__ (* callback ) (struct dmi_system_id const*) ;TYPE_1__* matches; } ;
struct TYPE_2__ {scalar_t__ slot; } ;


 scalar_t__ FUNC_0 (struct dmi_system_id const*) ;
 scalar_t__ FUNC_1 (struct dmi_system_id const*) ;

bool
FUNC_2(const struct dmi_system_id *VAR_0)
{
 const struct dmi_system_id *VAR_1;
 bool VAR_2;

 for (VAR_2 = 0, VAR_1 = VAR_0; VAR_1->matches[0].slot != 0 ; VAR_1++) {
  if (FUNC_0(VAR_1)) {
   VAR_2 = 1;
   if (VAR_1->callback != ((void*)0) && VAR_1->callback(VAR_1))
    break;
  }
 }
 return (VAR_2);
}
