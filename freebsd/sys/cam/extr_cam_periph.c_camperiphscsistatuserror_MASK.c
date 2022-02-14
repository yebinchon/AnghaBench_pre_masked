
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int retry_count; int path; } ;
struct TYPE_4__ {int scsi_status; } ;
union ccb {TYPE_2__ ccb_h; TYPE_1__ csio; } ;
typedef int u_int32_t ;
struct TYPE_6__ {int func_code; } ;
struct ccb_getdevstats {int dev_active; int dev_openings; int mintags; TYPE_3__ ccb_h; } ;
struct cam_periph {int flags; } ;
typedef int cam_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (union ccb*,union ccb**,int ,int,int*,int*,int*,int*,char const**) ;
 int FUNC_1 (union ccb*) ;
 struct cam_periph* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(union ccb *VAR_10, union ccb **VAR_11,
    cam_flags VAR_12, u_int32_t VAR_13,
    int *VAR_14, u_int32_t *VAR_15,
    u_int32_t *VAR_16, u_int32_t *VAR_17, const char **VAR_18)
{
 struct cam_periph *VAR_19;
 int VAR_20;

 switch (VAR_10->csio.scsi_status) {
 case 130:
 case 133:
 case 132:
 case 131:
  VAR_20 = 0;
  break;
 case 134:
 case 135:
  VAR_20 = FUNC_0(VAR_10, VAR_11,
             VAR_12,
             VAR_13,
             VAR_14,
             VAR_15,
             VAR_16,
             VAR_17,
             VAR_18);
  break;
 case 129:
 {

  struct ccb_getdevstats VAR_21;





  FUNC_3(&VAR_21.ccb_h,
         VAR_10->ccb_h.path,
         VAR_1);
  VAR_21.ccb_h.func_code = VAR_9;
  FUNC_1((union ccb *)&VAR_21);





  if (VAR_21.dev_active != 0) {
   int VAR_22;
   VAR_22 = VAR_21.dev_active + VAR_21.dev_openings;
   *VAR_14 = VAR_21.dev_active;
   if (*VAR_14 < VAR_21.mintags)
    *VAR_14 = VAR_21.mintags;
   if (*VAR_14 < VAR_22)
    *VAR_15 = VAR_4;
   else {
    *VAR_15 = VAR_5;
   }
   *VAR_16 = 0;
   VAR_20 = VAR_3;
   *VAR_17 &= ~VAR_8;
   break;
  }

 }
 case 136:




  VAR_19 = FUNC_2(VAR_10->ccb_h.path);
  if (VAR_19->flags & VAR_0) {
   VAR_20 = VAR_2;
   *VAR_18 = "Periph was invalidated";
  } else if ((VAR_13 & VAR_7) != 0 ||
      VAR_10->ccb_h.retry_count > 0) {
   if ((VAR_13 & VAR_7) == 0)
    VAR_10->ccb_h.retry_count--;
   VAR_20 = VAR_3;
   *VAR_15 = VAR_6
          | VAR_5;
   *VAR_16 = 1000;
  } else {
   VAR_20 = VAR_2;
   *VAR_18 = "Retries exhausted";
  }
  break;
 case 128:
 default:
  VAR_20 = VAR_2;
  break;
 }
 return (VAR_20);
}
