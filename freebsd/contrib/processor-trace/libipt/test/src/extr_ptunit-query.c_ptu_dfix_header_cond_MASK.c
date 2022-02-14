
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


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int ,int ) ;
 int FUNC_1 (struct pt_encoder*,int) ;
 int FUNC_2 (struct pt_encoder*) ;
 int FUNC_3 (struct pt_encoder*) ;
 int FUNC_4 (struct pt_encoder*) ;
 int FUNC_5 (struct pt_encoder*,int ) ;
 int VAR_1 ;
 struct ptunit_result FUNC_6 () ;

__attribute__((used)) static struct ptunit_result
FUNC_7(struct ptu_decoder_fixture *VAR_2)
{
 struct pt_query_decoder *VAR_3 = &VAR_2->decoder;
 struct pt_encoder *VAR_4 = &VAR_2->encoder;





 FUNC_2(VAR_4);
 FUNC_1(VAR_4, 1);
 FUNC_3(VAR_4);
 FUNC_5(VAR_4, 0);
 FUNC_2(VAR_4);
 FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
 FUNC_5(VAR_4, 0);
 FUNC_2(VAR_4);


 VAR_3->pos = VAR_3->config.begin;

 return FUNC_6();
}
