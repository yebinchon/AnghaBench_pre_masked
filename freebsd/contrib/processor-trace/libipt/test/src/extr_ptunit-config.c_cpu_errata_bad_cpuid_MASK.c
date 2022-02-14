
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_errata {int dummy; } ;
struct pt_cpu {int family; int model; int vendor; } ;
typedef int cpu ;


 int FUNC_0 (struct pt_cpu*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct pt_errata*,struct pt_cpu*) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_errata VAR_2;
 struct pt_cpu VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.vendor = VAR_0;
 VAR_3.family = 6;
 VAR_3.model = 63;

 VAR_4 = FUNC_1(&VAR_2, &VAR_3);
 FUNC_2(VAR_4, -VAR_1);

 return FUNC_3();
}
