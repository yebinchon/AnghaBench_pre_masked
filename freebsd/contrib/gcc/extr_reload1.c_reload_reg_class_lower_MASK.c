
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int optional; int nregs; scalar_t__ class; } ;


 int* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_0 (const void *VAR_2, const void *VAR_3)
{
  int VAR_4 = *(const short *) VAR_2, VAR_5 = *(const short *) VAR_3;
  int VAR_6;


  VAR_6 = VAR_1[VAR_4].optional - VAR_1[VAR_5].optional;
  if (VAR_6 != 0)
    return VAR_6;


  VAR_6 = ((VAR_0[(int) VAR_1[VAR_5].class] == 1)
       - (VAR_0[(int) VAR_1[VAR_4].class] == 1));
  if (VAR_6 != 0)
    return VAR_6;


  VAR_6 = VAR_1[VAR_5].nregs - VAR_1[VAR_4].nregs;
  if (VAR_6 != 0)
    return VAR_6;


  VAR_6 = (int) VAR_1[VAR_4].class - (int) VAR_1[VAR_5].class;
  if (VAR_6 != 0)
    return VAR_6;



  return VAR_4 - VAR_5;
}
