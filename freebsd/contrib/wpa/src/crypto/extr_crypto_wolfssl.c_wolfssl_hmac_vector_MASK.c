
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word32 ;
typedef int u8 ;
typedef int Hmac ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int,int const*,int ) ;
 scalar_t__ FUNC_3 (int *,int const*,size_t const) ;

__attribute__((used)) static int FUNC_4(int VAR_0, const u8 *VAR_1,
          size_t VAR_2, size_t VAR_3,
          const u8 *VAR_4[], const size_t *VAR_5, u8 *VAR_6,
          unsigned int VAR_7)
{
 Hmac VAR_8;
 size_t VAR_9;

 (void) VAR_7;

 if (FUNC_0())
  return -1;

 if (FUNC_2(&VAR_8, VAR_0, VAR_1, (word32) VAR_2) != 0)
  return -1;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  if (FUNC_3(&VAR_8, VAR_4[VAR_9], VAR_5[VAR_9]) != 0)
   return -1;
 if (FUNC_1(&VAR_8, VAR_6) != 0)
  return -1;
 return 0;
}
