
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_section {int dummy; } ;
struct iscache_fixture {struct pt_section** section; int thrd; } ;


 int FUNC_0 (struct pt_section**,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct pt_section**,char*,int,int) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (struct pt_section*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct iscache_fixture *VAR_2)
{
 int VAR_3;

 FUNC_5(VAR_1, &VAR_2->thrd);

 FUNC_0(VAR_2->section, 0, sizeof(VAR_2->section));

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  struct pt_section *VAR_4;
  int VAR_5;

  VAR_5 = FUNC_1(&VAR_4, "some-filename",
     VAR_3 % 3 == 0 ? 0x1000 : 0x2000,
     VAR_3 % 2 == 0 ? 0x1000 : 0x2000);
  FUNC_2(VAR_5, 0);
  FUNC_4(VAR_4);

  VAR_2->section[VAR_3] = VAR_4;
 }

 return FUNC_3();
}
