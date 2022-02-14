
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int dummy; } ;
struct cftype {int private; } ;


 int FUNC_0 (struct cgroup*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cgroup *VAR_1, struct cftype *VAR_2,
      const char *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_1(FUNC_0(VAR_1),
      VAR_2->private, VAR_3);
 FUNC_3(&VAR_0);
 return VAR_4;
}
