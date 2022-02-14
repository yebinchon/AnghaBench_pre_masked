
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int begin; } ;
struct sync_fixture {TYPE_1__ config; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int const**,int ,TYPE_1__*) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct sync_fixture *VAR_0)
{
 const uint8_t *VAR_1;
 int VAR_2;

 FUNC_4(VAR_0->config.begin);

 VAR_2 = FUNC_0(&VAR_1, VAR_0->config.begin, &VAR_0->config);
 FUNC_1(VAR_2, 0);
 FUNC_3(VAR_1, VAR_0->config.begin);

 return FUNC_2();
}
