
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_fixture {int name; int section; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct section_fixture *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->section, VAR_1->name, 0x10ull, 0x0ull);
 FUNC_1(VAR_2, -VAR_0);

 return FUNC_2();
}
