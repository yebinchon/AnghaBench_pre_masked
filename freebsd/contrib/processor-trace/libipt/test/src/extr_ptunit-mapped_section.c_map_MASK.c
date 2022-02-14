
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_mapped_section {int dummy; } ;


 int FUNC_0 (struct pt_mapped_section*,int *,int *,int,int,int) ;
 int FUNC_1 (struct pt_mapped_section*,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_mapped_section VAR_0;
 uint64_t VAR_1;

 FUNC_0(&VAR_0, ((void*)0), ((void*)0), 0x2000ull, 0x100ull, 0x1000ull);

 VAR_1 = FUNC_1(&VAR_0, 0x900);
 FUNC_3(VAR_1, 0x2800);

 return FUNC_2();
}
