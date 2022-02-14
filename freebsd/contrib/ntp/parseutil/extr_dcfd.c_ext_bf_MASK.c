
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* zerobits; } ;
struct TYPE_3__ {int offset; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned long
FUNC_0(
 register unsigned char *VAR_2,
 register int VAR_3
 )
{
 register unsigned long VAR_4 = 0;
 register int VAR_5, VAR_6;

 VAR_6 = VAR_1[VAR_3].offset;

 for (VAR_5 = VAR_1[VAR_3+1].offset - 1; VAR_5 >= VAR_6; VAR_5--)
 {
  VAR_4 <<= 1;
  VAR_4 |= (VAR_2[VAR_5] != VAR_0.zerobits[VAR_5]);
 }
 return VAR_4;
}
