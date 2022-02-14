
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int reg ;
typedef int phandle_t ;
typedef int cell_t ;


 int FUNC_0 (int ,char*,int**,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint64_t
FUNC_2(void)
{
 phandle_t VAR_3;
 cell_t VAR_4[24];
 int VAR_5, VAR_6;
 uint64_t VAR_7;

 VAR_7 = 0;
 VAR_3 = FUNC_1(VAR_1);

 VAR_6 = FUNC_0(VAR_3, "reg", &VAR_4, sizeof(VAR_4));
 VAR_6 /= sizeof(VAR_4[0]);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 += (VAR_0 + VAR_2)) {
  if (VAR_2 > 1)
   VAR_7 += (uint64_t)VAR_4[VAR_5 + VAR_0] << 32;
  VAR_7 += VAR_4[VAR_5 + VAR_0 + VAR_2 - 1];
 }

 return (VAR_7);
}
