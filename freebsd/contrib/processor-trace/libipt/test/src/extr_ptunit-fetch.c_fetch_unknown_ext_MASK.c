
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct pt_decoder_function {int dummy; } ;
struct TYPE_2__ {int * begin; } ;
struct fetch_fixture {TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_decoder_function const**,int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (struct pt_decoder_function const*,int *) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct fetch_fixture *VAR_3)
{
 const struct pt_decoder_function *VAR_4;
 int VAR_5;

 VAR_3->config.begin[0] = VAR_2;
 VAR_3->config.begin[1] = VAR_1;

 VAR_5 = FUNC_0(&VAR_4, VAR_3->config.begin, &VAR_3->config);
 FUNC_1(VAR_5, 0);
 FUNC_3(VAR_4, &VAR_0);

 return FUNC_2();
}
