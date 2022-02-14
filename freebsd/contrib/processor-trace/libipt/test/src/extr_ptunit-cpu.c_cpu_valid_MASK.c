
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_cpu {int vendor; int stepping; int model; int family; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_cpu*,char*) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_cpu VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1, "6/44/2");
 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_1.vendor, VAR_0);
 FUNC_3(VAR_1.family, 6);
 FUNC_3(VAR_1.model, 44);
 FUNC_3(VAR_1.stepping, 2);

 VAR_2 = FUNC_0(&VAR_1, "0xf/0x2c/0xf");
 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_1.vendor, VAR_0);
 FUNC_3(VAR_1.family, 0xf);
 FUNC_3(VAR_1.model, 0x2c);
 FUNC_3(VAR_1.stepping, 0xf);

 VAR_2 = FUNC_0(&VAR_1, "022/054/017");
 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_1.vendor, VAR_0);
 FUNC_3(VAR_1.family, 022);
 FUNC_3(VAR_1.model, 054);
 FUNC_3(VAR_1.stepping, 017);

 VAR_2 = FUNC_0(&VAR_1, "6/44");
 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_1.vendor, VAR_0);
 FUNC_3(VAR_1.family, 6);
 FUNC_3(VAR_1.model, 44);
 FUNC_3(VAR_1.stepping, 0);

 return FUNC_2();
}
