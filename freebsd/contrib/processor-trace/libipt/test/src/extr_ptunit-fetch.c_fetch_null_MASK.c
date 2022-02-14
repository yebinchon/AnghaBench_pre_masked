
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct pt_decoder_function {int dummy; } ;
struct TYPE_2__ {int * begin; } ;
struct fetch_fixture {TYPE_1__ config; } ;


 int FUNC_0 (struct pt_decoder_function const**,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct fetch_fixture *VAR_2)
{
 const struct pt_decoder_function *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(((void*)0), VAR_2->config.begin, &VAR_2->config);
 FUNC_1(VAR_4, -VAR_0);

 VAR_4 = FUNC_0(&VAR_3, ((void*)0), &VAR_2->config);
 FUNC_1(VAR_4, -VAR_1);

 VAR_4 = FUNC_0(&VAR_3, VAR_2->config.begin, ((void*)0));
 FUNC_1(VAR_4, -VAR_0);

 return FUNC_2();
}
