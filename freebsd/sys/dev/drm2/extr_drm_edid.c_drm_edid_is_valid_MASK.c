
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int extensions; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

bool FUNC_1(struct edid *VAR_1)
{
 int VAR_2;
 u8 *VAR_3 = (u8 *)VAR_1;

 if (!VAR_1)
  return 0;

 for (VAR_2 = 0; VAR_2 <= VAR_1->extensions; VAR_2++)
  if (!FUNC_0(VAR_3 + VAR_2 * VAR_0, VAR_2, 1))
   return 0;

 return 1;
}
