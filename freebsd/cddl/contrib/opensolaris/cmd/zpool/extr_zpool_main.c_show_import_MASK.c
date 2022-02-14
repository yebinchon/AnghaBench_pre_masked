
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vs_state; scalar_t__ vs_aux; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;





 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 scalar_t__ FUNC_5 (int *,int ,char**) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__**,int *) ;
 int FUNC_8 (char*,int *,int,int ) ;
 int FUNC_9 (int *,int *,int,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,char**) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_15(nvlist_t *VAR_15)
{
 uint64_t VAR_16;
 vdev_stat_t *VAR_17;
 char *VAR_18;
 uint64_t VAR_19;
 char *VAR_20;
 nvlist_t *VAR_21;
 int VAR_22;
 const char *VAR_23;
 uint_t VAR_24;
 int VAR_25;
 char *VAR_26;

 FUNC_11(FUNC_5(VAR_15, VAR_10,
     &VAR_18) == 0);
 FUNC_11(FUNC_6(VAR_15, VAR_9,
     &VAR_19) == 0);
 FUNC_11(FUNC_6(VAR_15, VAR_11,
     &VAR_16) == 0);
 FUNC_11(FUNC_4(VAR_15, VAR_13,
     &VAR_21) == 0);

 FUNC_11(FUNC_7(VAR_21, VAR_12,
     (uint64_t **)&VAR_17, &VAR_24) == 0);
 VAR_23 = FUNC_14(VAR_17->vs_state, VAR_17->vs_aux);

 VAR_22 = FUNC_12(VAR_15, &VAR_20);

 (void) FUNC_10(FUNC_1("   pool: %s\n"), VAR_18);
 (void) FUNC_10(FUNC_1("     id: %llu\n"), (u_longlong_t)VAR_19);
 (void) FUNC_10(FUNC_1("  state: %s"), VAR_23);
 if (VAR_16 == VAR_1)
  (void) FUNC_10(FUNC_1(" (DESTROYED)"));
 (void) FUNC_10("\n");

 switch (VAR_22) {
 case 135:
 case 136:
 case 146:
  (void) FUNC_10(FUNC_1(" status: One or more devices are "
      "missing from the system.\n"));
  break;

 case 142:
 case 143:
  (void) FUNC_10(FUNC_1(" status: One or more devices contains "
      "corrupted data.\n"));
  break;

 case 144:
  (void) FUNC_10(
      FUNC_1(" status: The pool data is corrupted.\n"));
  break;

 case 133:
  (void) FUNC_10(FUNC_1(" status: One or more devices "
      "are offlined.\n"));
  break;

 case 141:
  (void) FUNC_10(FUNC_1(" status: The pool metadata is "
      "corrupted.\n"));
  break;

 case 128:
  (void) FUNC_10(FUNC_1(" status: The pool is formatted using a "
      "legacy on-disk version.\n"));
  break;

 case 129:
  (void) FUNC_10(FUNC_1(" status: The pool is formatted using an "
      "incompatible version.\n"));
  break;

 case 138:
  (void) FUNC_10(FUNC_1(" status: Some supported features are "
      "not enabled on the pool.\n"));
  break;

 case 131:
  (void) FUNC_10(FUNC_1("status: The pool uses the following "
      "feature(s) not supported on this system:\n"));
  FUNC_13(VAR_15);
  break;

 case 130:
  (void) FUNC_10(FUNC_1("status: The pool can only be accessed "
      "in read-only mode on this system. It\n\tcannot be "
      "accessed in read-write mode because it uses the "
      "following\n\tfeature(s) not supported on this system:\n"));
  FUNC_13(VAR_15);
  break;

 case 137:
  (void) FUNC_10(FUNC_1(" status: The pool was last accessed by "
      "another system.\n"));
  break;

 case 139:
 case 140:
  (void) FUNC_10(FUNC_1(" status: One or more devices are "
      "faulted.\n"));
  break;

 case 145:
  (void) FUNC_10(FUNC_1(" status: An intent log record cannot be "
      "read.\n"));
  break;

 case 132:
  (void) FUNC_10(FUNC_1(" status: One or more devices were being "
      "resilvered.\n"));
  break;

 case 134:
  (void) FUNC_10(FUNC_1("status: One or more devices were "
      "configured to use a non-native block size.\n"
      "\tExpect reduced performance.\n"));
  break;

 default:



  FUNC_0(VAR_22 == VAR_14);
 }




 if (VAR_17->vs_state == VAR_7) {
  if (VAR_22 == 128 ||
      VAR_22 == 138) {
   (void) FUNC_10(FUNC_1(" action: The pool can be "
       "imported using its name or numeric identifier, "
       "though\n\tsome features will not be available "
       "without an explicit 'zpool upgrade'.\n"));
  } else if (VAR_22 == 137) {
   (void) FUNC_10(FUNC_1(" action: The pool can be "
       "imported using its name or numeric "
       "identifier and\n\tthe '-f' flag.\n"));
  } else {
   (void) FUNC_10(FUNC_1(" action: The pool can be "
       "imported using its name or numeric "
       "identifier.\n"));
  }
 } else if (VAR_17->vs_state == VAR_6) {
  (void) FUNC_10(FUNC_1(" action: The pool can be imported "
      "despite missing or damaged devices.  The\n\tfault "
      "tolerance of the pool may be compromised if imported.\n"));
 } else {
  switch (VAR_22) {
  case 129:
   (void) FUNC_10(FUNC_1(" action: The pool cannot be "
       "imported.  Access the pool on a system running "
       "newer\n\tsoftware, or recreate the pool from "
       "backup.\n"));
   break;
  case 131:
   (void) FUNC_10(FUNC_1("action: The pool cannot be "
       "imported. Access the pool on a system that "
       "supports\n\tthe required feature(s), or recreate "
       "the pool from backup.\n"));
   break;
  case 130:
   (void) FUNC_10(FUNC_1("action: The pool cannot be "
       "imported in read-write mode. Import the pool "
       "with\n"
       "\t\"-o readonly=on\", access the pool on a system "
       "that supports the\n\trequired feature(s), or "
       "recreate the pool from backup.\n"));
   break;
  case 135:
  case 136:
  case 146:
   (void) FUNC_10(FUNC_1(" action: The pool cannot be "
       "imported. Attach the missing\n\tdevices and try "
       "again.\n"));
   break;
  default:
   (void) FUNC_10(FUNC_1(" action: The pool cannot be "
       "imported due to damaged devices or data.\n"));
  }
 }


 if (FUNC_5(VAR_15, VAR_8, &VAR_26) == 0)
  (void) FUNC_10(FUNC_1("comment: %s\n"), VAR_26);





 if (((VAR_17->vs_state == VAR_5) ||
     (VAR_17->vs_state == VAR_4)) &&
     (VAR_17->vs_aux == VAR_3)) {
  if (VAR_16 == VAR_1)
   (void) FUNC_10(FUNC_1("\tThe pool was destroyed, "
       "but can be imported using the '-Df' flags.\n"));
  else if (VAR_16 != VAR_2)
   (void) FUNC_10(FUNC_1("\tThe pool may be active on "
       "another system, but can be imported using\n\t"
       "the '-f' flag.\n"));
 }

 if (VAR_20 != ((void*)0))
  (void) FUNC_10(FUNC_1("   see: http://illumos.org/msg/%s\n"),
      VAR_20);

 (void) FUNC_10(FUNC_1(" config:\n\n"));

 VAR_25 = FUNC_2(((void*)0), VAR_21, 0, 0);
 if (VAR_25 < 10)
  VAR_25 = 10;

 FUNC_8(VAR_18, VAR_21, VAR_25, 0);
 if (FUNC_3(VAR_21) > 0)
  FUNC_9(((void*)0), VAR_21, VAR_25, VAR_0);

 if (VAR_22 == 146) {
  (void) FUNC_10(FUNC_1("\n\tAdditional devices are known to "
      "be part of this pool, though their\n\texact "
      "configuration cannot be determined.\n"));
 }
}
