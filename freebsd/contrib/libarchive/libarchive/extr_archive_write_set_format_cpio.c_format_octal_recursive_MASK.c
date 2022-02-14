
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



__attribute__((used)) static int64_t
FUNC_0(int64_t VAR_0, char *VAR_1, int VAR_2)
{
 if (VAR_2 == 0)
  return (VAR_0);
 VAR_0 = FUNC_0(VAR_0, VAR_1+1, VAR_2-1);
 *VAR_1 = '0' + ((char)VAR_0 & 7);
 return (VAR_0 >> 3);
}
