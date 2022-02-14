
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct cpuset* FUNC_0 (struct cpuset*) ;
 struct cpuset* FUNC_1 (struct cgroup*) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cpuset*) ;
 int FUNC_5 (struct cpuset*,struct cpuset*,char const*) ;
 int FUNC_6 (struct cpuset*,struct cpuset*,char const*) ;

__attribute__((used)) static int FUNC_7(struct cgroup *VAR_3, struct cftype *VAR_4,
    const char *VAR_5)
{
 int VAR_6 = 0;
 struct cpuset *VAR_7 = FUNC_1(VAR_3);
 struct cpuset *VAR_8;

 if (!FUNC_2(VAR_3))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8) {
  VAR_6 = -VAR_2;
  goto out;
 }

 switch (VAR_4->private) {
 case 129:
  VAR_6 = FUNC_5(VAR_7, VAR_8, VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_6(VAR_7, VAR_8, VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 FUNC_4(VAR_8);
out:
 FUNC_3();
 return VAR_6;
}
