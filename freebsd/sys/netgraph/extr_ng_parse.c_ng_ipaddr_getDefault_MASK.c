
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int dummy; } ;
struct in_addr {int member_0; } ;
typedef int ip ;


 int VAR_0 ;
 int FUNC_0 (struct in_addr*,int *,int) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_1,
 const u_char *const VAR_2, u_char *VAR_3, int *VAR_4)
{
 struct in_addr VAR_5 = { 0 };

 if (*VAR_4 < sizeof(VAR_5))
  return (VAR_0);
 FUNC_0(&VAR_5, VAR_3, sizeof(VAR_5));
 *VAR_4 = sizeof(VAR_5);
 return (0);
}
