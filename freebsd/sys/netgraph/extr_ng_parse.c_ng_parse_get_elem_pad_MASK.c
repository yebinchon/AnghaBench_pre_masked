
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_parse_type {struct ng_parse_struct_field* info; } ;
struct ng_parse_struct_field {int alignment; } ;
typedef enum comptype { ____Placeholder_comptype } comptype ;


 int FUNC_0 (struct ng_parse_type const* const) ;
 int VAR_0 ;
 struct ng_parse_type* FUNC_1 (struct ng_parse_type const*,int,int) ;

__attribute__((used)) static int
FUNC_2(const struct ng_parse_type *VAR_1,
 int VAR_2, enum comptype VAR_3, int VAR_4)
{
 const struct ng_parse_type *const
     VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 int VAR_6;


 VAR_6 = FUNC_0(VAR_5);
 if (VAR_3 == VAR_0) {
  const struct ng_parse_struct_field *const VAR_7 = VAR_1->info;

  if (VAR_7[VAR_2].alignment != 0)
   VAR_6 = VAR_7[VAR_2].alignment;
 }


 return (VAR_6 ? (VAR_6 - (VAR_4 % VAR_6)) % VAR_6 : 0);
}
