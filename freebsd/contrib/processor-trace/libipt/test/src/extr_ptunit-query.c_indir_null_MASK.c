
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_config {int begin; } ;
struct pt_query_decoder {int pos; struct pt_config config; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_query_decoder*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct ptu_decoder_fixture *VAR_2)
{
 struct pt_query_decoder *VAR_3 = &VAR_2->decoder;
 struct pt_config *VAR_4 = &VAR_3->config;
 uint64_t VAR_5 = VAR_0, VAR_6 = VAR_5;
 int VAR_7;

 VAR_7 = FUNC_0(((void*)0), &VAR_6);
 FUNC_1(VAR_7, -VAR_1);
 FUNC_4(VAR_6, VAR_5);

 VAR_7 = FUNC_0(VAR_3, ((void*)0));
 FUNC_1(VAR_7, -VAR_1);
 FUNC_3(VAR_3->pos, VAR_4->begin);

 return FUNC_2();
}
