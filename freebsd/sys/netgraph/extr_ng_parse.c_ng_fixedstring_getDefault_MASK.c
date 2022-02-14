
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {struct ng_parse_fixedstring_info* info; } ;
struct ng_parse_fixedstring_info {int bufSize; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_1,
 const u_char *const VAR_2, u_char *VAR_3, int *VAR_4)
{
 const struct ng_parse_fixedstring_info *const VAR_5 = VAR_1->info;

 if (*VAR_4 < VAR_5->bufSize)
  return (VAR_0);
 FUNC_0(VAR_3, VAR_5->bufSize);
 *VAR_4 = VAR_5->bufSize;
 return (0);
}
