
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_field {struct format_field* name; struct format_field* type; struct format_field* next; } ;


 int FUNC_0 (struct format_field*) ;

__attribute__((used)) static void FUNC_1(struct format_field *VAR_0)
{
 struct format_field *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->type);
  FUNC_0(VAR_0->name);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
