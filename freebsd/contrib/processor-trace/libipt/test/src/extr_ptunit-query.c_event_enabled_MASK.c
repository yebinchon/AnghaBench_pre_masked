
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
struct TYPE_4__ {int ip; } ;
struct TYPE_5__ {TYPE_1__ enabled; } ;
struct pt_event {int type; int has_tsc; int tsc; TYPE_2__ variant; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,struct pt_packet_ip*,int *) ;
 int FUNC_2 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct pt_query_decoder*) ;
 int FUNC_4 (int,int) ;
 struct ptunit_result FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct ptu_decoder_fixture *VAR_6,
       enum pt_ip_compression VAR_7,
       uint64_t VAR_8)
{
 struct pt_query_decoder *VAR_9 = &VAR_6->decoder;
 struct pt_encoder *VAR_10 = &VAR_6->encoder;
 struct pt_packet_ip VAR_11;
 struct pt_event VAR_12;
 int VAR_13;

 VAR_11.ipc = VAR_7;
 VAR_11.ip = VAR_0;
 FUNC_1(&VAR_6->last_ip, &VAR_11, &VAR_6->config);

 FUNC_0(VAR_10, VAR_11.ip, VAR_11.ipc);

 FUNC_3(VAR_5, VAR_9);

 VAR_13 = FUNC_2(VAR_9, &VAR_12, sizeof(VAR_12));
 if (VAR_7 == VAR_1)
  FUNC_4(VAR_13, -VAR_2);
 else {
  FUNC_4(VAR_13, VAR_4);
  FUNC_4(VAR_12.type, VAR_3);
  FUNC_6(VAR_12.variant.enabled.ip, VAR_6->last_ip.ip);

  if (!VAR_8)
   FUNC_4(VAR_12.has_tsc, 0);
  else {
   FUNC_4(VAR_12.has_tsc, 1);
   FUNC_6(VAR_12.tsc, VAR_8);
  }
 }

 return FUNC_5();
}
