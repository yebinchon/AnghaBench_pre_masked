
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_cpu {int dummy; } ;


 int FUNC_0 (struct pt_cpu*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(void)
{
 struct pt_cpu VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1, "e/44/2");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "6/e/2");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "6/44/e");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "65536/44/2");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "6/256/2");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "6/44/256");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "-1/44/2");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "6/-1/2");
 FUNC_1(VAR_2, -VAR_0);

 VAR_2 = FUNC_0(&VAR_1, "6/44/-1");
 FUNC_1(VAR_2, -VAR_0);

 return FUNC_2();
}
