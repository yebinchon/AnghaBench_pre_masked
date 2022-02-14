
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int * pos; } ;
struct pt_query_decoder {int pos; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_encoder*,int ,int ) ;
 int FUNC_1 (struct pt_encoder*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct pt_query_decoder*,int*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct pt_query_decoder*) ;
 int FUNC_4 (int,int) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int ,int const*) ;
 int VAR_2 ;

__attribute__((used)) static struct ptunit_result
FUNC_7(struct ptu_decoder_fixture *VAR_3)
{
 struct pt_query_decoder *VAR_4 = &VAR_3->decoder;
 struct pt_encoder *VAR_5 = &VAR_3->encoder;
 int VAR_6, VAR_7 = 0xbc, VAR_8 = VAR_7;
 const uint8_t *VAR_9;

 VAR_9 = VAR_5->pos;
 FUNC_0(VAR_5, 0, VAR_0);
 FUNC_1(VAR_5, 0, 1);

 FUNC_3(VAR_2, VAR_4);

 VAR_6 = FUNC_2(VAR_4, &VAR_8);
 FUNC_4(VAR_6, -VAR_1);
 FUNC_6(VAR_4->pos, VAR_9);
 FUNC_4(VAR_8, VAR_7);

 return FUNC_5();
}
