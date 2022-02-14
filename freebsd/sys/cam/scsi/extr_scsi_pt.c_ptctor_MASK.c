
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_softc {int io_timeout; int device_stats; int dev; int bio_queue; int state; int pending_ccbs; } ;
struct make_dev_args {int mda_mode; struct cam_periph* mda_si_drv1; int mda_gid; int mda_uid; int mda_unit; int * mda_devsw; } ;
struct ccb_pathinq {int transport; } ;
struct ccb_getdev {int inq_data; } ;
struct cam_periph {int path; int unit_number; int periph_name; struct pt_softc* softc; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pt_softc*,int) ;
 int FUNC_5 (struct cam_periph*) ;
 int FUNC_6 (struct cam_periph*) ;
 int FUNC_7 (char*,int ,int ,int ,int,int ) ;
 int FUNC_8 (struct make_dev_args*) ;
 int FUNC_9 (struct make_dev_args*,int *,char*,int ,int ) ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 int FUNC_11 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (struct cam_periph*,int *) ;
 int FUNC_13 (struct ccb_pathinq*,int ) ;
 int FUNC_14 (int,int ,struct cam_periph*,int ) ;

__attribute__((used)) static cam_status
FUNC_15(struct cam_periph *VAR_15, void *VAR_16)
{
 struct pt_softc *VAR_17;
 struct ccb_getdev *VAR_18;
 struct ccb_pathinq VAR_19;
 struct make_dev_args VAR_20;
 int VAR_21;

 VAR_18 = (struct ccb_getdev *)VAR_16;
 if (VAR_18 == ((void*)0)) {
  FUNC_11("ptregister: no getdev CCB, can't register device\n");
  return(VAR_4);
 }

 VAR_17 = (struct pt_softc *)FUNC_10(sizeof(*VAR_17),VAR_8,VAR_9);

 if (VAR_17 == ((void*)0)) {
  FUNC_11("daregister: Unable to probe new device. "
         "Unable to allocate softc\n");
  return(VAR_4);
 }

 FUNC_4(VAR_17, sizeof(*VAR_17));
 FUNC_0(&VAR_17->pending_ccbs);
 VAR_17->state = VAR_10;
 FUNC_3(&VAR_17->bio_queue);

 VAR_17->io_timeout = VAR_11 * 1000;

 VAR_15->softc = VAR_17;

 FUNC_13(&VAR_19, VAR_15->path);

 FUNC_6(VAR_15);

 FUNC_8(&VAR_20);
 VAR_20.mda_devsw = &VAR_13;
 VAR_20.mda_unit = VAR_15->unit_number;
 VAR_20.mda_uid = VAR_12;
 VAR_20.mda_gid = VAR_7;
 VAR_20.mda_mode = 0600;
 VAR_20.mda_si_drv1 = VAR_15;
 VAR_21 = FUNC_9(&VAR_20, &VAR_17->dev, "%s%d", VAR_15->periph_name,
     VAR_15->unit_number);
 if (VAR_21 != 0) {
  FUNC_5(VAR_15);
  return (VAR_4);
 }

 VAR_17->device_stats = FUNC_7("pt",
     VAR_15->unit_number, 0,
     VAR_5,
     FUNC_1(&VAR_18->inq_data) |
     FUNC_2(VAR_19.transport),
     VAR_6);

 FUNC_5(VAR_15);
 FUNC_14(VAR_2 | VAR_0 | VAR_1,
      VAR_14, VAR_15, VAR_15->path);


 FUNC_12(VAR_15, ((void*)0));

 return(VAR_3);
}
