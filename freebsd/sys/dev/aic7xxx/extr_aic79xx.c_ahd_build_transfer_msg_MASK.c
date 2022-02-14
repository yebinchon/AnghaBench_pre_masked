
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int features; } ;
struct TYPE_4__ {scalar_t__ period; scalar_t__ offset; scalar_t__ ppr_options; scalar_t__ width; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ offset; scalar_t__ period; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; TYPE_1__ curr; } ;
struct ahd_devinfo {int role; int target; int our_scsiid; int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahd_softc*,struct ahd_devinfo*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ahd_softc*,struct ahd_devinfo*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ahd_softc*,struct ahd_devinfo*,scalar_t__) ;
 int FUNC_3 (struct ahd_softc*,struct ahd_initiator_tinfo*,scalar_t__*,scalar_t__*,int ) ;
 struct ahd_initiator_tinfo* FUNC_4 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_6 (struct ahd_softc*,struct ahd_initiator_tinfo*,scalar_t__,scalar_t__*,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct ahd_softc *VAR_4, struct ahd_devinfo *VAR_5)
{





 struct ahd_initiator_tinfo *VAR_6;
 struct ahd_tmode_tstate *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 u_int VAR_11;
 u_int VAR_12;
 u_int VAR_13;

 VAR_6 = FUNC_4(VAR_4, VAR_5->channel, VAR_5->our_scsiid,
        VAR_5->target, &VAR_7);






 VAR_11 = VAR_6->goal.period;
 VAR_13 = VAR_6->goal.offset;
 VAR_12 = VAR_6->goal.ppr_options;

 if (VAR_5->role == VAR_2)
  VAR_12 = 0;
 FUNC_3(VAR_4, VAR_6, &VAR_11,
    &VAR_12, VAR_5->role);
 VAR_8 = VAR_6->curr.width != VAR_6->goal.width;
 VAR_9 = VAR_6->curr.offset != VAR_13 || VAR_6->curr.period != VAR_11;





 VAR_10 = VAR_12 != 0;

 if (!VAR_8 && !VAR_9 && !VAR_10) {
  VAR_8 = VAR_6->goal.width != VAR_1;
  VAR_9 = VAR_6->goal.offset != 0;
 }

 if (!VAR_8 && !VAR_9 && !VAR_10) {




  if ((VAR_4->features & VAR_0) != 0)
   VAR_8 = 1;
  else
   VAR_9 = 1;

  if (VAR_3) {
   FUNC_5(VAR_4, VAR_5);
   FUNC_7("Ensuring async\n");
  }
 }

 if (VAR_5->role == VAR_2)
  VAR_10 = 0;
 if (VAR_10 || (VAR_9 && !VAR_8)) {

  VAR_13 = VAR_6->goal.offset;
  FUNC_6(VAR_4, VAR_6, VAR_11, &VAR_13,
        VAR_10 ? VAR_6->goal.width
       : VAR_6->curr.width,
        VAR_5->role);
  if (VAR_10) {
   FUNC_0(VAR_4, VAR_5, VAR_11, VAR_13,
       VAR_6->goal.width, VAR_12);
  } else {
   FUNC_1(VAR_4, VAR_5, VAR_11, VAR_13);
  }
 } else {
  FUNC_2(VAR_4, VAR_5, VAR_6->goal.width);
 }
}
