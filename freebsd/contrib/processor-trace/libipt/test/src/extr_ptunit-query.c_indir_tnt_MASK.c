
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_2__ {int ip; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {TYPE_1__ last_ip; int config; struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_packet_ip {int ipc; int ip; } ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_encoder*,int ,int) ;
 int FUNC_1 (struct pt_encoder*,unsigned long long,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct pt_packet_ip*,int *) ;
 int FUNC_3 (struct pt_query_decoder*,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct pt_query_decoder*) ;
 int FUNC_5 (int,int ) ;
 struct ptunit_result FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_8(struct ptu_decoder_fixture *VAR_5,
          enum pt_ip_compression VAR_6)
{
 struct pt_query_decoder *VAR_7 = &VAR_5->decoder;
 struct pt_encoder *VAR_8 = &VAR_5->encoder;
 struct pt_packet_ip VAR_9;
 uint64_t VAR_10 = VAR_0;
 int VAR_11;

 VAR_9.ipc = VAR_6;
 VAR_9.ip = VAR_1;
 FUNC_2(&VAR_5->last_ip, &VAR_9, &VAR_5->config);

 FUNC_1(VAR_8, 0ull, 1);
 FUNC_0(VAR_8, VAR_9.ip, VAR_9.ipc);

 FUNC_4(VAR_4, VAR_7);

 VAR_11 = FUNC_3(VAR_7, &VAR_10);
 if (VAR_6 == VAR_2) {
  FUNC_5(VAR_11, VAR_3);
  FUNC_7(VAR_10, VAR_0);
 } else {
  FUNC_5(VAR_11, 0);
  FUNC_7(VAR_10, VAR_5->last_ip.ip);
 }

 return FUNC_6();
}
