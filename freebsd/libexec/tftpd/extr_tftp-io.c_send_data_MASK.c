
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int u_short ;
struct tftphdr {int th_data; void* th_block; void* th_opcode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,scalar_t__,char*,int) ;
 int FUNC_4 (int ,char*,scalar_t__,int) ;

int
FUNC_5(int VAR_5, uint16_t VAR_6, char *VAR_7, int VAR_8)
{
 char VAR_9[VAR_3];
 struct tftphdr *VAR_10;
 int VAR_11;

 if (VAR_4&VAR_1)
  FUNC_4(VAR_2, "Sending DATA packet %d of %d bytes",
   VAR_6, VAR_8);

 FUNC_0("send_data", 0);

 VAR_10 = (struct tftphdr *)VAR_9;

 VAR_10->th_opcode = FUNC_1((u_short)VAR_0);
 VAR_10->th_block = FUNC_1((u_short)VAR_6);
 FUNC_2(VAR_10->th_data, VAR_7, VAR_8);

 VAR_11 = FUNC_3(VAR_5, VAR_6, (char *)VAR_10, VAR_8 + 4);
 return (VAR_11);
}
