
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*,size_t,int *,int const*,int ,int *,size_t) ;
 int FUNC_1 (int const*,size_t,int *,int const*,int ,int *,size_t) ;
 int FUNC_2 (int const*,size_t,int *,int const*,int ,int *,size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(size_t VAR_0, const u8 *VAR_1, size_t VAR_2,
      const char *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 if (VAR_0 == 32)
  return FUNC_0(VAR_1, VAR_2, ((void*)0),
           (const u8 *) VAR_3, FUNC_3(VAR_3),
           VAR_4, VAR_5);
 if (VAR_0 == 48)
  return FUNC_1(VAR_1, VAR_2, ((void*)0),
           (const u8 *) VAR_3, FUNC_3(VAR_3),
           VAR_4, VAR_5);
 if (VAR_0 == 64)
  return FUNC_2(VAR_1, VAR_2, ((void*)0),
           (const u8 *) VAR_3, FUNC_3(VAR_3),
           VAR_4, VAR_5);
 return -1;
}
