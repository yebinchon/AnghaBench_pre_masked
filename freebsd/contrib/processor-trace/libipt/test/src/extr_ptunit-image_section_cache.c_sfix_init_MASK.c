
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_2__ {int limit; } ;
struct iscache_fixture {int * section; TYPE_1__ iscache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned long long) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,struct iscache_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct iscache_fixture *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_3(VAR_0, VAR_2);

 VAR_2->iscache.limit = 0x7800;

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  VAR_3 = FUNC_0(&VAR_2->iscache, VAR_2->section[VAR_4],
     0ull);
  FUNC_1(VAR_3, 0);
 }

 return FUNC_2();
}
