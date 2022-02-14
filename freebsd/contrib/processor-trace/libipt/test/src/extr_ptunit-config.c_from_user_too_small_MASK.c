
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_config {int size; } ;


 int FUNC_0 (struct pt_config*,struct pt_config*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(void)
{
 struct pt_config VAR_1, VAR_2;
 int VAR_3;

 VAR_2.size = sizeof(VAR_1.size);

 VAR_3 = FUNC_0(&VAR_1, &VAR_2);
 FUNC_1(VAR_3, -VAR_0);

 return FUNC_2();
}
