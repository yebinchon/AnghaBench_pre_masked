
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int offset; scalar_t__ size; } ;


 int VAR_0 ;
 struct reg* VAR_1 ;
 int VAR_2 ;

void
FUNC_0 (struct reg *VAR_3, int VAR_4)
{
  int VAR_5, VAR_6;

  VAR_1 = VAR_3;
  VAR_0 = VAR_4;

  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
      VAR_3[VAR_6].offset = VAR_5;
      VAR_5 += VAR_3[VAR_6].size;
    }

  VAR_2 = VAR_5 / 8;
}
