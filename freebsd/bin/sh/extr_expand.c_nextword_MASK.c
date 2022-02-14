
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct worddest {scalar_t__ state; TYPE_1__* list; } ;
struct TYPE_3__ {int count; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (char*) ;
 char* FUNC_5 () ;

__attribute__((used)) static char *
FUNC_6(char VAR_4, int VAR_5, char *VAR_6, struct worddest *VAR_7)
{
 int VAR_8;

 VAR_8 = VAR_4 == '\t' || VAR_4 == '\n' || VAR_4 == ' ';
 if (VAR_6 != FUNC_5() || (VAR_8 ? VAR_7->state == VAR_2 :
     VAR_7->state != VAR_3) || VAR_4 == '\0') {
  FUNC_1('\0', VAR_6);
  if (VAR_5 & VAR_0)
   FUNC_3(FUNC_4(VAR_6), VAR_7->list);
  else
   FUNC_2(VAR_7->list, FUNC_4(VAR_6));
  VAR_7->state = VAR_8 ? VAR_3 : VAR_1;
 } else if (!VAR_8 && VAR_7->state == VAR_3)
  VAR_7->state = VAR_1;

 FUNC_2(VAR_7->list, ((void*)0));
 VAR_7->list->count--;
 FUNC_0(VAR_6);
 return VAR_6;
}
