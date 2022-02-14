
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_query_decoder*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct ptu_decoder_fixture *VAR_1)
{
 struct pt_query_decoder *VAR_2 = &VAR_1->decoder;
 int VAR_3, VAR_4 = 0xbc, VAR_5 = VAR_4;

 VAR_3 = FUNC_0(VAR_2, &VAR_5);
 FUNC_1(VAR_3, -VAR_0);
 FUNC_1(VAR_5, VAR_4);

 return FUNC_2();
}
