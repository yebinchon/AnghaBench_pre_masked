
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;


 int* FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;

__attribute__((used)) static bool FUNC_2(const struct nlattr *VAR_0)
{
 const u8 *VAR_1;
 int VAR_2;

 if (!VAR_0)
  return 1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_1(VAR_0);

 while (VAR_2) {
  u8 VAR_3;

  if (VAR_2 < 2)
   return 0;
  VAR_2 -= 2;

  VAR_3 = VAR_1[1];
  if (VAR_3 > VAR_2)
   return 0;

  VAR_2 -= VAR_3;
  VAR_1 += 2 + VAR_3;
 }

 return 1;
}
