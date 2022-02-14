
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmi_system_id {TYPE_1__* matches; } ;
struct TYPE_5__ {scalar_t__ field; char* prefix; } ;
struct TYPE_4__ {scalar_t__ slot; int substr; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, struct dmi_system_id *VAR_2,
   char *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_2(VAR_3, "dmi*");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   if (VAR_2->matches[VAR_5].slot &&
       VAR_2->matches[VAR_5].slot == VAR_0[VAR_4].field) {
    FUNC_2(VAR_3 + FUNC_4(VAR_3), ":%s*",
     VAR_0[VAR_4].prefix);
    FUNC_1(VAR_3 + FUNC_4(VAR_3),
       VAR_2->matches[VAR_5].substr);
    FUNC_3(VAR_3, "*");
   }
  }
 }

 FUNC_3(VAR_3, ":");
 return 1;
}
