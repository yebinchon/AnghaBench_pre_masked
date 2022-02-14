
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_7__ {int ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {TYPE_3__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
struct TYPE_5__ {int ip; } ;
struct TYPE_6__ {TYPE_1__ overflow; } ;
struct pt_event {int type; int has_tsc; int tsc; TYPE_2__ variant; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int FUNC_0 (struct pt_encoder*,int,int) ;
 int FUNC_1 (struct pt_encoder*) ;






 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct pt_packet_ip*,int *) ;
 int FUNC_4 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,struct pt_query_decoder*) ;
 int FUNC_6 (int,int) ;
 struct ptunit_result FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_9(struct ptu_decoder_fixture *VAR_4,
            enum pt_ip_compression VAR_5,
            uint64_t VAR_6)
{
 struct pt_query_decoder *VAR_7 = &VAR_4->decoder;
 struct pt_encoder *VAR_8 = &VAR_4->encoder;
 struct pt_event VAR_9;
 struct pt_packet_ip VAR_10;
 int VAR_11;

 VAR_10.ipc = VAR_5;
 VAR_10.ip = 0xccull;

 FUNC_2(&VAR_4->last_ip);
 FUNC_3(&VAR_4->last_ip, &VAR_10, &VAR_4->config);

 FUNC_1(VAR_8);
 FUNC_0(VAR_8, VAR_10.ip, VAR_10.ipc);

 FUNC_5(VAR_3, VAR_7);

 VAR_11 = FUNC_4(VAR_7, &VAR_9, sizeof(VAR_9));
 switch (VAR_5) {
 case 131:
  FUNC_6(VAR_11, -VAR_0);
  break;

 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
  FUNC_6(VAR_11, VAR_2);
  FUNC_6(VAR_9.type, VAR_1);
  FUNC_8(VAR_9.variant.overflow.ip, VAR_4->last_ip.ip);

  if (!VAR_6)
   FUNC_6(VAR_9.has_tsc, 0);
  else {
   FUNC_6(VAR_9.has_tsc, 1);
   FUNC_8(VAR_9.tsc, VAR_6);
  }
  break;
 }

 return FUNC_7();
}
