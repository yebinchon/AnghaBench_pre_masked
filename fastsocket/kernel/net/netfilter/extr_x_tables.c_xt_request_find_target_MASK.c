
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xt_target {int dummy; } ;


 scalar_t__ FUNC_0 (struct xt_target*) ;
 struct xt_target* FUNC_1 (int ,char*,int ,char const*) ;
 int FUNC_2 (size_t,char const*,size_t) ;
 int * VAR_0 ;

struct xt_target *FUNC_3(u8 VAR_1, const char *VAR_2, u8 VAR_3)
{
 struct xt_target *VAR_4;

 VAR_4 = FUNC_1(FUNC_2(VAR_1, VAR_2, VAR_3),
      "%st_%s", VAR_0[VAR_1], VAR_2);
 if (FUNC_0(VAR_4) || !VAR_4)
  return ((void*)0);
 return VAR_4;
}
