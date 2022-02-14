
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_2,
 const u_char *VAR_3, int *VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6, "%02x:%02x:%02x:%02x:%02x:%02x",
     VAR_3[*VAR_4], VAR_3[*VAR_4 + 1], VAR_3[*VAR_4 + 2],
     VAR_3[*VAR_4 + 3], VAR_3[*VAR_4 + 4], VAR_3[*VAR_4 + 5]);
 if (VAR_7 >= VAR_6)
  return (VAR_0);
 *VAR_4 += VAR_1;
 return (0);
}
