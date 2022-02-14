
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct pt_event {int type; int has_tsc; int tsc; } ;
typedef int event ;


 int FUNC_0 (struct pt_encoder*) ;
 int FUNC_1 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (struct pt_query_decoder*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct ptu_decoder_fixture *VAR_2,
           uint64_t VAR_3)
{
 struct pt_query_decoder *VAR_4 = &VAR_2->decoder;
 struct pt_encoder *VAR_5 = &VAR_2->encoder;
 struct pt_event VAR_6;
 int VAR_7;

 FUNC_0(VAR_5);

 FUNC_4(VAR_4);

 VAR_7 = FUNC_1(VAR_4, &VAR_6, sizeof(VAR_6));
 FUNC_2(VAR_7, VAR_1);
 FUNC_2(VAR_6.type, VAR_0);

 if (!VAR_3)
  FUNC_2(VAR_6.has_tsc, 0);
 else {
  FUNC_2(VAR_6.has_tsc, 1);
  FUNC_5(VAR_6.tsc, VAR_3);
 }

 return FUNC_3();
}
