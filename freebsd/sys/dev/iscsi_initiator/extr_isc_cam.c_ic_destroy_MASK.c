
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cam_sim; int * cam_path; } ;
typedef TYPE_1__ isc_session_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void
FUNC_11(isc_session_t *VAR_3 )
{
     FUNC_6(8);

     if(VAR_3->cam_path != ((void*)0)) {
   FUNC_7(2, "name=%s unit=%d",
   FUNC_3(VAR_3->cam_sim), FUNC_5(VAR_3->cam_sim));
   FUNC_0(VAR_3);



   FUNC_8(VAR_2, VAR_3->cam_path, ((void*)0));

   FUNC_10(VAR_3->cam_path);
   FUNC_9(FUNC_4(VAR_3->cam_sim));
   FUNC_2(VAR_3->cam_sim, VAR_1 );

   FUNC_1(VAR_3);
   FUNC_7(2, "done");
     }
}
