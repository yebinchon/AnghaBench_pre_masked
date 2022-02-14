
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct iscache_fixture {int iscache; int * section; } ;
typedef int buffer ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int*,int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct iscache_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0xcc };
 int VAR_2, VAR_3;

 VAR_3 = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0xa000ull);
 FUNC_3(VAR_3, 0);

 VAR_2 = FUNC_1(&VAR_0->iscache, VAR_1, sizeof(VAR_1), VAR_3,
     0xa00full);
 FUNC_2(VAR_2, 1);
 FUNC_5(VAR_1[0], 0xf);
 FUNC_5(VAR_1[1], 0xcc);

 return FUNC_4();
}
