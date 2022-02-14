
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_2__ {int begin; } ;
struct pt_query_decoder {TYPE_1__ config; int pos; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 struct ptunit_result FUNC_0 () ;

__attribute__((used)) static struct ptunit_result
FUNC_1(struct ptu_decoder_fixture *VAR_0)
{
 struct pt_query_decoder *VAR_1 = &VAR_0->decoder;


 VAR_1->pos = VAR_1->config.begin;

 return FUNC_0();
}
