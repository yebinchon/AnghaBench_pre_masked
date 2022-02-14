
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_encoder*,int *) ;
 int FUNC_1 (struct pt_encoder*,int ) ;
 int FUNC_2 (struct pt_encoder*) ;
 int FUNC_3 (struct pt_encoder*) ;
 int FUNC_4 (struct pt_query_decoder*,int *) ;
 int FUNC_5 (struct pt_query_decoder*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 struct ptunit_result FUNC_8 () ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static struct ptunit_result
FUNC_10(struct ptu_decoder_fixture *VAR_2)
{
 struct pt_query_decoder *VAR_3 = &VAR_2->decoder;
 struct pt_encoder *VAR_4 = &VAR_2->encoder;
 uint64_t VAR_5[3], VAR_6, VAR_7;
 int VAR_8;







 VAR_8 = FUNC_0(VAR_4, &VAR_5[0]);
 FUNC_7(VAR_8, 0);

 FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_1);
 FUNC_3(VAR_4);

 VAR_8 = FUNC_0(VAR_4, &VAR_5[1]);
 FUNC_7(VAR_8, 0);

 FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_1);
 FUNC_3(VAR_4);

 VAR_8 = FUNC_0(VAR_4, &VAR_5[2]);
 FUNC_7(VAR_8, 0);

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);





 VAR_8 = FUNC_5(VAR_3, &VAR_7);
 FUNC_7(VAR_8, 0);

 VAR_8 = FUNC_4(VAR_3, &VAR_6);
 FUNC_6(VAR_8, 0);
 FUNC_9(VAR_6, VAR_5[1]);

 VAR_8 = FUNC_5(VAR_3, &VAR_7);
 FUNC_7(VAR_8, 0);

 VAR_8 = FUNC_4(VAR_3, &VAR_6);
 FUNC_6(VAR_8, 0);
 FUNC_9(VAR_6, VAR_5[0]);

 VAR_8 = FUNC_5(VAR_3, &VAR_7);
 FUNC_6(VAR_8, -VAR_0);

 return FUNC_8();
}
