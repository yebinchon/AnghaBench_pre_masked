
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char* const,int ) ;
 char* FUNC_1 (char const* const,int const) ;
 int FUNC_2 (char**,int*,char*,char* const) ;

__attribute__((used)) static int
FUNC_3(const struct ng_parse_type *VAR_2,
 const u_char *VAR_3, int *VAR_4, char *VAR_5, int VAR_6)
{
 const char *const VAR_7 = (const char *)VAR_3 + *VAR_4 + 2;
 const int VAR_8 = *((const u_int16_t *)(VAR_3 + *VAR_4));
 char *const VAR_9 = FUNC_1(VAR_7, VAR_8);
 int VAR_10;

 if (VAR_9 == ((void*)0))
  return (VAR_0);
 if ((VAR_10 = FUNC_2(&VAR_5, &VAR_6, "%s", VAR_9)) != 0) {
  FUNC_0(VAR_9, VAR_1);
  return (VAR_10);
 }
 FUNC_0(VAR_9, VAR_1);
 *VAR_4 += VAR_8 + 2;
 return (0);
}
