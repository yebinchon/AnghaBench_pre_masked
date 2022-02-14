
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_action {int flags; } ;
struct TYPE_2__ {int value; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct sec_action *VAR_2, char *VAR_3)
{
 const char *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_4 = FUNC_2(VAR_3, ","); VAR_4; VAR_4 = FUNC_2(((void*)0), ",")) {
  VAR_5 = 0;
  for (VAR_6 = 0; VAR_1[VAR_6].name != ((void*)0); VAR_6++)
   if (FUNC_1(VAR_1[VAR_6].name, VAR_4) == 0) {
    VAR_2->flags |= VAR_1[VAR_6].value;
    VAR_5 = 1;
    break;
   }
  if (!VAR_5)
   FUNC_0(VAR_0, "unrecognized section flag %s",
       VAR_4);
 }
}
