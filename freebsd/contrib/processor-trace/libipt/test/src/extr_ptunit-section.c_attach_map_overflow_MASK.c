
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct section_fixture {TYPE_1__* section; int name; } ;
struct ptunit_result {int dummy; } ;
struct pt_image_section_cache {int map; } ;
struct TYPE_6__ {scalar_t__ mcount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,struct pt_image_section_cache*) ;
 int FUNC_2 (TYPE_1__*,struct pt_image_section_cache*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_8(struct section_fixture *VAR_2)
{
 struct pt_image_section_cache VAR_3;
 uint8_t VAR_4[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_5;

 VAR_3.map = 1;

 FUNC_7(VAR_2, VAR_4);

 VAR_5 = FUNC_0(&VAR_2->section, VAR_2->name, 0x1ull, 0x3ull);
 FUNC_4(VAR_5, 0);
 FUNC_6(VAR_2->section);

 VAR_5 = FUNC_1(VAR_2->section, &VAR_3);
 FUNC_4(VAR_5, 0);

 VAR_2->section->mcount = VAR_0 - 1;

 VAR_5 = FUNC_3(VAR_2->section);
 FUNC_4(VAR_5, -VAR_1);

 VAR_5 = FUNC_2(VAR_2->section, &VAR_3);
 FUNC_4(VAR_5, 0);

 return FUNC_5();
}
