
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct cam_sim {int dummy; } ;
struct TYPE_3__ {int cam_mtx; } ;
typedef TYPE_1__ isc_session_t ;


 TYPE_1__* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cam_sim*,union ccb*) ;

__attribute__((used)) static __inline int
FUNC_4(struct cam_sim *VAR_0, union ccb *VAR_1)
{
     int VAR_2;


     VAR_2 = FUNC_3(VAR_0, VAR_1);







     return VAR_2;
}
