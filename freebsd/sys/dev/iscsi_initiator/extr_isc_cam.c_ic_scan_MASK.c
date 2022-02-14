
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* spriv_ptr0; int cbfcnp; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_6__ {scalar_t__ sid; int flags; scalar_t__ target_nluns; int cam_path; } ;
typedef TYPE_2__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int) ;
 union ccb* FUNC_3 () ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static int
FUNC_5(isc_session_t *VAR_6)
{
     union ccb *VAR_7;

     FUNC_0(8);
     FUNC_1(2, "scanning sid=%d", VAR_6->sid);

     VAR_6->flags &= ~VAR_1;
     VAR_6->flags |= VAR_2;

     VAR_7 = FUNC_3();
     VAR_7->ccb_h.path = VAR_6->cam_path;
     VAR_7->ccb_h.cbfcnp = VAR_5;
     VAR_7->ccb_h.spriv_ptr0 = VAR_6;

     FUNC_4(VAR_7);

     while(VAR_6->flags & VAR_2)
   FUNC_2(VAR_6, VAR_3, "ffp", 5*VAR_4);

     FUNC_1(2, "# of luns=%d", VAR_6->target_nluns);

     if(VAR_6->target_nluns > 0) {
   VAR_6->flags |= VAR_1;
   return 0;
     }

     return VAR_0;
}
