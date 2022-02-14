
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {char* name; size_t basetype; } ;
typedef TYPE_1__ SmiType ;
typedef int SmiNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char** VAR_3 ;
 char** VAR_4 ;

__attribute__((used)) static void
FUNC_5(SmiNode *VAR_5)
{
 SmiType *VAR_6;
 u_int VAR_7;

 VAR_6 = FUNC_3(VAR_5);
 FUNC_0(VAR_6 != ((void*)0));

 if (VAR_6->name != ((void*)0)) {
  for (VAR_7 = 0; VAR_3[VAR_7] != ((void*)0); VAR_7 += 2)
   if (FUNC_4(VAR_3[VAR_7], VAR_6->name) == 0) {
    FUNC_2("%s", VAR_3[VAR_7 + 1]);
    return;
   }
 }
 FUNC_2("%s", VAR_4[VAR_6->basetype]);

 if (VAR_6->basetype == VAR_1 ||
     VAR_6->basetype == VAR_0)
  FUNC_1(VAR_6);

 else if (VAR_6->basetype == VAR_2 &&
     VAR_6->name != ((void*)0))
  FUNC_2(" | %s", VAR_6->name);
}
