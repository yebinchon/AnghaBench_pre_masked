
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
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,struct pt_packet_ip*,int *) ;
 int FUNC_2 (struct pt_query_decoder*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct pt_query_decoder*) ;
 int FUNC_4 (int,int) ;
 struct ptunit_result FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct ptu_decoder_fixture *VAR_6,
      enum pt_ip_compression VAR_7)
{
 struct pt_query_decoder *VAR_8 = &VAR_6->decoder;
 struct pt_encoder *VAR_9 = &VAR_6->encoder;
 struct pt_packet_ip VAR_10;
 uint64_t VAR_11 = VAR_0;
 int VAR_12;

 VAR_10.ipc = VAR_7;
 VAR_10.ip = VAR_1;
 FUNC_1(&VAR_6->last_ip, &VAR_10, &VAR_6->config);

 FUNC_0(VAR_9, VAR_10.ip, VAR_10.ipc);

 FUNC_3(VAR_5, VAR_8);

 VAR_12 = FUNC_2(VAR_8, &VAR_11);
 if (VAR_7 == VAR_2) {
  FUNC_4(VAR_12, VAR_4 | VAR_3);
  FUNC_6(VAR_11, VAR_0);
 } else {
  FUNC_4(VAR_12, VAR_3);
  FUNC_6(VAR_11, VAR_6->last_ip.ip);
 }

 return FUNC_5();
}
