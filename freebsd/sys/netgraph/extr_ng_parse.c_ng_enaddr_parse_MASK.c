
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const struct ng_parse_type *VAR_3,
 const char *VAR_4, int *const VAR_5, const u_char *const VAR_6,
 u_char *const VAR_7, int *const VAR_8)
{
 char *VAR_9;
 u_long VAR_10;
 int VAR_11;

 if (*VAR_8 < VAR_2)
  return (VAR_1);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_10 = FUNC_0(VAR_4 + *VAR_5, &VAR_9, 16);
  if (VAR_10 > 0xff || VAR_9 == VAR_4 + *VAR_5)
   return (VAR_0);
  VAR_7[VAR_11] = (u_char)VAR_10;
  *VAR_5 = (VAR_9 - VAR_4);
  if (VAR_11 < VAR_2 - 1) {
   if (*VAR_9 != ':')
    return (VAR_0);
   (*VAR_5)++;
  }
 }
 *VAR_8 = VAR_2;
 return (0);
}
