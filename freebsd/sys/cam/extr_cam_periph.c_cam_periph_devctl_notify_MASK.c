
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cmd; int res; } ;
struct TYPE_5__ {int status; scalar_t__ func_code; int timeout; int path; } ;
struct TYPE_8__ {int scsi_status; } ;
union ccb {TYPE_2__ ataio; TYPE_1__ ccb_h; TYPE_4__ csio; } ;
struct sbuf {int dummy; } ;
struct TYPE_7__ {scalar_t__ status; int func_code; } ;
struct ccb_getdev {int serial_num_len; int serial_num; TYPE_3__ ccb_h; } ;
struct cam_periph {int unit_number; int periph_name; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,struct sbuf*) ;
 int FUNC_1 (int *,struct sbuf*) ;
 int FUNC_2 (char*,char*,char*,int ) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sbuf*,int ,int ) ;
 int FUNC_6 (struct sbuf*) ;
 int FUNC_7 (struct sbuf*) ;
 scalar_t__ FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*,char*,int ,int ) ;
 int FUNC_10 (struct sbuf*,char*,...) ;
 int FUNC_11 (int ,struct sbuf*) ;
 int FUNC_12 (union ccb*,int*,int*,int*,int*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (union ccb*) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (union ccb*) ;
 struct cam_periph* FUNC_17 (int ) ;
 int FUNC_18 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_19(union ccb *VAR_10)
{
 struct cam_periph *VAR_11;
 struct ccb_getdev *VAR_12;
 struct sbuf VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 char *VAR_18, *VAR_19;

 VAR_18 = FUNC_4(VAR_0, VAR_4, VAR_5);
 if (VAR_18 == ((void*)0))
  return;

 FUNC_9(&VAR_13, VAR_18, VAR_0, VAR_6);

 VAR_11 = FUNC_17(VAR_10->ccb_h.path);
 FUNC_10(&VAR_13, "device=%s%d ", VAR_11->periph_name,
     VAR_11->unit_number);

 FUNC_10(&VAR_13, "serial=\"");
 if ((VAR_12 = (struct ccb_getdev *)FUNC_15()) != ((void*)0)) {
  FUNC_18(&VAR_12->ccb_h, VAR_10->ccb_h.path,
      VAR_1);
  VAR_12->ccb_h.func_code = VAR_8;
  FUNC_14((union ccb *)VAR_12);

  if (VAR_12->ccb_h.status == VAR_2)
   FUNC_5(&VAR_13, VAR_12->serial_num, VAR_12->serial_num_len);
  FUNC_16((union ccb *)VAR_12);
 }
 FUNC_10(&VAR_13, "\" ");
 FUNC_10(&VAR_13, "cam_status=\"0x%x\" ", VAR_10->ccb_h.status);

 switch (VAR_10->ccb_h.status & VAR_3) {
 case 129:
  FUNC_10(&VAR_13, "timeout=%d ", VAR_10->ccb_h.timeout);
  VAR_19 = "timeout";
  break;
 case 128:
  FUNC_10(&VAR_13, "scsi_status=%d ", VAR_10->csio.scsi_status);
  if (FUNC_12(VAR_10, &VAR_14, &VAR_15, &VAR_16, &VAR_17))
   FUNC_10(&VAR_13, "scsi_sense=\"%02x %02x %02x %02x\" ",
       VAR_14, VAR_15, VAR_16, VAR_17);
  VAR_19 = "error";
  break;
 case 130:
  FUNC_10(&VAR_13, "RES=\"");
  FUNC_1(&VAR_10->ataio.res, &VAR_13);
  FUNC_10(&VAR_13, "\" ");
  VAR_19 = "error";
  break;
 default:
  VAR_19 = "error";
  break;
 }

 if (VAR_10->ccb_h.func_code == VAR_9) {
  FUNC_10(&VAR_13, "CDB=\"");
  FUNC_11(FUNC_13(&VAR_10->csio), &VAR_13);
  FUNC_10(&VAR_13, "\" ");
 } else if (VAR_10->ccb_h.func_code == VAR_7) {
  FUNC_10(&VAR_13, "ACB=\"");
  FUNC_0(&VAR_10->ataio.cmd, &VAR_13);
  FUNC_10(&VAR_13, "\" ");
 }

 if (FUNC_8(&VAR_13) == 0)
  FUNC_2("CAM", "periph", VAR_19, FUNC_6(&VAR_13));
 FUNC_7(&VAR_13);
 FUNC_3(VAR_18, VAR_4);
}
