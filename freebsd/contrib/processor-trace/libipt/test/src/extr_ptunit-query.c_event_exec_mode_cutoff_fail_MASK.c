
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_event {int dummy; } ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int ) ;
 int FUNC_1 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct pt_query_decoder*,...) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int VAR_3 ;

__attribute__((used)) static struct ptunit_result
FUNC_5(struct ptu_decoder_fixture *VAR_4)
{
 struct pt_query_decoder *VAR_5 = &VAR_4->decoder;
 struct pt_encoder *VAR_6 = &VAR_4->encoder;
 struct pt_event VAR_7;
 int VAR_8;

 FUNC_0(VAR_6, VAR_2);

 FUNC_2(VAR_0, VAR_5, VAR_6);
 FUNC_2(VAR_3, VAR_5);

 VAR_8 = FUNC_1(VAR_5, &VAR_7, sizeof(VAR_7));
 FUNC_3(VAR_8, -VAR_1);

 return FUNC_4();
}
