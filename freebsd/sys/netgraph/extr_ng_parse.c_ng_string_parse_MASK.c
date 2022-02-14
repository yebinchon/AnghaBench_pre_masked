
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int * const,int) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char const*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_3(const struct ng_parse_type *VAR_2,
 const char *VAR_3, int *VAR_4, const u_char *const VAR_5,
 u_char *const VAR_6, int *VAR_7)
{
 char *VAR_8;
 int VAR_9;
 int VAR_10;

 if ((VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_9, &VAR_10)) == ((void*)0))
  return (VAR_0);
 *VAR_4 += VAR_9;
 FUNC_0(VAR_8, VAR_6, VAR_10 + 1);
 FUNC_1(VAR_8, VAR_1);
 *VAR_7 = VAR_10 + 1;
 return (0);
}
