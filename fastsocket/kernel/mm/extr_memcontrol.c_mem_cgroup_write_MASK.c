
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int res; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int VAR_1 ;
 struct mem_cgroup* FUNC_2 (struct cgroup*) ;
 int FUNC_3 (struct mem_cgroup*) ;
 int FUNC_4 (struct mem_cgroup*,unsigned long long) ;
 int FUNC_5 (struct mem_cgroup*,unsigned long long) ;
 int FUNC_6 (char const*,unsigned long long*) ;
 int FUNC_7 (int *,unsigned long long) ;

__attribute__((used)) static int FUNC_8(struct cgroup *VAR_2, struct cftype *VAR_3,
       const char *VAR_4)
{
 struct mem_cgroup *VAR_5 = FUNC_2(VAR_2);
 int VAR_6, VAR_7;
 unsigned long long VAR_8;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_3->private);
 VAR_7 = FUNC_0(VAR_3->private);
 switch (VAR_7) {
 case 129:
  if (FUNC_3(VAR_5)) {
   VAR_9 = -VAR_0;
   break;
  }

  VAR_9 = FUNC_6(VAR_4, &VAR_8);
  if (VAR_9)
   break;
  if (VAR_6 == VAR_1)
   VAR_9 = FUNC_4(VAR_5, VAR_8);
  else
   VAR_9 = FUNC_5(VAR_5, VAR_8);
  break;
 case 128:
  VAR_9 = FUNC_6(VAR_4, &VAR_8);
  if (VAR_9)
   break;





  if (VAR_6 == VAR_1)
   VAR_9 = FUNC_7(&VAR_5->res, VAR_8);
  else
   VAR_9 = -VAR_0;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
 return VAR_9;
}
