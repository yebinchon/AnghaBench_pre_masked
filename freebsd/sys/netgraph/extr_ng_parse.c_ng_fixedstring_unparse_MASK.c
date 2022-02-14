
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {struct ng_parse_fixedstring_info* info; } ;
struct ng_parse_fixedstring_info {scalar_t__ bufSize; } ;


 int FUNC_0 (struct ng_parse_type const*,int const*,int*,char*,int) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_0,
 const u_char *VAR_1, int *VAR_2, char *VAR_3, int VAR_4)
{
 const struct ng_parse_fixedstring_info *const VAR_5 = VAR_0->info;
 int VAR_6, VAR_7 = *VAR_2;

 if ((VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_7, VAR_3, VAR_4)) != 0)
  return (VAR_6);
 *VAR_2 += VAR_5->bufSize;
 return (0);
}
