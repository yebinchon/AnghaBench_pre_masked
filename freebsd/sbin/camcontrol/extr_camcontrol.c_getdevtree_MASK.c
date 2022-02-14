
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int match_buf_len; unsigned int num_matches; scalar_t__ status; struct dev_match_result* matches; scalar_t__ pattern_buf_len; scalar_t__ num_patterns; } ;
struct TYPE_4__ {scalar_t__ status; int func_code; int target_lun; int target_id; int path_id; } ;
union ccb {TYPE_3__ cdm; TYPE_1__ ccb_h; } ;
typedef int uintmax_t ;
struct periph_match_result {char* periph_name; int unit_number; } ;
struct device_match_result {int flags; int path_id; int target_id; int target_lun; int protocol; } ;
struct bus_match_result {int path_id; char* dev_name; int unit_number; int bus_id; } ;
struct TYPE_5__ {struct periph_match_result periph_result; struct device_match_result device_result; struct bus_match_result bus_result; } ;
struct dev_match_result {int type; TYPE_2__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (union ccb*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int,int ,union ccb*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct device_match_result*,char*) ;
 int FUNC_8 (struct device_match_result*,char*) ;
 int FUNC_9 (struct device_match_result*,char*) ;
 int FUNC_10 (struct device_match_result*,char*) ;
 int FUNC_11 (struct device_match_result*,char*) ;
 int FUNC_12 (char*,char*) ;
 int VAR_19 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static int
FUNC_15(int VAR_20, char **VAR_21, char *VAR_22)
{
 union ccb VAR_23;
 int VAR_24, VAR_25;
 unsigned int VAR_26;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30 = 0;
 int VAR_31;

 while ((VAR_31 = FUNC_3(VAR_20, VAR_21, VAR_22)) != -1) {
  switch(VAR_31) {
  case 'b':
   if ((VAR_18 & VAR_1) == 0)
    VAR_30 = 1;
   break;
  default:
   break;
  }
 }

 if ((VAR_25 = FUNC_6(VAR_16, VAR_9)) == -1) {
  FUNC_13("couldn't open %s", VAR_16);
  return (1);
 }

 FUNC_0(&VAR_23, sizeof(union ccb));

 VAR_23.ccb_h.path_id = VAR_7;
 VAR_23.ccb_h.target_id = VAR_6;
 VAR_23.ccb_h.target_lun = VAR_4;

 VAR_23.ccb_h.func_code = VAR_17;
 VAR_24 = sizeof(struct dev_match_result) * 100;
 VAR_23.cdm.match_buf_len = VAR_24;
 VAR_23.cdm.matches = (struct dev_match_result *)FUNC_5(VAR_24);
 if (VAR_23.cdm.matches == ((void*)0)) {
  FUNC_14("can't malloc memory for matches");
  FUNC_1(VAR_25);
  return (1);
 }
 VAR_23.cdm.num_matches = 0;





 VAR_23.cdm.num_patterns = 0;
 VAR_23.cdm.pattern_buf_len = 0;





 do {
  if (FUNC_4(VAR_25, VAR_0, &VAR_23) == -1) {
   FUNC_13("error sending CAMIOCOMMAND ioctl");
   VAR_28 = 1;
   break;
  }

  if ((VAR_23.ccb_h.status != VAR_5)
   || ((VAR_23.cdm.status != VAR_2)
      && (VAR_23.cdm.status != VAR_3))) {
   FUNC_14("got CAM error %#x, CDM error %d\n",
         VAR_23.ccb_h.status, VAR_23.cdm.status);
   VAR_28 = 1;
   break;
  }

  for (VAR_26 = 0; VAR_26 < VAR_23.cdm.num_matches; VAR_26++) {
   switch (VAR_23.cdm.matches[VAR_26].type) {
   case 130: {
    struct bus_match_result *VAR_32;





    if ((VAR_30 == 0) &&
        (VAR_18 & VAR_1) == 0)
     break;

    VAR_32 =
     &VAR_23.cdm.matches[VAR_26].result.bus_result;

    if (VAR_27) {
     FUNC_2(VAR_19, ")\n");
     VAR_27 = 0;
    }

    FUNC_2(VAR_19, "scbus%d on %s%d bus %d%s\n",
     VAR_32->path_id,
     VAR_32->dev_name,
     VAR_32->unit_number,
     VAR_32->bus_id,
     (VAR_30 ? "" : ":"));
    break;
   }
   case 129: {
    struct device_match_result *VAR_33;
    char VAR_34[256];

    if (VAR_30 == 1)
     break;

    VAR_33 =
         &VAR_23.cdm.matches[VAR_26].result.device_result;

    if ((VAR_33->flags
         & VAR_8)
     && ((VAR_18 & VAR_1) == 0)) {
     VAR_29 = 1;
     break;
    } else
     VAR_29 = 0;

    if (VAR_33->protocol == VAR_14) {
     if (FUNC_10(VAR_33,
         &VAR_34[0]) != 0) {
      VAR_29 = 1;
      break;
     }
    } else if (VAR_33->protocol == VAR_10 ||
        VAR_33->protocol == VAR_13) {
     if (FUNC_7(VAR_33,
         &VAR_34[0]) != 0) {
      VAR_29 = 1;
      break;
     }
    } else if (VAR_33->protocol == VAR_11){
     if (FUNC_8(VAR_33,
         &VAR_34[0]) != 0) {
      VAR_29 = 1;
      break;
     }
    } else if (VAR_33->protocol == VAR_15) {
     if (FUNC_11(VAR_33,
         &VAR_34[0]) != 0) {
      VAR_29 = 1;
      break;
     }
    } else {
        FUNC_12(VAR_34, "<>");
    }
    if (VAR_27) {
     FUNC_2(VAR_19, ")\n");
     VAR_27 = 0;
    }

    FUNC_2(VAR_19, "%-33s  at scbus%d "
     "target %d lun %jd (",
     VAR_34,
     VAR_33->path_id,
     VAR_33->target_id,
     (uintmax_t)VAR_33->target_lun);

    VAR_27 = 1;

    break;
   }
   case 128: {
    struct periph_match_result *VAR_35;

    VAR_35 =
          &VAR_23.cdm.matches[VAR_26].result.periph_result;

    if (VAR_30 || VAR_29 != 0)
     break;

    if (VAR_27 > 1)
     FUNC_2(VAR_19, ",");

    FUNC_2(VAR_19, "%s%d",
     VAR_35->periph_name,
     VAR_35->unit_number);

    VAR_27++;
    break;
   }
   default:
    FUNC_2(VAR_19, "unknown match type\n");
    break;
   }
  }

 } while ((VAR_23.ccb_h.status == VAR_5)
  && (VAR_23.cdm.status == VAR_3));

 if (VAR_27)
  FUNC_2(VAR_19, ")\n");

 FUNC_1(VAR_25);

 return (VAR_28);
}
