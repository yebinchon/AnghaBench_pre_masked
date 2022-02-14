
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__*** iomap; } ;
typedef TYPE_2__ sb_devc ;
struct TYPE_4__ {int nbits; int bitoffs; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(sb_devc * VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 unsigned char VAR_6;
 int VAR_7;

 VAR_6 = (1 << (*VAR_1->iomap)[VAR_3][VAR_4].nbits) - 1;
 VAR_5 = (int) ((VAR_5 * VAR_6) + 50) / 100;

 VAR_7 = (*VAR_1->iomap)[VAR_3][VAR_4].bitoffs - (*VAR_1->iomap)[VAR_3][VAR_0].nbits + 1;

 *VAR_2 &= ~(VAR_6 << VAR_7);
 *VAR_2 |= (VAR_5 & VAR_6) << VAR_7;
}
