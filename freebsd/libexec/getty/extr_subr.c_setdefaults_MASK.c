
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gettystrs {scalar_t__ defalt; scalar_t__ value; scalar_t__ field; } ;
struct gettynums {int defalt; int value; int set; scalar_t__ field; } ;
struct gettyflags {int defalt; int value; int set; scalar_t__ field; } ;


 struct gettyflags* VAR_0 ;
 struct gettynums* VAR_1 ;
 struct gettystrs* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

void
FUNC_1(void)
{
 struct gettystrs *VAR_3;
 struct gettynums *VAR_4;
 struct gettyflags *VAR_5;

 for (VAR_3 = VAR_2; VAR_3->field; VAR_3++)
  if (!VAR_3->value)
   VAR_3->value = !VAR_3->defalt ? VAR_3->defalt
      : FUNC_0(VAR_3->defalt);
 for (VAR_4 = VAR_1; VAR_4->field; VAR_4++)
  if (!VAR_4->set)
   VAR_4->value = VAR_4->defalt;
 for (VAR_5 = VAR_0; VAR_5->field; VAR_5++)
  if (!VAR_5->set)
   VAR_5->value = VAR_5->defalt;
}
