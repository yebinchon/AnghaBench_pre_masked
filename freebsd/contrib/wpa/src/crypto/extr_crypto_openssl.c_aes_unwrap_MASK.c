
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int actx ;
typedef int AES_KEY ;


 scalar_t__ FUNC_0 (int const*,size_t,int *) ;
 int FUNC_1 (int *,int *,int *,int const*,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(const u8 *VAR_0, size_t VAR_1, int VAR_2, const u8 *VAR_3,
        u8 *VAR_4)
{
 AES_KEY VAR_5;
 int VAR_6;

 if (FUNC_3())
  return -1;
 if (FUNC_0(VAR_0, VAR_1 << 3, &VAR_5))
  return -1;
 VAR_6 = FUNC_1(&VAR_5, ((void*)0), VAR_4, VAR_3, (VAR_2 + 1) * 8);
 FUNC_2(&VAR_5, sizeof(VAR_5));
 return VAR_6 <= 0 ? -1 : 0;
}
