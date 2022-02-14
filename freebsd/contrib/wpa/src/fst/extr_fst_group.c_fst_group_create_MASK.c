
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_group {int global_groups_lentry; int group_id; int ifaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct fst_group*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (struct fst_group*,int ,char*) ;
 int VAR_3 ;
 int FUNC_5 (int ,char const*,int) ;
 struct fst_group* FUNC_6 (int) ;

struct fst_group * FUNC_7(const char *VAR_4)
{
 struct fst_group *VAR_5;

 VAR_5 = FUNC_6(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_1, "%s: Cannot alloc group", VAR_4);
  return ((void*)0);
 }

 FUNC_1(&VAR_5->ifaces);
 FUNC_5(VAR_5->group_id, VAR_4, sizeof(VAR_5->group_id));

 FUNC_0(&VAR_2, &VAR_5->global_groups_lentry);
 FUNC_4(VAR_5, VAR_0, "instance created");

 FUNC_2(VAR_3, VAR_5);

 return VAR_5;
}
