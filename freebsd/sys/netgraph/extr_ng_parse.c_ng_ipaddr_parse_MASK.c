
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int*,int const* const,int * const,int*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_2,
 const char *VAR_3, int *VAR_4, const u_char *const VAR_5,
 u_char *const VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  if ((VAR_9 = FUNC_0(&VAR_1,
      VAR_3, VAR_4, VAR_5, VAR_6 + VAR_8, VAR_7)) != 0)
   return (VAR_9);
  if (VAR_8 < 3 && VAR_3[*VAR_4] != '.')
   return (VAR_0);
  (*VAR_4)++;
 }
 *VAR_7 = 4;
 return (0);
}
