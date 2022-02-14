
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_parse_type {struct ng_parse_struct_field* info; } ;
struct ng_parse_struct_field {int type; int * name; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_0)
{
 const struct ng_parse_struct_field *VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = VAR_0->info; VAR_1->name != ((void*)0); VAR_1++) {
  int VAR_3 = FUNC_0(VAR_1->type);

  if (VAR_3 > VAR_2)
   VAR_2 = VAR_3;
 }
 return VAR_2;
}
