
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct ccid3_hc_rx_sock {scalar_t__ ccid3hcrx_rtt; scalar_t__ ccid3hcrx_x_recv; int ccid3hcrx_s; void* ccid3hcrx_bytes_recv; int ccid3hcrx_tstamp_last_feedback; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 struct ccid3_hc_rx_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (char*,int ,struct sock*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 void* FUNC_8 (void*,scalar_t__) ;
 scalar_t__ FUNC_9 (void*) ;

__attribute__((used)) static u32 FUNC_10(struct sock *VAR_1)
{
 struct ccid3_hc_rx_sock *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3, VAR_4, VAR_5;
 u64 VAR_6;

 if (VAR_2->ccid3hcrx_rtt == 0) {
  FUNC_1("No RTT estimate available, using fallback RTT\n");
  VAR_2->ccid3hcrx_rtt = VAR_0;
 }

 VAR_5 = FUNC_5(FUNC_6(VAR_2->ccid3hcrx_tstamp_last_feedback));
 VAR_3 = FUNC_8(VAR_2->ccid3hcrx_bytes_recv, VAR_5);
 if (VAR_3 == 0) {
  FUNC_1("X_recv==0\n");
  if ((VAR_3 = VAR_2->ccid3hcrx_x_recv) == 0) {
   FUNC_0("stored value of X_recv is zero");
   return ~0U;
  }
 }

 VAR_6 = FUNC_7(VAR_2->ccid3hcrx_s, VAR_2->ccid3hcrx_rtt);
 VAR_6 = FUNC_8(VAR_6, VAR_3);
 VAR_4 = FUNC_9(VAR_6);

 FUNC_3("%s(%p), receive rate=%u bytes/s, implied "
         "loss rate=%u\n", FUNC_4(VAR_1), VAR_1, VAR_3, VAR_4);

 return VAR_4 == 0 ? ~0U : FUNC_7(1, VAR_4);
}
