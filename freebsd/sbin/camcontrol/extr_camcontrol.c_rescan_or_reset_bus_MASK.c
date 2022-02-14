
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int match_buf_len; unsigned int num_matches; int num_patterns; int pattern_buf_len; scalar_t__ status; union ccb* matches; union ccb* patterns; } ;
struct TYPE_9__ {int priority; } ;
struct TYPE_14__ {scalar_t__ path_id; int status; TYPE_2__ pinfo; void* target_lun; void* target_id; void* func_code; } ;
struct TYPE_8__ {void* flags; } ;
struct bus_match_result {scalar_t__ path_id; } ;
struct TYPE_12__ {struct bus_match_result bus_result; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_11__ {TYPE_3__ bus_pattern; } ;
union ccb {scalar_t__ type; TYPE_6__ cdm; TYPE_7__ ccb_h; TYPE_1__ crcn; TYPE_5__ result; TYPE_4__ pattern; } ;
struct dev_match_result {scalar_t__ type; TYPE_6__ cdm; TYPE_7__ ccb_h; TYPE_1__ crcn; TYPE_5__ result; TYPE_4__ pattern; } ;
struct dev_match_pattern {scalar_t__ type; TYPE_6__ cdm; TYPE_7__ ccb_h; TYPE_1__ crcn; TYPE_5__ result; TYPE_4__ pattern; } ;
typedef scalar_t__ path_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_0 (union ccb*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,scalar_t__,...) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (int,int ,union ccb*) ;
 union ccb* FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(path_id_t VAR_19, int VAR_20)
{
 union ccb *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
 int VAR_23 = -1, VAR_24;
 int VAR_25;

 VAR_24 = 0;

 if ((VAR_23 = FUNC_6(VAR_13, VAR_12)) < 0) {
  FUNC_8("error opening transport layer device %s", VAR_13);
  FUNC_7("%s", VAR_13);
  return (1);
 }

 VAR_21 = FUNC_5(sizeof(*VAR_21));
 if (VAR_21 == ((void*)0)) {
  FUNC_7("failed to allocate CCB");
  VAR_24 = 1;
  goto bailout;
 }
 FUNC_0(VAR_21, sizeof(*VAR_21));

 if (VAR_19 != VAR_2) {
  VAR_21->ccb_h.func_code = VAR_20 ? VAR_16 : VAR_15;
  VAR_21->ccb_h.path_id = VAR_19;
  VAR_21->ccb_h.target_id = VAR_9;
  VAR_21->ccb_h.target_lun = VAR_6;
  VAR_21->crcn.flags = VAR_5;


  VAR_21->ccb_h.pinfo.priority = 5;

  if (FUNC_4(VAR_23, VAR_1, VAR_21) == -1) {
   FUNC_7("CAMIOCOMMAND ioctl failed");
   VAR_24 = 1;
   goto bailout;
  }

  if ((VAR_21->ccb_h.status & VAR_8) == VAR_7) {
   FUNC_2(VAR_18, "%s of bus %ld was successful\n",
       VAR_20 ? "Re-scan" : "Reset", VAR_19);
  } else {
   FUNC_2(VAR_18, "%s of bus %ld returned error %#x\n",
    VAR_20 ? "Re-scan" : "Reset", VAR_19,
    VAR_21->ccb_h.status & VAR_8);
   VAR_24 = 1;
  }

  goto bailout;
 }
 VAR_22 = FUNC_5(sizeof(*VAR_22));
 if (VAR_22 == ((void*)0)) {
  FUNC_7("failed to allocate CCB");
  VAR_24 = 1;
  goto bailout;
 }
 FUNC_0(VAR_22, sizeof(*VAR_22));
 VAR_22->ccb_h.func_code = VAR_14;
 VAR_22->ccb_h.path_id = VAR_2;
 VAR_25 = sizeof(struct dev_match_result) * 20;
 VAR_22->cdm.match_buf_len = VAR_25;
 VAR_22->cdm.matches=(struct dev_match_result *)FUNC_5(VAR_25);
 if (VAR_22->cdm.matches == ((void*)0)) {
  FUNC_8("can't malloc memory for matches");
  VAR_24 = 1;
  goto bailout;
 }
 VAR_22->cdm.num_matches = 0;

 VAR_22->cdm.num_patterns = 1;
 VAR_22->cdm.pattern_buf_len = sizeof(struct dev_match_pattern);

 VAR_22->cdm.patterns = (struct dev_match_pattern *)FUNC_5(
  VAR_22->cdm.pattern_buf_len);
 if (VAR_22->cdm.patterns == ((void*)0)) {
  FUNC_8("can't malloc memory for patterns");
  VAR_24 = 1;
  goto bailout;
 }
 VAR_22->cdm.patterns[0].type = VAR_11;
 VAR_22->cdm.patterns[0].pattern.bus_pattern.flags = VAR_0;

 do {
  unsigned int VAR_26;

  if (FUNC_4(VAR_23, VAR_1, VAR_22) == -1) {
   FUNC_7("CAMIOCOMMAND ioctl failed");
   VAR_24 = 1;
   goto bailout;
  }

  if ((VAR_22->ccb_h.status != VAR_7)
   || ((VAR_22->cdm.status != VAR_3)
     && (VAR_22->cdm.status != VAR_4))) {
   FUNC_8("got CAM error %#x, CDM error %d\n",
         VAR_22->ccb_h.status, VAR_22->cdm.status);
   VAR_24 = 1;
   goto bailout;
  }

  for (VAR_26 = 0; VAR_26 < VAR_22->cdm.num_matches; VAR_26++) {
   struct bus_match_result *VAR_27;


   if (VAR_22->cdm.matches[VAR_26].type != VAR_11)
    continue;

   VAR_27 =&VAR_22->cdm.matches[VAR_26].result.bus_result;





   if (VAR_27->path_id == VAR_10)
    continue;

   VAR_21->ccb_h.func_code = VAR_20 ? VAR_16 :
             VAR_15;
   VAR_21->ccb_h.path_id = VAR_27->path_id;
   VAR_21->ccb_h.target_id = VAR_9;
   VAR_21->ccb_h.target_lun = VAR_6;
   VAR_21->crcn.flags = VAR_5;


   VAR_21->ccb_h.pinfo.priority = 5;

   if (FUNC_4(VAR_23, VAR_1, VAR_21) == -1) {
    FUNC_7("CAMIOCOMMAND ioctl failed");
    VAR_24 = 1;
    goto bailout;
   }

   if ((VAR_21->ccb_h.status & VAR_8)==VAR_7){
    FUNC_2(VAR_18, "%s of bus %ld was successful\n",
     VAR_20? "Re-scan" : "Reset",
     VAR_27->path_id);
   } else {





    FUNC_2(VAR_17, "%s of bus %ld returned error "
     "%#x\n", VAR_20? "Re-scan" : "Reset",
     VAR_27->path_id,
     VAR_21->ccb_h.status & VAR_8);
    VAR_24 = 1;
   }
  }
 } while ((VAR_22->ccb_h.status == VAR_7)
   && (VAR_22->cdm.status == VAR_4));

bailout:

 if (VAR_23 != -1)
  FUNC_1(VAR_23);

 if (VAR_22 != ((void*)0)) {
  FUNC_3(VAR_22->cdm.patterns);
  FUNC_3(VAR_22->cdm.matches);
  FUNC_3(VAR_22);
 }
 FUNC_3(VAR_21);

 return (VAR_24);
}
