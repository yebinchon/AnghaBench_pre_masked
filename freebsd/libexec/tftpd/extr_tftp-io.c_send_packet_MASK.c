
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct tftphdr {int th_opcode; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int ss_len; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int,char*,int,int ,struct sockaddr*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_7(int VAR_3, uint16_t VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = 1;

 for (VAR_7 = 0; VAR_7 < 12 ; VAR_7++) {
  FUNC_0("send_packet", 0);

  if (FUNC_3(VAR_3, VAR_5, VAR_6, 0, (struct sockaddr *)&VAR_2,
      VAR_2.ss_len) == VAR_6) {
   if (VAR_7)
    FUNC_6(VAR_0,
        "%s block %d, attempt %d successful",
            FUNC_2(FUNC_1(((struct tftphdr *)
        (VAR_5))->th_opcode)), VAR_4, VAR_7);
   return (0);
  }
  FUNC_6(VAR_0,
      "%s block %d, attempt %d failed (Error %d: %s)",
      FUNC_2(FUNC_1(((struct tftphdr *)(VAR_5))->th_opcode)),
      VAR_4, VAR_7, VAR_1, FUNC_5(VAR_1));
  FUNC_4(VAR_8);
  if (VAR_8 < 32)
   VAR_8 <<= 1;
 }
 FUNC_6(VAR_0, "send_packet: %s", FUNC_5(VAR_1));
 return (1);
}
