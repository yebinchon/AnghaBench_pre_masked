
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __u32 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, __u32 VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 int VAR_4 = 0;
 const int VAR_5 = 16;

 FUNC_0("\nOffset\t\tValues\n");
 FUNC_0("------\t\t------\n");
 while(VAR_4 < VAR_1){
  FUNC_0("0x%04x\t\t",VAR_4);
  for(VAR_2=0; VAR_2 < VAR_5; VAR_2++){
   FUNC_0("%02x ", VAR_0[VAR_3]);
   VAR_4++;
   VAR_3++;
  }
  FUNC_0("\n");
 }
}
