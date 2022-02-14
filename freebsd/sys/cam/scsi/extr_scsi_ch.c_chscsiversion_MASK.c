
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_inquiry_data {int version; } ;
struct TYPE_2__ {scalar_t__ status; int func_code; } ;
struct ccb_getdev {struct scsi_inquiry_data inq_data; TYPE_1__ ccb_h; } ;
struct cam_periph {int path; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cam_periph*,int ) ;
 int FUNC_1 (union ccb*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct cam_periph *VAR_4)
{
 struct scsi_inquiry_data *VAR_5;
 struct ccb_getdev *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4, VAR_2);
 if ((VAR_6 = (struct ccb_getdev *)FUNC_2()) == ((void*)0))
  return (-1);



 FUNC_4(&VAR_6->ccb_h,
        VAR_4->path,
        VAR_0);
 VAR_6->ccb_h.func_code = VAR_3;
 FUNC_1((union ccb *)VAR_6);

 if (VAR_6->ccb_h.status != VAR_1) {
  FUNC_3((union ccb *)VAR_6);
  return -1;
 }

 VAR_5 = &VAR_6->inq_data;
 VAR_7 = VAR_5->version;
 FUNC_3((union ccb *)VAR_6);

 return VAR_7;
}
