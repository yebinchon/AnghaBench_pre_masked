
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_int16_t ;
typedef int u_char ;
struct ng_parse_type {int dummy; } ;
typedef long int16_t ;


 int VAR_0 ;
 int FUNC_0 (long*,int * const,int) ;
 long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const struct ng_parse_type *VAR_1,
 const char *VAR_2, int *VAR_3, const u_char *const VAR_4,
 u_char *const VAR_5, int *VAR_6)
{
 long VAR_7;
 int16_t VAR_8;
 char *VAR_9;

 VAR_7 = FUNC_1(VAR_2 + *VAR_3, &VAR_9, 0);
 if (VAR_7 < (int16_t)0x8000
     || VAR_7 > (u_int16_t)0xffff || VAR_9 == VAR_2 + *VAR_3)
  return (VAR_0);
 *VAR_3 = VAR_9 - VAR_2;
 VAR_8 = (int16_t)VAR_7;
 FUNC_0(&VAR_8, VAR_5, sizeof(int16_t));
 *VAR_6 = sizeof(int16_t);
 return (0);
}
