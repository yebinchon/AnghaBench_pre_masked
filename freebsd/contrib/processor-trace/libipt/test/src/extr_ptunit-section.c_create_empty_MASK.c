
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct section_fixture *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->section, VAR_1->name, 0x0ull, 0x10ull);
 FUNC_1(VAR_2, -VAR_0);
 FUNC_2(VAR_1->section);

 return FUNC_3();
}
