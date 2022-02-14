
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_6__ {unsigned long long ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {TYPE_3__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
struct TYPE_4__ {unsigned long long ip; int mode; } ;
struct TYPE_5__ {TYPE_1__ exec_mode; } ;
struct pt_event {unsigned long long ip_suppressed; int type; int has_tsc; unsigned long long tsc; TYPE_2__ variant; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int) ;
 int FUNC_1 (struct pt_encoder*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,struct pt_packet_ip*,int *) ;
 int FUNC_3 (struct pt_query_decoder*,struct pt_event*,int) ;
 int FUNC_4 (struct pt_query_decoder*,unsigned long long*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,struct pt_query_decoder*) ;
 int FUNC_6 (int,int) ;
 struct ptunit_result FUNC_7 () ;
 int VAR_6 ;
 int FUNC_8 (unsigned long long,unsigned long long) ;
 int FUNC_9 (unsigned long long,int ) ;

__attribute__((used)) static struct ptunit_result
FUNC_10(struct ptu_decoder_fixture *VAR_7,
      enum pt_ip_compression VAR_8, uint64_t VAR_9)
{
 struct pt_query_decoder *VAR_10 = &VAR_7->decoder;
 struct pt_encoder *VAR_11 = &VAR_7->encoder;
 enum pt_exec_mode VAR_12 = VAR_2;
 struct pt_packet_ip VAR_13;
 struct pt_event VAR_14;
 uint64_t VAR_15 = 0ull;
 int VAR_16;

 VAR_13.ipc = VAR_8;
 VAR_13.ip = VAR_0;
 FUNC_2(&VAR_7->last_ip, &VAR_13, &VAR_7->config);

 FUNC_0(VAR_11, VAR_12);
 FUNC_1(VAR_11, VAR_13.ip, VAR_13.ipc);

 FUNC_5(VAR_6, VAR_10);

 VAR_16 = FUNC_3(VAR_10, &VAR_14, sizeof(VAR_14));
 FUNC_6(VAR_16, 0);
 if (VAR_8 == VAR_1)
  FUNC_9(VAR_14.ip_suppressed, 0);
 else {
  FUNC_8(VAR_14.ip_suppressed, 0);
  FUNC_8(VAR_14.variant.exec_mode.ip, VAR_7->last_ip.ip);
 }
 FUNC_6(VAR_14.type, VAR_3);
 FUNC_6(VAR_14.variant.exec_mode.mode, VAR_12);

 if (!VAR_9)
  FUNC_6(VAR_14.has_tsc, 0);
 else {
  FUNC_6(VAR_14.has_tsc, 1);
  FUNC_8(VAR_14.tsc, VAR_9);
 }

 VAR_16 = FUNC_4(VAR_10, &VAR_15);
 if (VAR_8 == VAR_1)
  FUNC_6(VAR_16, VAR_5 | VAR_4);
 else {
  FUNC_6(VAR_16, VAR_4);
  FUNC_8(VAR_15, VAR_7->last_ip.ip);
 }

 return FUNC_7();
}
