
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
typedef int u_char ;
struct ng_parse_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int * const,int) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char const*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_3(const struct ng_parse_type *VAR_3,
 const char *VAR_4, int *VAR_5, const u_char *const VAR_6,
 u_char *const VAR_7, int *VAR_8)
{
 char *VAR_9;
 int VAR_10;
 int VAR_11;

 if ((VAR_9 = FUNC_2(VAR_4, VAR_5, &VAR_10, &VAR_11)) == ((void*)0))
  return (VAR_0);
 if (VAR_11 > VAR_2) {
  FUNC_1(VAR_9, VAR_1);
  return (VAR_0);
 }
 *VAR_5 += VAR_10;
 *((u_int16_t *)VAR_7) = (u_int16_t)VAR_11;
 FUNC_0(VAR_9, VAR_7 + 2, VAR_11);
 FUNC_1(VAR_9, VAR_1);
 *VAR_8 = 2 + VAR_11;
 return (0);
}
