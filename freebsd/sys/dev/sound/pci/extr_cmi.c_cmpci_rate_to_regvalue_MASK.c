
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(int VAR_2)
{
 int VAR_3, VAR_4;

 for(VAR_3 = 0; VAR_3 < VAR_0 - 1; VAR_3++) {
  if (VAR_2 < ((VAR_1[VAR_3] + VAR_1[VAR_3 + 1]) / 2)) {
   break;
  }
 }

 FUNC_0(FUNC_1("cmpci_rate_to_regvalue: %d -> %d\n", VAR_2, VAR_1[VAR_3]));

 VAR_4 = ((VAR_3 >> 1) | (VAR_3 << 2)) & 0x07;
 return VAR_4;
}
