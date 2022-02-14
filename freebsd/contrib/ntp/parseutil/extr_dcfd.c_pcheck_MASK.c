
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

__attribute__((used)) static unsigned
FUNC_0(
 register unsigned char *VAR_2,
 register int VAR_3
 )
{
 register int VAR_4,VAR_5;
 register unsigned VAR_6 = 1;

 VAR_5 = VAR_1[VAR_3+1].offset;

 for (VAR_4 = VAR_1[VAR_3].offset; VAR_4 < VAR_5; VAR_4++)
     VAR_6 ^= (VAR_2[VAR_4] != VAR_0.zerobits[VAR_4]);

 return VAR_6;
}
