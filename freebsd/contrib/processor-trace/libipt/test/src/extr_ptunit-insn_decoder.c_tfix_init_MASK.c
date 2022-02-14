
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_config {int * end; int * begin; } ;
struct test_fixture {int decoder; int * buffer; struct pt_config config; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct pt_config*) ;
 int FUNC_2 (int *,struct pt_config*) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct test_fixture *VAR_0)
{
 struct pt_config *VAR_1;
 uint8_t *VAR_2;
 int VAR_3;

 VAR_1 = &VAR_0->config;
 VAR_2 = VAR_0->buffer;

 FUNC_0(VAR_2, 0, sizeof(VAR_0->buffer));

 FUNC_1(VAR_1);
 VAR_1->begin = VAR_2;
 VAR_1->end = VAR_2 + sizeof(VAR_0->buffer);

 VAR_3 = FUNC_2(&VAR_0->decoder, VAR_1);
 FUNC_3(VAR_3, 0);

 return FUNC_4();
}
