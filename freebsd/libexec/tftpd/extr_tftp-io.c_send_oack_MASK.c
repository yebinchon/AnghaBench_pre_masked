
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct tftphdr {int th_opcode; } ;
struct sockaddr {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {char* o_type; int * o_reply; } ;
struct TYPE_3__ {int ss_len; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (int,char*,int,int ,struct sockaddr*,int ) ;
 int FUNC_4 (char*,int,char*,char*,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;

int
FUNC_7(int VAR_10)
{
 struct tftphdr *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 char *VAR_15;
 char VAR_16[VAR_4];

 if (VAR_6&VAR_0)
  FUNC_6(VAR_1, "Sending OACK");

 FUNC_0("send_oack", 0);





 VAR_11 = (struct tftphdr *)VAR_16;
 VAR_15 = VAR_16 + 2;
 VAR_12 = sizeof(VAR_16) - 2;
 VAR_11->th_opcode = FUNC_2((u_short)VAR_5);
 for (VAR_13 = 0; VAR_8[VAR_13].o_type != ((void*)0); VAR_13++) {
  if (VAR_8[VAR_13].o_reply != ((void*)0)) {
   VAR_14 = FUNC_4(VAR_15, VAR_12, "%s%c%s", VAR_8[VAR_13].o_type,
         0, VAR_8[VAR_13].o_reply);
   VAR_15 += VAR_14+1;
   VAR_12 -= VAR_14+1;
   if (VAR_12 < 0) {
    FUNC_6(VAR_2, "oack: buffer overflow");
    FUNC_1(1);
   }
  }
 }
 VAR_12 = VAR_15 - VAR_16;

 if (FUNC_3(VAR_10, VAR_16, VAR_12, 0,
  (struct sockaddr *)&VAR_9, VAR_9.ss_len) != VAR_12) {
  FUNC_6(VAR_3, "send_oack: %s", FUNC_5(VAR_7));
  return (1);
 }

 return (0);
}
