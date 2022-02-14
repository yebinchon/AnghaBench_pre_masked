
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0(
 register unsigned char *VAR_1,
 register int VAR_2
 )
{
 register int VAR_3,VAR_4;
 register unsigned VAR_5 = 1;

 VAR_4 = VAR_0[VAR_2+1].offset;

 for (VAR_3 = VAR_0[VAR_2].offset; VAR_3 < VAR_4; VAR_3++)
     VAR_5 ^= (VAR_1[VAR_3] != '-');

 return VAR_5;
}
