
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_session {int global_sessions_lentry; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct fst_session*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct fst_session*) ;

void FUNC_4(struct fst_session *VAR_2)
{
 FUNC_2(VAR_0, "Session %u deleted", VAR_2->id);
 FUNC_0(&VAR_2->global_sessions_lentry);
 FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_2);
}
