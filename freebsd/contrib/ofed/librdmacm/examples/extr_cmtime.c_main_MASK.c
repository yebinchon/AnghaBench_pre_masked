
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ai_flags; void* ai_qp_type; int ai_port_space; } ;
struct TYPE_4__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct TYPE_5__ {void* qp_type; TYPE_1__ cap; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 void* FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 void* VAR_12 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 void* VAR_13 ;
 void* VAR_14 ;

int FUNC_13(int VAR_15, char **VAR_16)
{
 int VAR_17, VAR_18;

 VAR_6.ai_port_space = VAR_2;
 VAR_6.ai_qp_type = VAR_0;
 while ((VAR_17 = FUNC_5(VAR_15, VAR_16, "s:b:c:p:r:t:")) != -1) {
  switch (VAR_17) {
  case 's':
   VAR_5 = VAR_9;
   break;
  case 'b':
   VAR_13 = VAR_9;
   break;
  case 'c':
   VAR_4 = FUNC_1(VAR_9);
   break;
  case 'p':
   VAR_10 = VAR_9;
   break;
  case 'r':
   VAR_12 = FUNC_1(VAR_9);
   break;
  case 't':
   VAR_14 = FUNC_1(VAR_9);
   break;
  default:
   FUNC_6("usage: %s\n", VAR_16[0]);
   FUNC_6("\t[-s server_address]\n");
   FUNC_6("\t[-b bind_address]\n");
   FUNC_6("\t[-c connections]\n");
   FUNC_6("\t[-p port_number]\n");
   FUNC_6("\t[-r retries]\n");
   FUNC_6("\t[-t timeout_ms]\n");
   FUNC_3(1);
  }
 }

 VAR_7.cap.max_send_wr = 1;
 VAR_7.cap.max_recv_wr = 1;
 VAR_7.cap.max_send_sge = 1;
 VAR_7.cap.max_recv_sge = 1;
 VAR_7.qp_type = VAR_0;

 VAR_3 = FUNC_7();
 if (!VAR_3) {
  FUNC_6("failed to create event channel\n");
  FUNC_3(1);
 }

 if (VAR_5) {
  FUNC_0();
  VAR_18 = FUNC_10();
 } else {
  VAR_6.ai_flags |= VAR_1;
  VAR_18 = FUNC_11();
 }

 FUNC_2();
 FUNC_8(VAR_3);
 if (VAR_11)
  FUNC_9(VAR_11);

 FUNC_12();
 FUNC_4(VAR_8);
 return VAR_18;
}
