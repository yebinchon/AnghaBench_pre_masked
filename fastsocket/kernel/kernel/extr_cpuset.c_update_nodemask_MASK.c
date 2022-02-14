
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_heap {int dummy; } ;
struct cpuset {int mems_allowed; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ptr_heap*) ;
 int FUNC_1 (struct ptr_heap*,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_6 ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 struct cpuset VAR_7 ;
 int FUNC_8 (struct cpuset*,int *,struct ptr_heap*) ;
 int FUNC_9 (struct cpuset*,struct cpuset*) ;

__attribute__((used)) static int FUNC_10(struct cpuset *VAR_8, struct cpuset *VAR_9,
      const char *VAR_10)
{
 nodemask_t VAR_11;
 int VAR_12;
 struct ptr_heap VAR_13;





 if (VAR_8 == &VAR_7)
  return -VAR_0;







 if (!*VAR_10) {
  FUNC_5(VAR_9->mems_allowed);
 } else {
  VAR_12 = FUNC_4(VAR_10, VAR_9->mems_allowed);
  if (VAR_12 < 0)
   goto done;

  if (!FUNC_7(VAR_9->mems_allowed,
    VAR_6[VAR_3]))
   return -VAR_1;
 }
 VAR_11 = VAR_8->mems_allowed;
 if (FUNC_6(VAR_11, VAR_9->mems_allowed)) {
  VAR_12 = 0;
  goto done;
 }
 VAR_12 = FUNC_9(VAR_8, VAR_9);
 if (VAR_12 < 0)
  goto done;

 VAR_12 = FUNC_1(&VAR_13, VAR_4, VAR_2, ((void*)0));
 if (VAR_12 < 0)
  goto done;

 FUNC_2(&VAR_5);
 VAR_8->mems_allowed = VAR_9->mems_allowed;
 FUNC_3(&VAR_5);

 FUNC_8(VAR_8, &VAR_11, &VAR_13);

 FUNC_0(&VAR_13);
done:
 return VAR_12;
}
