
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_9__ {int ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {TYPE_4__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
struct TYPE_7__ {int ip; } ;
struct TYPE_6__ {int speculative; int aborted; int ip; } ;
struct TYPE_8__ {TYPE_2__ overflow; TYPE_1__ tsx; } ;
struct pt_event {int type; int has_tsc; int tsc; TYPE_3__ variant; int status_update; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int,int) ;
 int FUNC_1 (struct pt_encoder*,int ) ;
 int FUNC_2 (struct pt_encoder*) ;
 int FUNC_3 (struct pt_encoder*) ;
 int FUNC_4 (struct pt_encoder*,int) ;






 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,struct pt_packet_ip*,int *) ;
 int FUNC_7 (struct pt_query_decoder*,struct pt_event*,int) ;
 int FUNC_8 (struct pt_query_decoder*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int,int) ;
 struct ptunit_result FUNC_10 () ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_13(struct ptu_decoder_fixture *VAR_6,
        enum pt_ip_compression VAR_7)
{
 struct pt_query_decoder *VAR_8 = &VAR_6->decoder;
 struct pt_encoder *VAR_9 = &VAR_6->encoder;
 struct pt_packet_ip VAR_10, VAR_11;
 struct pt_event VAR_12;
 uint64_t VAR_13 = 0;
 int VAR_14;

 VAR_10.ipc = 132;
 VAR_10.ip = VAR_0;

 VAR_11.ipc = VAR_7;
 VAR_11.ip = 0xccull;

 FUNC_5(&VAR_6->last_ip);
 FUNC_6(&VAR_6->last_ip, &VAR_11, &VAR_6->config);

 FUNC_3(VAR_9);
 FUNC_0(VAR_9, VAR_10.ip, VAR_10.ipc);
 FUNC_1(VAR_9, 0);
 FUNC_4(VAR_9, 0x1000);
 FUNC_2(VAR_9);
 FUNC_0(VAR_9, VAR_11.ip, VAR_11.ipc);

 VAR_14 = FUNC_8(VAR_8, &VAR_13);
 FUNC_9(VAR_14, VAR_5);
 FUNC_11(VAR_13, VAR_10.ip);

 VAR_14 = FUNC_7(VAR_8, &VAR_12, sizeof(VAR_12));
 FUNC_9(VAR_14, VAR_5);
 FUNC_12(VAR_12.status_update, 0);
 FUNC_9(VAR_12.type, VAR_3);
 FUNC_9(VAR_12.variant.tsx.speculative, 0);
 FUNC_9(VAR_12.variant.tsx.aborted, 0);
 FUNC_11(VAR_12.variant.tsx.ip, VAR_10.ip);
 FUNC_9(VAR_12.has_tsc, 1);
 FUNC_11(VAR_12.tsc, 0x1000);

 VAR_14 = FUNC_7(VAR_8, &VAR_12, sizeof(VAR_12));
 switch (VAR_7) {
 case 131:
  FUNC_9(VAR_14, -VAR_1);
  return FUNC_10();

 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
  FUNC_9(VAR_14, VAR_4);
  FUNC_9(VAR_12.type, VAR_2);
  FUNC_11(VAR_12.variant.overflow.ip, VAR_6->last_ip.ip);
  FUNC_9(VAR_12.has_tsc, 1);
  FUNC_11(VAR_12.tsc, 0x1000);
  break;
 }

 return FUNC_10();
}
