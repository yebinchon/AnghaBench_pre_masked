
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char ta_fgcolor; unsigned char ta_bgcolor; scalar_t__ ta_format; } ;
typedef TYPE_1__ teken_attr_t ;


 unsigned char* VAR_0 ;

__attribute__((used)) static void
FUNC_0(unsigned char VAR_1, teken_attr_t *VAR_2)
{
 VAR_2->ta_format = 0;
 VAR_2->ta_fgcolor = VAR_0[VAR_1 & 7] | (VAR_1 & 8);
 VAR_2->ta_bgcolor = VAR_0[(VAR_1 >> 4) & 7] | ((VAR_1 >> 4) & 8);
}
