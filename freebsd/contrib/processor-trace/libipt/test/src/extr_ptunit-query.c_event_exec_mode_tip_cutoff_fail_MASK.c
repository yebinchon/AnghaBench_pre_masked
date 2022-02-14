
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
 int FUNC_1 (struct pt_encoder*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,struct pt_query_decoder*,...) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int VAR_4 ;

__attribute__((used)) static struct ptunit_result
FUNC_6(struct ptu_decoder_fixture *VAR_5)
{
 struct pt_query_decoder *VAR_6 = &VAR_5->decoder;
 struct pt_encoder *VAR_7 = &VAR_5->encoder;
 struct pt_event VAR_8;
 int VAR_9;

 FUNC_0(VAR_7, VAR_3);
 FUNC_1(VAR_7, 0, VAR_1);

 FUNC_3(VAR_0, VAR_6, VAR_7);
 FUNC_3(VAR_4, VAR_6);

 VAR_9 = FUNC_2(VAR_6, &VAR_8, sizeof(VAR_8));
 FUNC_4(VAR_9, -VAR_2);

 return FUNC_5();
}
