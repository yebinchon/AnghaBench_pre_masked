
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int func_code; } ;
union ccb {int cpi; TYPE_1__ ccb_h; } ;
struct ccb_pathinq {int dummy; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct ccb_pathinq*,int) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 scalar_t__ FUNC_5 (struct cam_device*,union ccb*) ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct cam_device *VAR_8, struct ccb_pathinq *VAR_9)
{
 union ccb *VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 == ((void*)0)) {
  FUNC_7("get_cpi: couldn't allocate CCB");
  return (1);
 }
 FUNC_0(&VAR_10->cpi);
 VAR_10->ccb_h.func_code = VAR_5;
 if (FUNC_5(VAR_8, VAR_10) < 0) {
  FUNC_6("get_cpi: error sending Path Inquiry CCB");
  VAR_11 = 1;
  goto get_cpi_bailout;
 }
 if ((VAR_10->ccb_h.status & VAR_4) != VAR_3) {
  if (VAR_6 & VAR_0)
   FUNC_2(VAR_8, VAR_10, VAR_2,
     VAR_1, VAR_7);
  VAR_11 = 1;
  goto get_cpi_bailout;
 }
 FUNC_1(&VAR_10->cpi, VAR_9, sizeof(struct ccb_pathinq));

get_cpi_bailout:
 FUNC_3(VAR_10);
 return (VAR_11);
}
