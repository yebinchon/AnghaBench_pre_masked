
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct TYPE_2__ {int begin; } ;
struct pt_query_decoder {TYPE_1__ config; int pos; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_encoder*,int) ;
 int FUNC_1 (struct pt_encoder*) ;
 int FUNC_2 (struct pt_encoder*,int) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result
FUNC_4(struct ptu_decoder_fixture *VAR_0)
{
 struct pt_query_decoder *VAR_1 = &VAR_0->decoder;
 struct pt_encoder *VAR_2 = &VAR_0->encoder;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, 1);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2, 0x1000);


 VAR_1->pos = VAR_1->config.begin;

 return FUNC_3();
}
