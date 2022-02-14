
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct section_fixture {TYPE_1__* section; int name; } ;
struct ptunit_result {int dummy; } ;
struct pt_bcache_entry {int dummy; } ;
struct TYPE_7__ {int size; } ;


 int FUNC_0 (TYPE_1__**,int ,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int ) ;
 struct ptunit_result FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_10(struct section_fixture *VAR_0)
{
 uint64_t VAR_1;
 uint8_t VAR_2[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_3;

 FUNC_9(VAR_0, VAR_2);

 VAR_3 = FUNC_0(&VAR_0->section, VAR_0->name, 0x1ull, 0x3ull);
 FUNC_5(VAR_3, 0);
 FUNC_7(VAR_0->section);

 VAR_3 = FUNC_2(VAR_0->section);
 FUNC_5(VAR_3, 0);

 VAR_3 = FUNC_1(VAR_0->section);
 FUNC_5(VAR_3, 0);

 VAR_3 = FUNC_3(VAR_0->section, &VAR_1);
 FUNC_5(VAR_3, 0);
 FUNC_8(VAR_1,
      VAR_0->section->size * sizeof(struct pt_bcache_entry));

 VAR_3 = FUNC_4(VAR_0->section);
 FUNC_5(VAR_3, 0);

 return FUNC_6();
}
