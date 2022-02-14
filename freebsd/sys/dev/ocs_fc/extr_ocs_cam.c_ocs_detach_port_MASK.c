
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct TYPE_8__ {int sim_lock; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_9__ {struct cam_sim* sim; struct cam_path* path; int targ_rsrc_wildcard; int ldt; } ;
typedef TYPE_2__ ocs_fcport ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cam_sim*,int ) ;
 int FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int ,struct cam_path*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct cam_path*) ;

__attribute__((used)) static int32_t
FUNC_11(ocs_t *VAR_2, int32_t VAR_3)
{
 ocs_fcport *VAR_4 = ((void*)0);
 struct cam_sim *VAR_5 = ((void*)0);
 struct cam_path *VAR_6 = ((void*)0);
 VAR_4 = FUNC_0(VAR_2, VAR_3);

 VAR_5 = VAR_4->sim;
 VAR_6 = VAR_4->path;

 FUNC_1(&VAR_4->ldt);
 FUNC_6(VAR_4, 0);

 if (VAR_4->sim) {
  FUNC_4(&VAR_2->sim_lock);
   FUNC_7(VAR_2, &VAR_4->targ_rsrc_wildcard);
   if (VAR_6) {
    FUNC_8(VAR_0, VAR_6, ((void*)0));
    FUNC_10(VAR_6);
    VAR_4->path = ((void*)0);
   }
   FUNC_9(FUNC_3(VAR_5));

   FUNC_2(VAR_5, VAR_1);
   VAR_4->sim = ((void*)0);
  FUNC_5(&VAR_2->sim_lock);
 }

 return 0;
}
