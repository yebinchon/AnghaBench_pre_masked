
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_query_decoder*,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct ptu_decoder_fixture *VAR_1)
{
 struct pt_query_decoder *VAR_2 = &VAR_1->decoder;
 uint64_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ((void*)0));
 FUNC_1(VAR_4, -VAR_0);

 VAR_4 = FUNC_0(VAR_2, ((void*)0), ((void*)0), ((void*)0));
 FUNC_1(VAR_4, -VAR_0);

 VAR_4 = FUNC_0(((void*)0), &VAR_3, ((void*)0), ((void*)0));
 FUNC_1(VAR_4, -VAR_0);

 return FUNC_2();
}
