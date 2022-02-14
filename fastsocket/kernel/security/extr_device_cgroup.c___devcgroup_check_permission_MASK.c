
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dev_exception_item {short type; short access; void* minor; void* major; } ;
struct dev_cgroup {int dummy; } ;
typedef int ex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dev_cgroup*,struct dev_exception_item*) ;
 int FUNC_1 (struct dev_exception_item*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct dev_cgroup* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(short VAR_2, u32 VAR_3, u32 VAR_4,
            short VAR_5)
{
 struct dev_cgroup *VAR_6;
 struct dev_exception_item VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.type = VAR_2;
 VAR_7.major = VAR_3;
 VAR_7.minor = VAR_4;
 VAR_7.access = VAR_5;

 FUNC_2();
 VAR_6 = FUNC_4(VAR_1);
 VAR_8 = FUNC_0(VAR_6, &VAR_7);
 FUNC_3();

 if (!VAR_8)
  return -VAR_0;

 return 0;
}
