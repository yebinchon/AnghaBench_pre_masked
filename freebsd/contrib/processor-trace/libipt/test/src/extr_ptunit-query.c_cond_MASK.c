
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_encoder*,int,int) ;
 int FUNC_1 (struct pt_query_decoder*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct pt_query_decoder*) ;
 int FUNC_3 (int,int) ;
 struct ptunit_result FUNC_4 () ;
 int VAR_2 ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct ptu_decoder_fixture *VAR_3)
{
 struct pt_query_decoder *VAR_4 = &VAR_3->decoder;
 struct pt_encoder *VAR_5 = &VAR_3->encoder;
 int VAR_6, VAR_7 = 0xbc, VAR_8 = VAR_7;

 FUNC_0(VAR_5, 0x02, 3);

 FUNC_2(VAR_2, VAR_4);

 VAR_6 = FUNC_1(VAR_4, &VAR_8);
 FUNC_3(VAR_6, 0);
 FUNC_3(VAR_8, 0);

 VAR_8 = VAR_7;
 VAR_6 = FUNC_1(VAR_4, &VAR_8);
 FUNC_3(VAR_6, 0);
 FUNC_3(VAR_8, 1);

 VAR_8 = VAR_7;
 VAR_6 = FUNC_1(VAR_4, &VAR_8);
 FUNC_3(VAR_6, VAR_1);
 FUNC_3(VAR_8, 0);

 VAR_8 = VAR_7;
 VAR_6 = FUNC_1(VAR_4, &VAR_8);
 FUNC_3(VAR_6, -VAR_0);
 FUNC_3(VAR_8, VAR_7);

 return FUNC_4();
}
