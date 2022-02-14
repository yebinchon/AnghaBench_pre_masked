
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_2__ {int have_tsc; int tsc; } ;
struct pt_query_decoder {TYPE_1__ last_time; } ;
struct ptu_decoder_fixture {struct pt_query_decoder decoder; } ;


 int FUNC_0 (struct pt_query_decoder*,int*,int *,int *) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct ptu_decoder_fixture *VAR_0)
{
 struct pt_query_decoder *VAR_1 = &VAR_0->decoder;
 uint64_t VAR_2, VAR_3;
 int VAR_4;

 VAR_3 = 0x11223344556677ull;

 VAR_1->last_time.have_tsc = 1;
 VAR_1->last_time.tsc = VAR_3;

 VAR_4 = FUNC_0(VAR_1, &VAR_2, ((void*)0), ((void*)0));
 FUNC_1(VAR_4, 0);
 FUNC_3(VAR_2, VAR_3);

 return FUNC_2();
}
