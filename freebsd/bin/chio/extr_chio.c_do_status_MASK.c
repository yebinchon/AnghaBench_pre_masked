
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct changer_params {int cp_npickers; int cp_nslots; int cp_nportals; int cp_ndrives; } ;
struct changer_element_status_request {int cesr_element_type; int cesr_element_base; int cesr_element_count; struct changer_element_status* cesr_element_status; int cesr_flags; } ;
struct TYPE_4__ {char* cv_volid; int cv_serial; } ;
struct TYPE_3__ {char* cv_volid; int cv_serial; } ;
struct changer_element_status {int ces_addr; int ces_flags; int ces_sensecode; int ces_sensequal; int ces_source_addr; int ces_int_addr; int ces_scsi_id; int ces_scsi_lun; scalar_t__ ces_designator_length; int ces_code_set; int ces_designator; int ces_source_type; TYPE_2__ ces_avoltag; TYPE_1__ ces_pvoltag; } ;
typedef int cesr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct changer_element_status_request*,int) ;
 scalar_t__ FUNC_3 (size_t,int) ;
 int VAR_7 ;
 char* VAR_8 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ,char*,char*,char const*) ;
 int FUNC_8 (struct changer_element_status*) ;
 int FUNC_9 (int,char**,char*) ;
 char* FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ,scalar_t__) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char) ;
 int VAR_11 ;
 int FUNC_16 (char*,char const*) ;

__attribute__((used)) static int
FUNC_17(const char *VAR_12, int VAR_13, char **VAR_14)
{
 struct changer_params VAR_15;
 struct changer_element_status_request VAR_16;
 int VAR_17;
 u_int16_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 const char *VAR_23;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30;

 VAR_19 = 0;
 VAR_18 = 0;
 VAR_23 = ((void*)0);

 VAR_9 = VAR_10 = 1;
 while ((VAR_30 = FUNC_9(VAR_13, VAR_14, "vVsSbaI")) != -1) {
  switch (VAR_30) {
  case 'v':
   VAR_24 = 1;
   break;
  case 'V':
   VAR_25 = 1;
   break;
  case 's':
   VAR_26 = 1;
   break;
  case 'S':
   VAR_28 = 1;
   break;
  case 'b':
   VAR_27 = 1;
   break;
  case 'I':
   VAR_29 = 1;
   break;
  case 'a':
   VAR_24 = VAR_25 = VAR_28 = VAR_26 = VAR_27 = VAR_29 = 1;
   break;
  default:
   FUNC_16("%s: bad option", VAR_12);
   goto usage;
  }
 }

 VAR_13 -= VAR_9;
 VAR_14 += VAR_9;
 if (VAR_13 > 3) {
  FUNC_16("%s: too many arguments", VAR_12);
  goto usage;
 }





 if (FUNC_11(VAR_7, VAR_5, (char *)&VAR_15))
  FUNC_5(1, "%s: CHIOGPARAMS", VAR_8);

 if (VAR_13 > 0)
  VAR_21 = VAR_22 = FUNC_12(VAR_14[0]);
 else {
  VAR_21 = 129;
  VAR_22 = 131;
 }
 if (VAR_13 > 1) {
  VAR_18 = (u_int16_t)FUNC_0(VAR_14[1]);
  VAR_19 = 1;
 }
 if (VAR_13 > 2)
  VAR_19 = (u_int16_t)FUNC_0(VAR_14[2]) - VAR_18 + 1;

 for (VAR_20 = VAR_21; VAR_20 <= VAR_22; ++VAR_20) {
  switch (VAR_20) {
  case 129:
   if (VAR_19 == 0)
    VAR_19 = VAR_15.cp_npickers;
   else if (VAR_19 > VAR_15.cp_npickers)
    FUNC_6(1, "not that many pickers in device");
   VAR_23 = "picker";
   break;

  case 128:
   if (VAR_19 == 0)
    VAR_19 = VAR_15.cp_nslots;
   else if (VAR_19 > VAR_15.cp_nslots)
    FUNC_6(1, "not that many slots in device");
   VAR_23 = "slot";
   break;

  case 130:
   if (VAR_19 == 0)
    VAR_19 = VAR_15.cp_nportals;
   else if (VAR_19 > VAR_15.cp_nportals)
    FUNC_6(1, "not that many portals in device");
   VAR_23 = "portal";
   break;

  case 131:
   if (VAR_19 == 0)
    VAR_19 = VAR_15.cp_ndrives;
   else if (VAR_19 > VAR_15.cp_ndrives)
    FUNC_6(1, "not that many drives in device");
   VAR_23 = "drive";
   break;

   default:

    VAR_19 = 0;
    VAR_23 = ((void*)0);
  }

  if (VAR_19 == 0) {
   if (VAR_13 == 0)
    continue;
   else {
    FUNC_14("%s: no %s elements\n",
        VAR_8, VAR_23);
    return (0);
   }
  }

  FUNC_2(&VAR_16, sizeof(VAR_16));
  VAR_16.cesr_element_type = VAR_20;
  VAR_16.cesr_element_base = VAR_18;
  VAR_16.cesr_element_count = VAR_19;

  VAR_16.cesr_element_status =
    (struct changer_element_status *)
    FUNC_3((size_t)VAR_19, sizeof(struct changer_element_status));

  if (!VAR_16.cesr_element_status)
   FUNC_6(1, "can't allocate status storage");

  if (VAR_25 || VAR_24)
   VAR_16.cesr_flags |= VAR_0;

  if (FUNC_11(VAR_7, VAR_6, (char *)&VAR_16)) {
   FUNC_8(VAR_16.cesr_element_status);
   FUNC_5(1, "%s: CHIOGSTATUS", VAR_8);
  }


  for (VAR_17 = 0; VAR_17 < VAR_19; ++VAR_17) {
   struct changer_element_status *VAR_31 =
            &(VAR_16.cesr_element_status[VAR_17]);
   FUNC_14("%s %d: %s", VAR_23, VAR_31->ces_addr,
       FUNC_1(VAR_31->ces_flags,
        VAR_1));
   if (VAR_26)
    FUNC_14(" sense: <0x%02x/0x%02x>",
           VAR_31->ces_sensecode,
           VAR_31->ces_sensequal);
   if (VAR_24)
    FUNC_14(" voltag: <%s:%d>",
           VAR_31->ces_pvoltag.cv_volid,
           VAR_31->ces_pvoltag.cv_serial);
   if (VAR_25)
    FUNC_14(" avoltag: <%s:%d>",
           VAR_31->ces_avoltag.cv_volid,
           VAR_31->ces_avoltag.cv_serial);
   if (VAR_28) {
    if (VAR_31->ces_flags & VAR_4)
     FUNC_14(" source: <%s %d>",
            FUNC_4(
             VAR_31->ces_source_type),
            VAR_31->ces_source_addr);
    else
     FUNC_14(" source: <>");
   }
   if (VAR_29)
    FUNC_14(" intaddr: <%d>", VAR_31->ces_int_addr);
   if (VAR_27) {
    FUNC_14(" scsi: <");
    if (VAR_31->ces_flags & VAR_3)
     FUNC_14("%d", VAR_31->ces_scsi_id);
    else
     FUNC_15('?');
    FUNC_15(':');
    if (VAR_31->ces_flags & VAR_2)
     FUNC_14("%d", VAR_31->ces_scsi_lun);
    else
     FUNC_15('?');
    FUNC_15('>');
   }
   if (VAR_31->ces_designator_length > 0)
    FUNC_13(VAR_31->ces_designator,
       VAR_31->ces_code_set,
       VAR_31->ces_designator_length);
   FUNC_15('\n');
  }

  FUNC_8(VAR_16.cesr_element_status);
  VAR_19 = 0;
 }

 return (0);

 usage:
 (void) FUNC_7(VAR_11, "usage: %s %s [-vVsSbaA] [<element type> [<start-addr> [<end-addr>] ] ]\n",
         FUNC_10(), VAR_12);
 return (1);
}
