
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_6__ {int ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {TYPE_3__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
struct TYPE_4__ {int speculative; int aborted; int ip; } ;
struct TYPE_5__ {TYPE_1__ tsx; } ;
struct pt_event {int type; int has_tsc; int tsc; TYPE_2__ variant; int ip_suppressed; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_encoder*,int ,int) ;
 int FUNC_1 (struct pt_encoder*,int) ;
 int FUNC_2 (struct pt_encoder*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,struct pt_packet_ip*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct pt_query_decoder*,struct pt_event*,int) ;
 int FUNC_5 (struct pt_query_decoder*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,struct pt_query_decoder*) ;
 int FUNC_7 (int,int) ;
 struct ptunit_result FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_11(struct ptu_decoder_fixture *VAR_9,
       enum pt_ip_compression VAR_10,
       uint8_t VAR_11, uint64_t VAR_12)
{
 struct pt_query_decoder *VAR_13 = &VAR_9->decoder;
 struct pt_encoder *VAR_14 = &VAR_9->encoder;
 struct pt_packet_ip VAR_15, VAR_16;
 struct pt_event VAR_17;
 uint64_t VAR_18 = 0;
 int VAR_19;

 VAR_15.ipc = VAR_10;
 VAR_15.ip = VAR_0;
 FUNC_3(&VAR_9->last_ip, &VAR_15, &VAR_9->config);

 VAR_16.ipc = VAR_2;
 VAR_16.ip = VAR_1;

 FUNC_1(VAR_14, VAR_11);
 FUNC_0(VAR_14, VAR_15.ip, VAR_15.ipc);
 FUNC_2(VAR_14, VAR_16.ip, VAR_16.ipc);

 FUNC_6(VAR_8, VAR_13);

 VAR_19 = FUNC_4(VAR_13, &VAR_17, sizeof(VAR_17));
 FUNC_7(VAR_19, 0);
 if (VAR_10 == VAR_3)
  FUNC_10(VAR_17.ip_suppressed, 0);
 else {
  FUNC_9(VAR_17.ip_suppressed, 0);
  FUNC_9(VAR_17.variant.tsx.ip, VAR_9->last_ip.ip);
 }
 FUNC_7(VAR_17.type, VAR_6);
 FUNC_7(VAR_17.variant.tsx.speculative,
     (VAR_11 & VAR_5) != 0);
 FUNC_7(VAR_17.variant.tsx.aborted,
     (VAR_11 & VAR_4) != 0);

 if (!VAR_12)
  FUNC_7(VAR_17.has_tsc, 0);
 else {
  FUNC_7(VAR_17.has_tsc, 1);
  FUNC_9(VAR_17.tsc, VAR_12);
 }

 VAR_19 = FUNC_5(VAR_13, &VAR_18);
 FUNC_7(VAR_19, VAR_7);
 FUNC_9(VAR_18, VAR_16.ip);

 return FUNC_8();
}
