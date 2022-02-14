
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section_fixture {int file; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int const*,int,size_t,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (size_t,size_t) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct section_fixture *VAR_0,
        const uint8_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_1(VAR_1, 1, VAR_2, VAR_0->file);
 FUNC_3(VAR_3, VAR_2);

 FUNC_0(VAR_0->file);

 return FUNC_2();
}
