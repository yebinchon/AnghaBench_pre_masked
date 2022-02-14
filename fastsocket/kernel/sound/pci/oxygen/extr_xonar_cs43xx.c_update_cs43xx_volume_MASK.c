
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int* dac_volume; } ;


 int FUNC_0 (struct oxygen*,int,int) ;
 int FUNC_1 (struct oxygen*) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_0)
{
 FUNC_0(VAR_0, 5, (127 - VAR_0->dac_volume[0]) * 2);
 FUNC_0(VAR_0, 6, (127 - VAR_0->dac_volume[1]) * 2);
 FUNC_1(VAR_0);
}
