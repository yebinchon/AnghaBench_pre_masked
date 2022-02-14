
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_1,
 const u_char *const VAR_2, u_char *VAR_3, int *VAR_4)
{
 int64_t VAR_5;

 if (*VAR_4 < sizeof(int64_t))
  return (VAR_0);
 VAR_5 = 0;
 FUNC_0(&VAR_5, VAR_3, sizeof(int64_t));
 *VAR_4 = sizeof(int64_t);
 return (0);
}
