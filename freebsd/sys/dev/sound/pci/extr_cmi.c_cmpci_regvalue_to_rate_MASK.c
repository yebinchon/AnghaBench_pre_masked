
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int
FUNC_2(u_int32_t VAR_1)
{
 int VAR_2;

 VAR_2 = ((VAR_1 << 1) | (VAR_1 >> 2)) & 0x07;
 FUNC_0(FUNC_1("cmpci_regvalue_to_rate: %d -> %d\n", VAR_1, VAR_2));
 return VAR_0[VAR_2];
}
