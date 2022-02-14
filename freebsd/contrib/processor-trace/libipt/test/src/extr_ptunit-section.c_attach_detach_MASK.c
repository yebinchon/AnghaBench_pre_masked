
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct section_fixture {TYPE_1__* section; int name; } ;
struct ptunit_result {int dummy; } ;
struct pt_image_section_cache {int dummy; } ;
struct TYPE_5__ {int ucount; } ;


 int FUNC_0 (TYPE_1__**,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,struct pt_image_section_cache*) ;
 int FUNC_2 (TYPE_1__*,struct pt_image_section_cache*) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct section_fixture *VAR_0)
{
 struct pt_image_section_cache VAR_1;
 uint8_t VAR_2[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_3;

 FUNC_6(VAR_0, VAR_2);

 VAR_3 = FUNC_0(&VAR_0->section, VAR_0->name, 0x1ull, 0x3ull);
 FUNC_3(VAR_3, 0);
 FUNC_5(VAR_0->section);

 VAR_0->section->ucount += 2;

 VAR_3 = FUNC_1(VAR_0->section, &VAR_1);
 FUNC_3(VAR_3, 0);

 VAR_3 = FUNC_1(VAR_0->section, &VAR_1);
 FUNC_3(VAR_3, 0);

 VAR_3 = FUNC_2(VAR_0->section, &VAR_1);
 FUNC_3(VAR_3, 0);

 VAR_3 = FUNC_2(VAR_0->section, &VAR_1);
 FUNC_3(VAR_3, 0);

 VAR_0->section->ucount -= 2;

 return FUNC_4();
}
