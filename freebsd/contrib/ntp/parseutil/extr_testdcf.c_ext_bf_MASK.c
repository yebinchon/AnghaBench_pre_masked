
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_0(
 register unsigned char *VAR_1,
 register int VAR_2
 )
{
 register unsigned long VAR_3 = 0;
 register int VAR_4, VAR_5;

 VAR_5 = VAR_0[VAR_2].offset;

 for (VAR_4 = VAR_0[VAR_2+1].offset - 1; VAR_4 >= VAR_5; VAR_4--)
 {
  VAR_3 <<= 1;
  VAR_3 |= (VAR_1[VAR_4] != '-');
 }
 return VAR_3;
}
