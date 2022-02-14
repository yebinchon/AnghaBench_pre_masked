
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct tftphdr {char* th_msg; void* th_code; void* th_opcode; } ;
struct sockaddr {int dummy; } ;
struct errmsg {int e_code; int e_msg; } ;
struct TYPE_2__ {int ss_len; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct errmsg* VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_2 (int,char*,int,int ,struct sockaddr*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int,...) ;

void
FUNC_7(int VAR_10, int VAR_11)
{
 struct tftphdr *VAR_12;
 int VAR_13;
 struct errmsg *VAR_14;
 char VAR_15[VAR_5];

 if (VAR_6&VAR_0)
  FUNC_6(VAR_3, "Sending ERROR %d", VAR_11);

 FUNC_0("send_error");

 VAR_12 = (struct tftphdr *)VAR_15;
 VAR_12->th_opcode = FUNC_1((u_short)VAR_1);
 VAR_12->th_code = FUNC_1((u_short)VAR_11);
 for (VAR_14 = VAR_7; VAR_14->e_code >= 0; VAR_14++)
  if (VAR_14->e_code == VAR_11)
   break;
 if (VAR_14->e_code < 0) {
  VAR_14->e_msg = FUNC_4(VAR_11 - 100);
  VAR_12->th_code = VAR_2;
 }
 FUNC_3(VAR_12->th_msg, VAR_14->e_msg);
 VAR_13 = FUNC_5(VAR_14->e_msg);
 VAR_12->th_msg[VAR_13] = '\0';
 VAR_13 += 5;

 if (VAR_6&VAR_0)
  FUNC_6(VAR_3, "Sending ERROR %d: %s", VAR_11, VAR_12->th_msg);

 if (FUNC_2(VAR_10, VAR_15, VAR_13, 0,
  (struct sockaddr *)&VAR_9, VAR_9.ss_len) != VAR_13)
  FUNC_6(VAR_4, "send_error: %s", FUNC_4(VAR_8));
}
