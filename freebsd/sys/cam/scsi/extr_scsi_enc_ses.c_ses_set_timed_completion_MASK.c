
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef int uint8_t ;
struct ses_mgmt_mode_page {int byte5; int max_comp_time; } ;
struct cam_periph {int dummy; } ;
struct TYPE_8__ {int ses_flags; } ;
typedef TYPE_2__ ses_softc_t ;
struct TYPE_9__ {TYPE_2__* enc_private; struct cam_periph* periph; } ;
typedef TYPE_3__ enc_softc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int) ;
 union ccb* FUNC_5 (struct cam_periph*,int ) ;
 int FUNC_6 (union ccb*,int ,int ,int,int *) ;
 int VAR_13 ;
 int FUNC_7 (int *,int,int *,int ,int ,int ,int*,size_t,int ,int) ;
 int FUNC_8 (int *,int,int *,int ,int ,int ,int ,int*,size_t,int ,int) ;
 int FUNC_9 (union ccb*) ;

__attribute__((used)) static int
FUNC_10(enc_softc_t *VAR_14, uint8_t VAR_15)
{
 union ccb *VAR_16;
 struct cam_periph *VAR_17;
 struct ses_mgmt_mode_page *VAR_18;
 uint8_t *VAR_19;
 size_t VAR_20;
 ses_softc_t *VAR_21;

 VAR_17 = VAR_14->periph;
 VAR_21 = VAR_14->enc_private;
 VAR_16 = FUNC_5(VAR_17, VAR_0);

 VAR_20 = sizeof(struct ses_mgmt_mode_page);
 VAR_19 = FUNC_2(VAR_20);
 if (VAR_19 == ((void*)0))
  goto out;

 FUNC_8(&VAR_16->csio, 4, ((void*)0), VAR_5,
            VAR_4, VAR_10, VAR_7,
     VAR_19, VAR_20, VAR_11, 60 * 1000);





 FUNC_6(VAR_16, VAR_13, VAR_2,
     VAR_3|VAR_9, ((void*)0));
 if (VAR_16->ccb_h.status != VAR_1) {
  FUNC_3(VAR_14, "Timed Completion Unsupported\n");
  goto release;
 }


 VAR_18 = (struct ses_mgmt_mode_page *)VAR_19;
 if ((VAR_18->byte5 & VAR_8) == VAR_15)
  goto done;


 if (VAR_15)
  VAR_18->byte5 |= VAR_8;
 else
  VAR_18->byte5 &= ~VAR_8;

 FUNC_4(&VAR_18->max_comp_time, sizeof(VAR_18->max_comp_time));

 FUNC_7(&VAR_16->csio, 5, ((void*)0), VAR_5,
                 VAR_4, VAR_12, VAR_19, VAR_20,
     VAR_11, 60 * 1000);

 FUNC_6(VAR_16, VAR_13, VAR_2, VAR_3, ((void*)0));
 if (VAR_16->ccb_h.status != VAR_1) {
  FUNC_3(VAR_14, "Timed Completion Set Failed\n");
  goto release;
 }

done:
 if ((VAR_18->byte5 & VAR_8) != 0) {
  FUNC_1(VAR_14, "Timed Completion Enabled\n");
  VAR_21->ses_flags |= VAR_6;
 } else {
  FUNC_1(VAR_14, "Timed Completion Disabled\n");
  VAR_21->ses_flags &= ~VAR_6;
 }
release:
 FUNC_0(VAR_19);
 FUNC_9(VAR_16);
out:
 return (VAR_21->ses_flags & VAR_6);
}
