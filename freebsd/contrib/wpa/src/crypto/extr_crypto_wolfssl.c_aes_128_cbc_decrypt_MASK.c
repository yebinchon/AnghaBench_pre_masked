
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int Aes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int *,int *,size_t) ;
 int FUNC_2 (int *,int const*,int,int const*,int ) ;

int FUNC_3(const u8 *VAR_1, const u8 *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 Aes VAR_5;
 int VAR_6;

 if (FUNC_0())
  return -1;

 VAR_6 = FUNC_2(&VAR_5, VAR_1, 16, VAR_2, VAR_0);
 if (VAR_6 != 0)
  return -1;

 VAR_6 = FUNC_1(&VAR_5, VAR_3, VAR_3, VAR_4);
 if (VAR_6 != 0)
  return -1;
 return 0;
}
