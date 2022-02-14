
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct changer_set_voltag_request {int dummy; } ;
struct changer_position {int dummy; } ;
struct changer_params {int cp_ndrives; int cp_nportals; int cp_nslots; int cp_npickers; } ;
struct changer_move {int dummy; } ;
struct changer_exchange {int dummy; } ;
struct changer_element_status_request {int dummy; } ;
struct ch_softc {int sc_picker; int* sc_firsts; int * sc_counts; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct cam_periph*,int,scalar_t__,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int VAR_11 ;
 int FUNC_4 (struct cam_periph*,struct changer_exchange*) ;
 int FUNC_5 (struct cam_periph*,int,int,struct changer_element_status_request*) ;
 int FUNC_6 (struct cam_periph*,unsigned int) ;
 int FUNC_7 (struct cam_periph*,struct changer_move*) ;
 int FUNC_8 (struct cam_periph*,struct changer_position*) ;
 int FUNC_9 (struct cam_periph*) ;
 int FUNC_10 (struct cam_periph*,struct changer_set_voltag_request*) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_12, u_long VAR_13, caddr_t VAR_14, int VAR_15, struct thread *VAR_16)
{
 struct cam_periph *VAR_17;
 struct ch_softc *VAR_18;
 int VAR_19;

 VAR_17 = (struct cam_periph *)VAR_12->si_drv1;
 FUNC_2(VAR_17);
 FUNC_0(VAR_17->path, VAR_0, ("entering chioctl\n"));

 VAR_18 = (struct ch_softc *)VAR_17->softc;

 VAR_19 = 0;

 FUNC_0(VAR_17->path, VAR_0,
    ("trying to do ioctl %#lx\n", VAR_13));





 switch (VAR_13) {
 case 135:
 case 136:
 case 128:
 case 134:
  break;

 default:
  if ((VAR_15 & VAR_8) == 0) {
   FUNC_3(VAR_17);
   return (VAR_5);
  }
 }

 switch (VAR_13) {
 case 132:
  VAR_19 = FUNC_7(VAR_17, (struct changer_move *)VAR_14);
  break;

 case 137:
  VAR_19 = FUNC_4(VAR_17, (struct changer_exchange *)VAR_14);
  break;

 case 131:
  VAR_19 = FUNC_8(VAR_17, (struct changer_position *)VAR_14);
  break;

 case 135:
  *(int *)VAR_14 = VAR_18->sc_picker - VAR_18->sc_firsts[VAR_3];
  break;

 case 129:
 {
  int VAR_20 = *(int *)VAR_14;

  if (VAR_20 > (VAR_18->sc_counts[VAR_3] - 1)) {
   VAR_19 = VAR_6;
   break;
  }
  VAR_18->sc_picker = VAR_18->sc_firsts[VAR_3] + VAR_20;
  break;
 }
 case 136:
 {
  struct changer_params *VAR_21 = (struct changer_params *)VAR_14;

  VAR_21->cp_npickers = VAR_18->sc_counts[VAR_3];
  VAR_21->cp_nslots = VAR_18->sc_counts[VAR_4];
  VAR_21->cp_nportals = VAR_18->sc_counts[VAR_2];
  VAR_21->cp_ndrives = VAR_18->sc_counts[VAR_1];
  break;
 }
 case 133:
  VAR_19 = FUNC_6(VAR_17, *(unsigned int *)VAR_14);
  break;

 case 128:
 {
  VAR_19 = FUNC_5(VAR_17, VAR_10, VAR_13,
      (struct changer_element_status_request *)VAR_14);
  break;
 }

 case 134:
 {
  int VAR_22;

  VAR_22 = FUNC_9(VAR_17);
  if (VAR_22 >= VAR_9) {
   VAR_19 = FUNC_5(VAR_17, VAR_22, VAR_13,
       (struct changer_element_status_request *)VAR_14);
    }
  else {
   FUNC_3(VAR_17);
   return (VAR_7);
  }
  break;
 }

 case 130:
 {
  VAR_19 = FUNC_10(VAR_17,
        (struct changer_set_voltag_request *) VAR_14);
  break;
 }



 default:
  VAR_19 = FUNC_1(VAR_17, VAR_13, VAR_14, VAR_11);
  break;
 }

 FUNC_3(VAR_17);
 return (VAR_19);
}
