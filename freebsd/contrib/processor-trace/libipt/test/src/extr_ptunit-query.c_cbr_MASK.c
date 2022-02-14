
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_2__ {int have_cbr; int cbr; } ;
struct pt_query_decoder {TYPE_1__ last_time; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_query_decoder*,int *) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct ptu_decoder_fixture *VAR_0)
{
 struct pt_query_decoder *VAR_1 = &VAR_0->decoder;
 uint32_t VAR_2;
 int VAR_3;

 VAR_1->last_time.have_cbr = 1;
 VAR_1->last_time.cbr = 42;

 VAR_3 = FUNC_0(VAR_1, &VAR_2);
 FUNC_1(VAR_3, 0);
 FUNC_3(VAR_2, 42);

 return FUNC_2();
}
