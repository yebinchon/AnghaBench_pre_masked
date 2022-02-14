
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_section {int ucount; int mcount; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;
struct ifix_status {int deleted; int bad_put; } ;
struct ifix_mapping {int dummy; } ;


 int FUNC_0 (struct pt_section*,int *,struct ifix_status*,struct ifix_mapping*,int *) ;
 int FUNC_1 (struct pt_asid*) ;
 int FUNC_2 (struct pt_image*,struct pt_section*,struct pt_asid*,int,int ) ;
 int FUNC_3 (struct pt_image*) ;
 int FUNC_4 (struct pt_image*,int *) ;
 int FUNC_5 (int,int) ;
 struct ptunit_result FUNC_6 () ;

__attribute__((used)) static struct ptunit_result FUNC_7(void)
{
 struct ifix_mapping VAR_0;
 struct ifix_status VAR_1;
 struct pt_section VAR_2;
 struct pt_image VAR_3;
 struct pt_asid VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4);
 FUNC_0(&VAR_2, ((void*)0), &VAR_1, &VAR_0, ((void*)0));

 FUNC_4(&VAR_3, ((void*)0));
 VAR_5 = FUNC_2(&VAR_3, &VAR_2, &VAR_4, 0x0ull, 0);
 FUNC_5(VAR_5, 0);

 FUNC_3(&VAR_3);
 FUNC_5(VAR_2.ucount, 0);
 FUNC_5(VAR_2.mcount, 0);
 FUNC_5(VAR_1.deleted, 1);
 FUNC_5(VAR_1.bad_put, 0);

 return FUNC_6();
}
