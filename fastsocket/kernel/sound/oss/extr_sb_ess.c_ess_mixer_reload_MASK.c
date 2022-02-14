
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* levels; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;

void FUNC_1 (sb_devc *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = VAR_0->levels[VAR_1];
 VAR_2 = VAR_4 & 0x000000ff;
 VAR_3 = (VAR_4 & 0x0000ff00) >> 8;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
