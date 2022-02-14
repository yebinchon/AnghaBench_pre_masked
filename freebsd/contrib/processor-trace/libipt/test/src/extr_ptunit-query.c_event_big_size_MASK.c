
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_event {int type; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct pt_encoder*,unsigned long long,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,struct pt_query_decoder*) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct ptu_decoder_fixture *VAR_4)
{
 struct pt_query_decoder *VAR_5 = &VAR_4->decoder;
 struct pt_encoder *VAR_6 = &VAR_4->encoder;
 union {
  struct pt_event event;
  uint8_t buffer[1024];
 } VAR_7;
 int VAR_8;

 FUNC_0(VAR_7.buffer, 0xcd, sizeof(VAR_7.buffer));

 FUNC_1(VAR_6, 0ull, VAR_0);

 FUNC_3(VAR_3, VAR_5);

 VAR_8 = FUNC_2(VAR_5, &VAR_7.event, sizeof(VAR_7.buffer));
 FUNC_4(VAR_8, VAR_2);
 FUNC_4(VAR_7.event.type, VAR_1);
 FUNC_6(VAR_7.buffer[sizeof(VAR_7.event)], 0xcd);

 return FUNC_5();
}
