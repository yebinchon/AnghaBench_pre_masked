
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;
typedef int s64 ;
typedef int cpuset_filetype_t ;


 int VAR_0 ;
 int VAR_1 ;

 struct cpuset* FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct cpuset*,int ) ;

__attribute__((used)) static int FUNC_4(struct cgroup *VAR_2, struct cftype *VAR_3, s64 VAR_4)
{
 int VAR_5 = 0;
 struct cpuset *VAR_6 = FUNC_0(VAR_2);
 cpuset_filetype_t VAR_7 = VAR_3->private;

 if (!FUNC_1(VAR_2))
  return -VAR_1;

 switch (VAR_7) {
 case 128:
  VAR_5 = FUNC_3(VAR_6, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_2();
 return VAR_5;
}
