
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct iscache_fixture {int iscache; int * section; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int*,unsigned long long,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct iscache_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xcc };
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(&VAR_1->iscache, VAR_1->section[0], 0xa000ull);
 FUNC_3(VAR_4, 0);

 VAR_3 = FUNC_1(&VAR_1->iscache, VAR_2, 1ull, VAR_4 + 1,
     0xa000ull);
 FUNC_2(VAR_3, -VAR_0);
 FUNC_5(VAR_2[0], 0xcc);

 return FUNC_4();
}
