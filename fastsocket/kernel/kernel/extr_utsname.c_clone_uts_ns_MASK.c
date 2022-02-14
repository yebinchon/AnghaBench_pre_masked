
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uts_namespace {int name; int proc_inum; } ;


 int VAR_0 ;
 struct uts_namespace* FUNC_0 (int) ;
 struct uts_namespace* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uts_namespace*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct uts_namespace *FUNC_7(struct uts_namespace *VAR_2)
{
 struct uts_namespace *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_5(&VAR_3->proc_inum);
 if (VAR_4) {
  FUNC_3(VAR_3);
  return FUNC_0(VAR_4);
 }

 FUNC_2(&VAR_1);
 FUNC_4(&VAR_3->name, &VAR_2->name, sizeof(VAR_3->name));
 FUNC_6(&VAR_1);
 return VAR_3;
}
