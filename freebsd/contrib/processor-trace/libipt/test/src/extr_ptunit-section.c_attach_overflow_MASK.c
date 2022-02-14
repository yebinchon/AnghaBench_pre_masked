
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct section_fixture {TYPE_1__* section; int name; } ;
struct ptunit_result {int dummy; } ;
struct pt_image_section_cache {int dummy; } ;
struct TYPE_4__ {scalar_t__ acount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,struct pt_image_section_cache*) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct section_fixture *VAR_2)
{
 struct pt_image_section_cache VAR_3;
 uint8_t VAR_4[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_5;

 FUNC_5(VAR_2, VAR_4);

 VAR_5 = FUNC_0(&VAR_2->section, VAR_2->name, 0x1ull, 0x3ull);
 FUNC_2(VAR_5, 0);
 FUNC_4(VAR_2->section);

 VAR_2->section->acount = VAR_0;

 VAR_5 = FUNC_1(VAR_2->section, &VAR_3);
 FUNC_2(VAR_5, -VAR_1);

 VAR_2->section->acount = 0;

 return FUNC_3();
}
