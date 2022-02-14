
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_parse_type {struct ng_parse_fixedarray_info* info; } ;
struct ng_parse_fixedarray_info {int elementType; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_0)
{
 const struct ng_parse_fixedarray_info *VAR_1 = VAR_0->info;

 return FUNC_0(VAR_1->elementType);
}
