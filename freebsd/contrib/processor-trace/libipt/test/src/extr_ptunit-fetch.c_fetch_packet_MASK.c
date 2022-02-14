
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct pt_packet {int dummy; } ;
struct pt_decoder_function {int dummy; } ;
struct TYPE_2__ {int begin; } ;
struct fetch_fixture {TYPE_1__ config; int encoder; } ;


 int FUNC_0 (struct pt_decoder_function const**,int ,TYPE_1__*) ;
 int FUNC_1 (int *,struct pt_packet const*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (struct pt_decoder_function const*,struct pt_decoder_function const*) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct fetch_fixture *VAR_0,
      const struct pt_packet *VAR_1,
      const struct pt_decoder_function *VAR_2)
{
 const struct pt_decoder_function *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_0->encoder, VAR_1);
 FUNC_3(VAR_4, 0);

 VAR_4 = FUNC_0(&VAR_3, VAR_0->config.begin, &VAR_0->config);
 FUNC_2(VAR_4, 0);
 FUNC_5(VAR_3, VAR_2);

 return FUNC_4();
}
