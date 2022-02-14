
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_session {int dummy; } ;
struct fst_group {int ifaces; int global_groups_lentry; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct fst_group*) ;
 int FUNC_4 (struct fst_group*,int ,char*) ;
 int FUNC_5 (struct fst_session*) ;
 struct fst_session* FUNC_6 (struct fst_group*) ;
 int VAR_1 ;
 int FUNC_7 (struct fst_group*) ;

void FUNC_8(struct fst_group *VAR_2)
{
 struct fst_session *VAR_3;

 FUNC_1(&VAR_2->global_groups_lentry);
 FUNC_0(FUNC_2(&VAR_2->ifaces));
 FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_2, VAR_0, "instance deleted");
 while ((VAR_3 = FUNC_6(VAR_2)) != ((void*)0))
  FUNC_5(VAR_3);
 FUNC_7(VAR_2);
}
