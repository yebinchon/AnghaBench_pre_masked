
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_config {int * end; int * begin; } ;


 int * VAR_0 ;
 int FUNC_0 (struct pt_config*,struct pt_config*) ;
 int FUNC_1 (struct pt_config*) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_config VAR_2, VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3);

 VAR_4 = FUNC_0(&VAR_2, &VAR_3);
 FUNC_2(VAR_4, -VAR_1);

 VAR_3.begin = VAR_0;

 VAR_4 = FUNC_0(&VAR_2, &VAR_3);
 FUNC_2(VAR_4, -VAR_1);

 VAR_3.begin = ((void*)0);
 VAR_3.end = VAR_0;

 VAR_4 = FUNC_0(&VAR_2, &VAR_3);
 FUNC_2(VAR_4, -VAR_1);

 VAR_3.begin = &VAR_0[1];
 VAR_3.end = VAR_0;

 VAR_4 = FUNC_0(&VAR_2, &VAR_3);
 FUNC_2(VAR_4, -VAR_1);

 return FUNC_3();
}
