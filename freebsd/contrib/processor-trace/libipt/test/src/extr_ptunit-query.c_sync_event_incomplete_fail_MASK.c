
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_encoder*) ;
 int FUNC_1 (struct pt_query_decoder*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result
FUNC_4(struct ptu_decoder_fixture *VAR_1)
{
 struct pt_query_decoder *VAR_2 = &VAR_1->decoder;
 struct pt_encoder *VAR_3 = &VAR_1->encoder;
 uint64_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_3);

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 FUNC_2(VAR_5, -VAR_0);

 return FUNC_3();
}
