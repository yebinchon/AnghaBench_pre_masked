
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ SmiNode ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(SmiNode *VAR_0)
{
 char *VAR_1;

 for (VAR_1 = VAR_0->name; *VAR_1 != '\0'; VAR_1++) {
  if (*VAR_1 == '-')
   FUNC_0("_");
  else
   FUNC_0("%c", *VAR_1);
 }
}
