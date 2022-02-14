
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  if (VAR_1[VAR_3] != (VAR_0[VAR_3] & VAR_2[VAR_3])) {
   VAR_4 = 1;
   break;
  }

 return !VAR_4;
}
