
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int*) ;

u32 FUNC_2(const char *VAR_2, int *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (FUNC_0(VAR_4, VAR_5)) {
  *VAR_3 = VAR_4;
  return VAR_5;
 }
 *VAR_3 = VAR_1;
 return VAR_0;
}
