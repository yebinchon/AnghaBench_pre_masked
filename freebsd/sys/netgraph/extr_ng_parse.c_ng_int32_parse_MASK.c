
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_int32_t ;
typedef int u_char ;
struct ng_parse_type {scalar_t__ info; } ;
typedef long int32_t ;


 int VAR_0 ;
 intptr_t VAR_1 ;
 int FUNC_0 (long*,int * const,int) ;
 long FUNC_1 (char const*,char**,int ) ;
 long FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(const struct ng_parse_type *VAR_2,
 const char *VAR_3, int *VAR_4, const u_char *const VAR_5,
 u_char *const VAR_6, int *VAR_7)
{
 long VAR_8;
 int32_t VAR_9;
 char *VAR_10;

 if ((intptr_t)VAR_2->info == VAR_1)
  VAR_8 = FUNC_1(VAR_3 + *VAR_4, &VAR_10, 0);
 else
  VAR_8 = FUNC_2(VAR_3 + *VAR_4, &VAR_10, 0);
 if (VAR_8 < (int32_t)0x80000000
     || VAR_8 > (u_int32_t)0xffffffff || VAR_10 == VAR_3 + *VAR_4)
  return (VAR_0);
 *VAR_4 = VAR_10 - VAR_3;
 VAR_9 = (int32_t)VAR_8;
 FUNC_0(&VAR_9, VAR_6, sizeof(int32_t));
 *VAR_7 = sizeof(int32_t);
 return (0);
}
