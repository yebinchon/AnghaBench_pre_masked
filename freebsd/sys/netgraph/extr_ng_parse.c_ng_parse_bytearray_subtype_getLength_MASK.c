
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int (* private ) (struct ng_parse_type const*,int const*,int const*) ;} ;
typedef int (* ng_parse_array_getLength_t ) (struct ng_parse_type const*,int const*,int const*) ;


 int FUNC_0 (struct ng_parse_type const*,int const*,int const*) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_0,
 const u_char *VAR_1, const u_char *VAR_2)
{
 ng_parse_array_getLength_t *const VAR_3 = VAR_0->private;

 return (*VAR_3)(VAR_0, VAR_1, VAR_2);
}
