
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int llt_ms; } ;
struct fst_session {int global_sessions_lentry; scalar_t__ id; TYPE_1__ data; int state; struct fst_group* group; } ;
struct fst_group {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct fst_session*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 struct fst_session* FUNC_4 (int) ;

struct fst_session * FUNC_5(struct fst_group *VAR_7)
{
 struct fst_session *VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_2();
 if (VAR_9 == VAR_0) {
  FUNC_3(VAR_3, "Cannot assign new session ID");
  return ((void*)0);
 }

 VAR_8 = FUNC_4(sizeof(*VAR_8));
 if (!VAR_8) {
  FUNC_3(VAR_3, "Cannot allocate new session object");
  return ((void*)0);
 }

 VAR_8->id = VAR_9;
 VAR_8->group = VAR_7;
 VAR_8->state = VAR_2;

 VAR_8->data.llt_ms = VAR_1;

 FUNC_3(VAR_4, "Session %u created", VAR_8->id);

 FUNC_0(&VAR_5, &VAR_8->global_sessions_lentry);

 FUNC_1(VAR_6, VAR_8);

 return VAR_8;
}
