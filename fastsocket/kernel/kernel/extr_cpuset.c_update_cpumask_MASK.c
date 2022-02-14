
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_heap {int dummy; } ;
struct cpuset {int cpus_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ptr_heap*) ;
 int FUNC_7 (struct ptr_heap*,int ,int ,int *) ;
 int FUNC_8 (struct cpuset*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct cpuset VAR_6 ;
 int FUNC_11 (struct cpuset*,struct ptr_heap*) ;
 int FUNC_12 (struct cpuset*,struct cpuset*) ;

__attribute__((used)) static int FUNC_13(struct cpuset *VAR_7, struct cpuset *VAR_8,
     const char *VAR_9)
{
 struct ptr_heap VAR_10;
 int VAR_11;
 int VAR_12;


 if (VAR_7 == &VAR_6)
  return -VAR_0;







 if (!*VAR_9) {
  FUNC_2(VAR_8->cpus_allowed);
 } else {
  VAR_11 = FUNC_1(VAR_9, VAR_8->cpus_allowed);
  if (VAR_11 < 0)
   return VAR_11;

  if (!FUNC_5(VAR_8->cpus_allowed, VAR_5))
   return -VAR_1;
 }
 VAR_11 = FUNC_12(VAR_7, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;


 if (FUNC_4(VAR_7->cpus_allowed, VAR_8->cpus_allowed))
  return 0;

 VAR_11 = FUNC_7(&VAR_10, VAR_3, VAR_2, ((void*)0));
 if (VAR_11)
  return VAR_11;

 VAR_12 = FUNC_8(VAR_8);

 FUNC_9(&VAR_4);
 FUNC_3(VAR_7->cpus_allowed, VAR_8->cpus_allowed);
 FUNC_10(&VAR_4);





 FUNC_11(VAR_7, &VAR_10);

 FUNC_6(&VAR_10);

 if (VAR_12)
  FUNC_0();
 return 0;
}
