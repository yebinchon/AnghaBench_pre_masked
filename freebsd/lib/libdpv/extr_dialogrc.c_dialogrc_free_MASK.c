
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {char* str; } ;
struct TYPE_4__ {TYPE_1__ value; int * action; int * directive; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 int VAR_2 ;

void
FUNC_1(void)
{
 char *VAR_3;
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_0[VAR_4].directive != ((void*)0); VAR_4++) {
  if (VAR_0[VAR_4].action != &VAR_2)
   continue;
  VAR_3 = VAR_0[VAR_4].value.str;
  if (VAR_3 != ((void*)0) && VAR_3 != VAR_1) {
   FUNC_0(VAR_0[VAR_4].value.str);
   VAR_0[VAR_4].value.str = ((void*)0);
  }
 }
}
