
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_config {int end; } ;
struct pt_query_decoder {int pos; struct pt_config config; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;
struct pt_event {int dummy; } ;
typedef int event ;


 int FUNC_0 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct ptu_decoder_fixture *VAR_1)
{
 struct pt_query_decoder *VAR_2 = &VAR_1->decoder;
 struct pt_config *VAR_3 = &VAR_2->config;
 struct pt_event VAR_4;
 int VAR_5;

 VAR_2->pos = VAR_3->end;

 VAR_5 = FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
 FUNC_1(VAR_5, -VAR_0);

 return FUNC_2();
}
