
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cam_path; int cam_mtx; } ;
typedef TYPE_1__ isc_session_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(isc_session_t *VAR_1, int VAR_2)
{
     FUNC_0(8);
     FUNC_3(2, "lost target=%d", VAR_2);

     if(VAR_1->cam_path != ((void*)0)) {
   FUNC_1(&VAR_1->cam_mtx);
   FUNC_4(VAR_0, VAR_1->cam_path, ((void*)0));
   FUNC_5(VAR_1->cam_path);
   FUNC_2(&VAR_1->cam_mtx);
   VAR_1->cam_path = 0;
     }
}
