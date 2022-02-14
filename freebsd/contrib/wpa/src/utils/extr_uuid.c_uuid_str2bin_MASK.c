
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (char const*,int *,int) ;

int FUNC_1(const char *VAR_0, u8 *VAR_1)
{
 const char *VAR_2;
 u8 *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;

 if (FUNC_0(VAR_2, VAR_3, 4))
  return -1;
 VAR_2 += 8;
 VAR_3 += 4;

 if (*VAR_2++ != '-' || FUNC_0(VAR_2, VAR_3, 2))
  return -1;
 VAR_2 += 4;
 VAR_3 += 2;

 if (*VAR_2++ != '-' || FUNC_0(VAR_2, VAR_3, 2))
  return -1;
 VAR_2 += 4;
 VAR_3 += 2;

 if (*VAR_2++ != '-' || FUNC_0(VAR_2, VAR_3, 2))
  return -1;
 VAR_2 += 4;
 VAR_3 += 2;

 if (*VAR_2++ != '-' || FUNC_0(VAR_2, VAR_3, 6))
  return -1;

 return 0;
}
