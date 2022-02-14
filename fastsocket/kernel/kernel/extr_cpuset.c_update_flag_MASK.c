
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_heap {int dummy; } ;
struct cpuset {int cpus_allowed; int flags; } ;
typedef int cpuset_flagbits_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpuset* FUNC_0 (struct cpuset*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cpuset*) ;
 int FUNC_5 (struct ptr_heap*) ;
 int FUNC_6 (struct ptr_heap*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (struct cpuset*) ;
 scalar_t__ FUNC_8 (struct cpuset*) ;
 scalar_t__ FUNC_9 (struct cpuset*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct cpuset*,struct ptr_heap*) ;
 int FUNC_14 (struct cpuset*,struct cpuset*) ;

__attribute__((used)) static int FUNC_15(cpuset_flagbits_t VAR_4, struct cpuset *VAR_5,
         int VAR_6)
{
 struct cpuset *VAR_7;
 int VAR_8;
 int VAR_9;
 struct ptr_heap VAR_10;
 int VAR_11;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_6)
  FUNC_12(VAR_4, &VAR_7->flags);
 else
  FUNC_2(VAR_4, &VAR_7->flags);

 VAR_11 = FUNC_14(VAR_5, VAR_7);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_6(&VAR_10, VAR_2, VAR_1, ((void*)0));
 if (VAR_11 < 0)
  goto out;

 VAR_8 = (FUNC_7(VAR_5) !=
    FUNC_7(VAR_7));

 VAR_9 = ((FUNC_9(VAR_5) != FUNC_9(VAR_7))
   || (FUNC_8(VAR_5) != FUNC_8(VAR_7)));

 FUNC_10(&VAR_3);
 VAR_5->flags = VAR_7->flags;
 FUNC_11(&VAR_3);

 if (!FUNC_3(VAR_7->cpus_allowed) && VAR_8)
  FUNC_1();

 if (VAR_9)
  FUNC_13(VAR_5, &VAR_10);
 FUNC_5(&VAR_10);
out:
 FUNC_4(VAR_7);
 return VAR_11;
}
