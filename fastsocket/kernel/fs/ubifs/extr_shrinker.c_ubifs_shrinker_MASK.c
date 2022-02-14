
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,int*) ;
 int VAR_2 ;

int FUNC_4(struct shrinker *VAR_3, int VAR_4, gfp_t VAR_5)
{
 int VAR_6, VAR_7 = 0;
 long VAR_8 = FUNC_0(&VAR_2);

 if (VAR_4 == 0)
  return VAR_8;

 if (!VAR_8) {







  FUNC_1("no clean znodes, kick a thread");
  return FUNC_2();
 }

 VAR_6 = FUNC_3(VAR_4, VAR_0, &VAR_7);
 if (VAR_6 >= VAR_4)
  goto out;

 FUNC_1("not enough old znodes, try to free young ones");
 VAR_6 += FUNC_3(VAR_4 - VAR_6, VAR_1, &VAR_7);
 if (VAR_6 >= VAR_4)
  goto out;

 FUNC_1("not enough young znodes, free all");
 VAR_6 += FUNC_3(VAR_4 - VAR_6, 0, &VAR_7);

 if (!VAR_6 && VAR_7) {
  FUNC_1("freed nothing, but contention");
  return -1;
 }

out:
 FUNC_1("%d znodes were freed, requested %d", VAR_6, VAR_4);
 return VAR_6;
}
