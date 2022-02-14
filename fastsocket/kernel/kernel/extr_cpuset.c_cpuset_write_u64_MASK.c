
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuset {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;
typedef int cpuset_filetype_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct cpuset* FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 int FUNC_2 () ;
 int VAR_10 ;
 int FUNC_3 (int ,struct cpuset*,int ) ;

__attribute__((used)) static int FUNC_4(struct cgroup *VAR_11, struct cftype *VAR_12, u64 VAR_13)
{
 int VAR_14 = 0;
 struct cpuset *VAR_15 = FUNC_0(VAR_11);
 cpuset_filetype_t VAR_16 = VAR_12->private;

 if (!FUNC_1(VAR_11))
  return -VAR_9;

 switch (VAR_16) {
 case 136:
  VAR_14 = FUNC_3(VAR_0, VAR_15, VAR_13);
  break;
 case 132:
  VAR_14 = FUNC_3(VAR_2, VAR_15, VAR_13);
  break;
 case 131:
  VAR_14 = FUNC_3(VAR_3, VAR_15, VAR_13);
  break;
 case 130:
  VAR_14 = FUNC_3(VAR_4, VAR_15, VAR_13);
  break;
 case 135:
  VAR_14 = FUNC_3(VAR_1, VAR_15, VAR_13);
  break;
 case 133:
  VAR_10 = !!VAR_13;
  break;
 case 134:
  VAR_14 = -VAR_7;
  break;
 case 129:
  VAR_14 = FUNC_3(VAR_5, VAR_15, VAR_13);
  break;
 case 128:
  VAR_14 = FUNC_3(VAR_6, VAR_15, VAR_13);
  break;
 default:
  VAR_14 = -VAR_8;
  break;
 }
 FUNC_2();
 return VAR_14;
}
