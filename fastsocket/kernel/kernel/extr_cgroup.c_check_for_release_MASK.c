
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int release_list; int children; int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cgroup*) ;
 scalar_t__ FUNC_2 (struct cgroup*) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct cgroup *VAR_3)
{


 if (FUNC_2(VAR_3) && !FUNC_0(&VAR_3->count)
     && FUNC_6(&VAR_3->children) && !FUNC_1(VAR_3)) {



  int VAR_4 = 0;
  FUNC_7(&VAR_2);
  if (!FUNC_3(VAR_3) &&
      FUNC_6(&VAR_3->release_list)) {
   FUNC_5(&VAR_3->release_list, &VAR_1);
   VAR_4 = 1;
  }
  FUNC_8(&VAR_2);
  if (VAR_4)
   FUNC_4(&VAR_0);
 }
}
