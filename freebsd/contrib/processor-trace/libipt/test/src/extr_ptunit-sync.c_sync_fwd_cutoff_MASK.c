
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int begin; int end; } ;
struct sync_fixture {TYPE_1__ config; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int const**,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct sync_fixture *VAR_2)
{
 const uint8_t *VAR_3;
 int VAR_4;

 FUNC_3(VAR_2->config.begin);
 FUNC_3(VAR_2->config.end - VAR_1);
 VAR_2->config.begin += 1;
 VAR_2->config.end -= 1;

 VAR_4 = FUNC_0(&VAR_3, VAR_2->config.begin, &VAR_2->config);
 FUNC_1(VAR_4, -VAR_0);

 return FUNC_2();
}
