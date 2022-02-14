
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_config {int end; } ;
struct pt_query_decoder {int pos; struct pt_config config; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_query_decoder*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct ptu_decoder_fixture *VAR_1)
{
 struct pt_query_decoder *VAR_2 = &VAR_1->decoder;
 struct pt_config *VAR_3 = &VAR_2->config;
 int VAR_4, VAR_5 = 0xbc, VAR_6 = VAR_5;

 VAR_2->pos = VAR_3->end;

 VAR_4 = FUNC_0(VAR_2, &VAR_6);
 FUNC_1(VAR_4, -VAR_0);
 FUNC_1(VAR_6, VAR_5);

 return FUNC_2();
}
