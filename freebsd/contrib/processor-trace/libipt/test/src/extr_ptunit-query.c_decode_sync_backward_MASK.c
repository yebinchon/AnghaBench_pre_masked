
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_event {int type; } ;
typedef int event ;


 int FUNC_0 (struct pt_encoder*,int *) ;
 int FUNC_1 (struct pt_encoder*,int ) ;
 int FUNC_2 (struct pt_encoder*) ;
 int FUNC_3 (struct pt_encoder*) ;
 int FUNC_4 (struct pt_query_decoder*,struct pt_event*,int) ;
 int FUNC_5 (struct pt_query_decoder*,int *) ;
 int FUNC_6 (struct pt_query_decoder*,int *) ;
 int FUNC_7 (struct pt_query_decoder*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 struct ptunit_result FUNC_10 () ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static struct ptunit_result
FUNC_12(struct ptu_decoder_fixture *VAR_3)
{
 struct pt_query_decoder *VAR_4 = &VAR_3->decoder;
 struct pt_encoder *VAR_5 = &VAR_3->encoder;
 struct pt_event VAR_6;
 uint64_t VAR_7[2], VAR_8, VAR_9;
 int VAR_10;





 VAR_10 = FUNC_0(VAR_5, &VAR_7[0]);
 FUNC_9(VAR_10, 0);

 FUNC_2(VAR_5);
 FUNC_1(VAR_5, VAR_1);
 FUNC_3(VAR_5);

 VAR_10 = FUNC_0(VAR_5, &VAR_7[1]);
 FUNC_9(VAR_10, 0);

 FUNC_2(VAR_5);
 FUNC_1(VAR_5, VAR_1);
 FUNC_3(VAR_5);


 VAR_10 = FUNC_7(VAR_4, &VAR_9);
 FUNC_9(VAR_10, 0);

 VAR_10 = FUNC_5(VAR_4, &VAR_8);
 FUNC_8(VAR_10, 0);
 FUNC_11(VAR_8, VAR_7[0]);

 VAR_10 = FUNC_4(VAR_4, &VAR_6, sizeof(VAR_6));
 FUNC_9(VAR_10, 0);
 FUNC_8(VAR_6.type, VAR_2);

 VAR_10 = FUNC_4(VAR_4, &VAR_6, sizeof(VAR_6));
 FUNC_9(VAR_10, 0);
 FUNC_8(VAR_6.type, VAR_2);

 VAR_10 = FUNC_6(VAR_4, &VAR_9);
 FUNC_9(VAR_10, 0);

 VAR_10 = FUNC_5(VAR_4, &VAR_8);
 FUNC_8(VAR_10, 0);
 FUNC_11(VAR_8, VAR_7[1]);

 VAR_10 = FUNC_6(VAR_4, &VAR_9);
 FUNC_9(VAR_10, 0);

 VAR_10 = FUNC_5(VAR_4, &VAR_8);
 FUNC_8(VAR_10, 0);
 FUNC_11(VAR_8, VAR_7[0]);

 VAR_10 = FUNC_6(VAR_4, &VAR_9);
 FUNC_8(VAR_10, -VAR_0);

 return FUNC_10();
}
