
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {size_t target_id; } ;
struct ccb_getdev {TYPE_1__ ccb_h; } ;
struct cam_path {int dummy; } ;
struct agtiapi_softc {TYPE_2__* pDevList; } ;
struct TYPE_4__ {int qdepth; } ;
typedef TYPE_2__ ag_device_t ;
typedef size_t U32 ;



 size_t FUNC_0 (struct agtiapi_softc*,size_t) ;
 int FUNC_1 (struct cam_path*,int ) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, u_int32_t VAR_2,
        struct cam_path *VAR_3, void *VAR_4)
{
 struct agtiapi_softc *VAR_5;
 U32 VAR_6;
 ag_device_t *VAR_7;
 VAR_5 = (struct agtiapi_softc*)VAR_1;
 switch (VAR_2) {
 case 128:
 {
     struct ccb_getdev *VAR_8;
     VAR_8 = (struct ccb_getdev *)VAR_4;
     if (VAR_8 == ((void*)0)) {
  break;
     }
     VAR_6 = VAR_8->ccb_h.target_id;
     if (VAR_6 >= 0 && VAR_6 < VAR_0){
                if (VAR_5 != ((void*)0)){
                    VAR_6 = FUNC_0(VAR_5, VAR_6);
                    VAR_7 = &VAR_5->pDevList[VAR_6];
             FUNC_1(VAR_3, VAR_7->qdepth);
                }
     }
     break;
        }
 default:
  break;
 }
}
