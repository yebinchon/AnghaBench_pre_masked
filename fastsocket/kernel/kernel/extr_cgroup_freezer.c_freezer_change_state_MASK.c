
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freezer {int state; int lock; } ;
struct cgroup {int dummy; } ;
typedef enum freezer_state { ____Placeholder_freezer_state } freezer_state ;


 int FUNC_0 () ;


 struct freezer* FUNC_1 (struct cgroup*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cgroup*,struct freezer*) ;
 int FUNC_5 (struct cgroup*,struct freezer*) ;
 int FUNC_6 (struct cgroup*,struct freezer*) ;

__attribute__((used)) static int FUNC_7(struct cgroup *VAR_0,
    enum freezer_state VAR_1)
{
 struct freezer *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->lock);

 FUNC_6(VAR_0, VAR_2);
 if (VAR_1 == VAR_2->state)
  goto out;

 switch (VAR_1) {
 case 128:
  FUNC_5(VAR_0, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_4(VAR_0, VAR_2);
  break;
 default:
  FUNC_0();
 }
out:
 FUNC_3(&VAR_2->lock);

 return VAR_3;
}
