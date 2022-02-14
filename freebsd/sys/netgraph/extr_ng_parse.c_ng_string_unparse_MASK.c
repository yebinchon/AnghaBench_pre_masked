
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char* const,int ) ;
 char* FUNC_1 (char const* const,scalar_t__) ;
 int FUNC_2 (char**,int*,char*,char* const) ;
 scalar_t__ FUNC_3 (char const* const) ;

__attribute__((used)) static int
FUNC_4(const struct ng_parse_type *VAR_2,
 const u_char *VAR_3, int *VAR_4, char *VAR_5, int VAR_6)
{
 const char *const VAR_7 = (const char *)VAR_3 + *VAR_4;
 char *const VAR_8 = FUNC_1(VAR_7, FUNC_3(VAR_7));
 int VAR_9;

 if (VAR_8 == ((void*)0))
  return (VAR_0);
 if ((VAR_9 = FUNC_2(&VAR_5, &VAR_6, "%s", VAR_8)) != 0) {
  FUNC_0(VAR_8, VAR_1);
  return (VAR_9);
 }
 *VAR_4 += FUNC_3(VAR_7) + 1;
 FUNC_0(VAR_8, VAR_1);
 return (0);
}
