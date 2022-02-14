
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int) ;
 int FUNC_1 (struct pt_encoder*,int ,int) ;
 int FUNC_2 (struct pt_query_decoder*,int*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct pt_query_decoder*,...) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int VAR_2 ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct ptu_decoder_fixture *VAR_3)
{
 struct pt_query_decoder *VAR_4 = &VAR_3->decoder;
 struct pt_encoder *VAR_5 = &VAR_3->encoder;
 int VAR_6, VAR_7;

 FUNC_1(VAR_5, 0, 1);
 FUNC_0(VAR_5, 0xfff);

 FUNC_3(VAR_0, VAR_4, VAR_5);
 FUNC_3(VAR_2, VAR_4);

 VAR_6 = FUNC_2(VAR_4, &VAR_7);
 FUNC_4(VAR_6, VAR_1);

 return FUNC_5();
}
