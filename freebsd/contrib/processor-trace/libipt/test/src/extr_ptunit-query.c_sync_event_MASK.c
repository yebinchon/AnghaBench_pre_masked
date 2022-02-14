
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_7__ {int ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {TYPE_3__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
struct TYPE_5__ {unsigned long long ip; int speculative; int aborted; } ;
struct TYPE_6__ {TYPE_1__ tsx; } ;
struct pt_event {unsigned long long status_update; unsigned long long ip_suppressed; int type; int has_tsc; TYPE_2__ variant; } ;
typedef int event ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int FUNC_0 (struct pt_encoder*,int,int) ;
 int FUNC_1 (struct pt_encoder*,int ) ;
 int FUNC_2 (struct pt_encoder*) ;
 int FUNC_3 (struct pt_encoder*) ;






 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct pt_packet_ip*,int *) ;
 int VAR_0 ;
 int FUNC_6 (struct pt_query_decoder*,struct pt_event*,int) ;
 int FUNC_7 (struct pt_query_decoder*,unsigned long long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int,int) ;
 struct ptunit_result FUNC_9 () ;
 int FUNC_10 (unsigned long long,int ) ;
 int FUNC_11 (unsigned long long,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_12(struct ptu_decoder_fixture *VAR_5,
           enum pt_ip_compression VAR_6)
{
 struct pt_query_decoder *VAR_7 = &VAR_5->decoder;
 struct pt_encoder *VAR_8 = &VAR_5->encoder;
 struct pt_packet_ip VAR_9;
 struct pt_event VAR_10;
 uint64_t VAR_11 = 0ull;
 int VAR_12;

 VAR_9.ipc = VAR_6;
 VAR_9.ip = 0xccull;

 FUNC_4(&VAR_5->last_ip);
 FUNC_5(&VAR_5->last_ip, &VAR_9, &VAR_5->config);

 FUNC_2(VAR_8);
 FUNC_1(VAR_8, VAR_0);
 FUNC_0(VAR_8, VAR_9.ip, VAR_9.ipc);
 FUNC_3(VAR_8);

 VAR_12 = FUNC_7(VAR_7, &VAR_11);
 switch (VAR_6) {
 case 131:
  FUNC_8(VAR_12, (VAR_3 | VAR_4));
  break;

 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
  FUNC_8(VAR_12, VAR_3);
  FUNC_10(VAR_11, VAR_5->last_ip.ip);
  break;
 }

 VAR_12 = FUNC_6(VAR_7, &VAR_10, sizeof(VAR_10));
 FUNC_8(VAR_12, VAR_2);
 FUNC_11(VAR_10.status_update, 0);
 if (VAR_6 == 131)
  FUNC_11(VAR_10.ip_suppressed, 0);
 else {
  FUNC_10(VAR_10.ip_suppressed, 0);
  FUNC_10(VAR_10.variant.tsx.ip, VAR_5->last_ip.ip);
 }
 FUNC_8(VAR_10.type, VAR_1);
 FUNC_8(VAR_10.variant.tsx.speculative, 1);
 FUNC_8(VAR_10.variant.tsx.aborted, 0);
 FUNC_8(VAR_10.has_tsc, 0);

 return FUNC_9();
}
