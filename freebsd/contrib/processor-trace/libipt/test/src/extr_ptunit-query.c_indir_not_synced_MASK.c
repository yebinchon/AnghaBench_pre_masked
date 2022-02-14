
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_query_decoder*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct ptu_decoder_fixture *VAR_2)
{
 struct pt_query_decoder *VAR_3 = &VAR_2->decoder;
 uint64_t VAR_4 = VAR_0, VAR_5 = VAR_4;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, &VAR_5);
 FUNC_1(VAR_6, -VAR_1);
 FUNC_3(VAR_5, VAR_4);

 return FUNC_2();
}
