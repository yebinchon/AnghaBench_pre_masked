
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int const*,size_t,int const*,int,int *,int,int *) ;

int FUNC_2(const u8 *VAR_0, size_t VAR_1, int VAR_2, const u8 *VAR_3, u8 *VAR_4)
{
 int VAR_5;

 if (FUNC_0())
  return -1;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2 * 8, VAR_4, (VAR_2 + 1) * 8,
       ((void*)0));
 return VAR_5 != (VAR_2 + 1) * 8 ? -1 : 0;
}
