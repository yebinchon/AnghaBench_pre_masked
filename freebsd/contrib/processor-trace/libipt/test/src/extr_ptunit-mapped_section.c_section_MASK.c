
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_section {int dummy; } ;
struct pt_mapped_section {int dummy; } ;


 int FUNC_0 (struct pt_mapped_section*,struct pt_section*,int *,int,int,int) ;
 struct pt_section* FUNC_1 (struct pt_mapped_section*) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (struct pt_section*,struct pt_section*) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 static struct pt_section VAR_0;
 struct pt_mapped_section VAR_1;
 struct pt_section *VAR_2;

 FUNC_0(&VAR_1, &VAR_0, ((void*)0), 0x2000ull, 0x100ull, 0x1000ull);

 VAR_2 = FUNC_1(&VAR_1);
 FUNC_3(VAR_2, &VAR_0);

 return FUNC_2();
}
