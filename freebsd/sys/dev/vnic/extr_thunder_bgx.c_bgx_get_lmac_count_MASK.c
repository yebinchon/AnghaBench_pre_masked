
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgx {int lmac_count; } ;


 int VAR_0 ;
 struct bgx** VAR_1 ;

int
FUNC_0(int VAR_2, int VAR_3)
{
 struct bgx *VAR_4;

 VAR_4 = VAR_1[(VAR_2 * VAR_0) + VAR_3];
 if (VAR_4 != ((void*)0))
  return (VAR_4->lmac_count);

 return (0);
}
