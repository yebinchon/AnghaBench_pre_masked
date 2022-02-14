
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_6__ {int ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {TYPE_3__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
struct TYPE_4__ {int from; int to; } ;
struct TYPE_5__ {TYPE_1__ async_branch; } ;
struct pt_event {int type; int has_tsc; int tsc; TYPE_2__ variant; int ip_suppressed; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_encoder*,int ,int) ;
 int FUNC_1 (struct pt_encoder*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,struct pt_packet_ip*,int *) ;
 int FUNC_3 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,struct pt_query_decoder*) ;
 int FUNC_5 (int,int) ;
 struct ptunit_result FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_9(struct ptu_decoder_fixture *VAR_7,
            enum pt_ip_compression VAR_8,
            uint64_t VAR_9)
{
 struct pt_query_decoder *VAR_10 = &VAR_7->decoder;
 struct pt_encoder *VAR_11 = &VAR_7->encoder;
 struct pt_packet_ip VAR_12, VAR_13;
 struct pt_event VAR_14;
 int VAR_15;

 VAR_12.ipc = VAR_2;
 VAR_12.ip = VAR_0;
 FUNC_2(&VAR_7->last_ip, &VAR_12, &VAR_7->config);

 VAR_13.ipc = VAR_8;
 VAR_13.ip = VAR_1;
 FUNC_2(&VAR_7->last_ip, &VAR_13, &VAR_7->config);

 FUNC_0(VAR_11, VAR_12.ip, VAR_12.ipc);
 FUNC_1(VAR_11, VAR_13.ip, VAR_13.ipc);

 FUNC_4(VAR_6, VAR_10);

 VAR_15 = FUNC_3(VAR_10, &VAR_14, sizeof(VAR_14));
 FUNC_5(VAR_15, VAR_5);
 if (VAR_8 == VAR_3)
  FUNC_8(VAR_14.ip_suppressed, 0);
 else {
  FUNC_7(VAR_14.ip_suppressed, 0);
  FUNC_7(VAR_14.variant.async_branch.to, VAR_7->last_ip.ip);
 }
 FUNC_5(VAR_14.type, VAR_4);
 FUNC_7(VAR_14.variant.async_branch.from, VAR_12.ip);

 if (!VAR_9)
  FUNC_5(VAR_14.has_tsc, 0);
 else {
  FUNC_5(VAR_14.has_tsc, 1);
  FUNC_7(VAR_14.tsc, VAR_9);
 }

 return FUNC_6();
}
