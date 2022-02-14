
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_event {int dummy; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_encoder*,int ,int ) ;
 int FUNC_1 (struct pt_encoder*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct pt_query_decoder*,...) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int VAR_5 ;

__attribute__((used)) static struct ptunit_result
FUNC_6(struct ptu_decoder_fixture *VAR_6)
{
 struct pt_query_decoder *VAR_7 = &VAR_6->decoder;
 struct pt_encoder *VAR_8 = &VAR_6->encoder;
 struct pt_event VAR_9;
 uint64_t VAR_10 = VAR_1;
 int VAR_11;

 FUNC_0(VAR_8, VAR_10, VAR_2);
 FUNC_1(VAR_8, 0, VAR_3);

 FUNC_3(VAR_0, VAR_7, VAR_8);
 FUNC_3(VAR_5, VAR_7);

 VAR_11 = FUNC_2(VAR_7, &VAR_9, sizeof(VAR_9));
 FUNC_4(VAR_11, -VAR_4);

 return FUNC_5();
}
