
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct ng_parse_type *VAR_1,
 const u_char *const VAR_2, u_char *VAR_3, int *VAR_4)
{

 if (*VAR_4 < 1)
  return (VAR_0);
 VAR_3[0] = (u_char)'\0';
 *VAR_4 = 1;
 return (0);
}
