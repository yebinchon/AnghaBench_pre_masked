
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mode; } ;
struct hast_resource {scalar_t__ hr_role; int hr_name; int * hr_remoteout; int * hr_remotein; int * hr_conn; int * hr_ctrl; int * hr_event; } ;
typedef int msg ;
typedef scalar_t__ mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_8 ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,int,char*,int,...) ;
 char* FUNC_11 (scalar_t__) ;
 long FUNC_12 (int ) ;

void
FUNC_13(const struct hast_resource *VAR_10, int VAR_11)
{
 char VAR_12[256];
 struct stat VAR_13;
 long VAR_14;
 bool VAR_15;
 mode_t VAR_16;
 int VAR_17;






 VAR_12[0] = '\0';

 VAR_14 = FUNC_12(VAR_8);
 if (VAR_14 == -1) {
  FUNC_6(VAR_11);
  FUNC_7("[%s] (%s) ", VAR_10->hr_name,
      FUNC_9(VAR_10->hr_role));
  FUNC_4(VAR_3, "sysconf(_SC_OPEN_MAX) failed");
  FUNC_5();
  VAR_14 = 16384;
 }
 for (VAR_17 = 0; VAR_17 <= VAR_14; VAR_17++) {
  if (FUNC_3(VAR_17, &VAR_13) == 0) {
   VAR_15 = 1;
   VAR_16 = VAR_13.st_mode;
  } else if (VAR_9 == VAR_0) {
   VAR_15 = 0;
   VAR_16 = 0;
  } else {
   (void)FUNC_10(VAR_12, sizeof(VAR_12),
       "Unable to fstat descriptor %d: %s", VAR_17,
       FUNC_11(VAR_9));
   break;
  }
  if (VAR_17 == VAR_5 || VAR_17 == VAR_6 ||
      VAR_17 == VAR_4) {
   if (!VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (%s) is closed, but should be open.",
        VAR_17, (VAR_17 == VAR_5 ? "stdin" :
        (VAR_17 == VAR_6 ? "stdout" : "stderr")));
    break;
   }
  } else if (VAR_17 == FUNC_8(VAR_10->hr_event)) {
   if (!VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (event) is closed, but should be open.",
        VAR_17);
    break;
   }
   if (!FUNC_1(VAR_16)) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (event) is %s, but should be %s.",
        VAR_17, FUNC_2(VAR_16), FUNC_2(VAR_7));
    break;
   }
  } else if (VAR_17 == FUNC_8(VAR_10->hr_ctrl)) {
   if (!VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (ctrl) is closed, but should be open.",
        VAR_17);
    break;
   }
   if (!FUNC_1(VAR_16)) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (ctrl) is %s, but should be %s.",
        VAR_17, FUNC_2(VAR_16), FUNC_2(VAR_7));
    break;
   }
  } else if (VAR_10->hr_role == VAR_1 &&
      VAR_17 == FUNC_8(VAR_10->hr_conn)) {
   if (!VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (conn) is closed, but should be open.",
        VAR_17);
    break;
   }
   if (!FUNC_1(VAR_16)) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (conn) is %s, but should be %s.",
        VAR_17, FUNC_2(VAR_16), FUNC_2(VAR_7));
    break;
   }
  } else if (VAR_10->hr_role == VAR_2 &&
      VAR_10->hr_conn != ((void*)0) &&
      VAR_17 == FUNC_8(VAR_10->hr_conn)) {
   if (VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (conn) is open, but should be closed.",
        VAR_17);
    break;
   }
  } else if (VAR_10->hr_role == VAR_2 &&
      VAR_17 == FUNC_8(VAR_10->hr_remotein)) {
   if (!VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (remote in) is closed, but should be open.",
        VAR_17);
    break;
   }
   if (!FUNC_1(VAR_16)) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (remote in) is %s, but should be %s.",
        VAR_17, FUNC_2(VAR_16), FUNC_2(VAR_7));
    break;
   }
  } else if (VAR_10->hr_role == VAR_2 &&
      VAR_17 == FUNC_8(VAR_10->hr_remoteout)) {
   if (!VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (remote out) is closed, but should be open.",
        VAR_17);
    break;
   }
   if (!FUNC_1(VAR_16)) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d (remote out) is %s, but should be %s.",
        VAR_17, FUNC_2(VAR_16), FUNC_2(VAR_7));
    break;
   }
  } else {
   if (VAR_15) {
    (void)FUNC_10(VAR_12, sizeof(VAR_12),
        "Descriptor %d is open (%s), but should be closed.",
        VAR_17, FUNC_2(VAR_16));
    break;
   }
  }
 }
 if (VAR_12[0] != '\0') {
  FUNC_6(VAR_11);
  FUNC_7("[%s] (%s) ", VAR_10->hr_name,
      FUNC_9(VAR_10->hr_role));
  FUNC_0("%s", VAR_12);
 }
}
