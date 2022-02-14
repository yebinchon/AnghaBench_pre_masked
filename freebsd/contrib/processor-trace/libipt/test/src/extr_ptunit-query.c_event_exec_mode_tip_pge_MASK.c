
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_8__ {unsigned long long ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {scalar_t__ enabled; } ;
struct ptu_decoder_fixture {TYPE_4__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
struct TYPE_6__ {int mode; unsigned long long ip; } ;
struct TYPE_5__ {unsigned long long ip; } ;
struct TYPE_7__ {TYPE_2__ exec_mode; TYPE_1__ enabled; } ;
struct pt_event {int type; int has_tsc; unsigned long long tsc; TYPE_3__ variant; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int) ;
 int FUNC_1 (struct pt_encoder*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,struct pt_packet_ip*,int *) ;
 int FUNC_3 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,struct pt_query_decoder*) ;
 int FUNC_5 (int,int) ;
 struct ptunit_result FUNC_6 () ;
 int VAR_8 ;
 int FUNC_7 (unsigned long long,unsigned long long) ;

__attribute__((used)) static struct ptunit_result
FUNC_8(struct ptu_decoder_fixture *VAR_9,
   enum pt_ip_compression VAR_10, uint64_t VAR_11)
{
 struct pt_query_decoder *VAR_12 = &VAR_9->decoder;
 struct pt_encoder *VAR_13 = &VAR_9->encoder;
 enum pt_exec_mode VAR_14 = VAR_3;
 struct pt_packet_ip VAR_15;
 struct pt_event VAR_16;
 uint64_t VAR_17 = 0ull;
 int VAR_18;

 VAR_15.ipc = VAR_10;
 VAR_15.ip = VAR_0;
 FUNC_2(&VAR_9->last_ip, &VAR_15, &VAR_9->config);

 FUNC_0(VAR_13, VAR_14);
 FUNC_1(VAR_13, VAR_15.ip, VAR_15.ipc);

 FUNC_4(VAR_8, VAR_12);
 VAR_12->enabled = 0;

 VAR_18 = FUNC_3(VAR_12, &VAR_16, sizeof(VAR_16));
 if (VAR_10 == VAR_1) {
  FUNC_5(VAR_18, -VAR_2);
  FUNC_7(VAR_17, 0ull);
 } else {
  FUNC_5(VAR_18, VAR_7);
  FUNC_5(VAR_16.type, VAR_4);
  FUNC_7(VAR_16.variant.enabled.ip, VAR_9->last_ip.ip);

  if (!VAR_11)
   FUNC_5(VAR_16.has_tsc, 0);
  else {
   FUNC_5(VAR_16.has_tsc, 1);
   FUNC_7(VAR_16.tsc, VAR_11);
  }

  VAR_18 = FUNC_3(VAR_12, &VAR_16, sizeof(VAR_16));
  FUNC_5(VAR_18, VAR_6);
  FUNC_5(VAR_16.type, VAR_5);
  FUNC_5(VAR_16.variant.exec_mode.mode, VAR_14);
  FUNC_7(VAR_16.variant.exec_mode.ip, VAR_9->last_ip.ip);

  if (!VAR_11)
   FUNC_5(VAR_16.has_tsc, 0);
  else {
   FUNC_5(VAR_16.has_tsc, 1);
   FUNC_7(VAR_16.tsc, VAR_11);
  }
 }

 return FUNC_6();
}
