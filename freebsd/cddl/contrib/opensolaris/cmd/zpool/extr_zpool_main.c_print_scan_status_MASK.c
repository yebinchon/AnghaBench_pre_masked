
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int total_buf ;
typedef scalar_t__ time_t ;
typedef int srate_buf ;
typedef int scanned_buf ;
typedef int processed_buf ;
struct TYPE_3__ {scalar_t__ pss_func; scalar_t__ pss_start_time; scalar_t__ pss_end_time; scalar_t__ pss_pass_scrub_pause; int pss_processed; scalar_t__ pss_state; int pss_examined; int pss_pass_exam; int pss_issued; int pss_pass_issued; int pss_to_examine; int pss_pass_start; scalar_t__ pss_pass_scrub_spent_paused; scalar_t__ pss_errors; } ;
typedef TYPE_1__ pool_scan_stat_t ;
typedef int issued_buf ;
typedef int irate_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (scalar_t__*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void
FUNC_6(pool_scan_stat_t *VAR_8)
{
 time_t VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint64_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 uint_t VAR_23, VAR_24;
 double VAR_25;
 char VAR_26[7], VAR_27[7], VAR_28[7], VAR_29[7];
 char VAR_30[7], VAR_31[7];

 (void) FUNC_3(FUNC_2("  scan: "));


 if (VAR_8 == ((void*)0) || VAR_8->pss_func == VAR_4 ||
     VAR_8->pss_func >= VAR_3) {
  (void) FUNC_3(FUNC_2("none requested\n"));
  return;
 }

 VAR_9 = VAR_8->pss_start_time;
 VAR_10 = VAR_8->pss_end_time;
 VAR_11 = VAR_8->pss_pass_scrub_pause;

 FUNC_5(VAR_8->pss_processed, VAR_26, sizeof (VAR_26));

 FUNC_0(VAR_8->pss_func == VAR_6 ||
     VAR_8->pss_func == VAR_5);


 if (VAR_8->pss_state == VAR_1) {
  VAR_12 = VAR_10 - VAR_9;
  VAR_17 = VAR_12 / 60 / 60 / 24;
  VAR_16 = (VAR_12 / 60 / 60) % 24;
  VAR_15 = (VAR_12 / 60) % 60;
  VAR_14 = (VAR_12 % 60);

  if (VAR_8->pss_func == VAR_6) {
   (void) FUNC_3(FUNC_2("scrub repaired %s "
                            "in %llu days %02llu:%02llu:%02llu "
       "with %llu errors on %s"), VAR_26,
                            (u_longlong_t)VAR_17, (u_longlong_t)VAR_16,
                            (u_longlong_t)VAR_15, (u_longlong_t)VAR_14,
                            (u_longlong_t)VAR_8->pss_errors, FUNC_1(&VAR_10));
  } else if (VAR_8->pss_func == VAR_5) {
                       (void) FUNC_3(FUNC_2("resilvered %s "
                           "in %llu days %02llu:%02llu:%02llu "
                           "with %llu errors on %s"), VAR_26,
                           (u_longlong_t)VAR_17, (u_longlong_t)VAR_16,
                           (u_longlong_t)VAR_15, (u_longlong_t)VAR_14,
                           (u_longlong_t)VAR_8->pss_errors, FUNC_1(&VAR_10));

  }

  return;
 } else if (VAR_8->pss_state == VAR_0) {
  if (VAR_8->pss_func == VAR_6) {
   (void) FUNC_3(FUNC_2("scrub canceled on %s"),
       FUNC_1(&VAR_10));
  } else if (VAR_8->pss_func == VAR_5) {
   (void) FUNC_3(FUNC_2("resilver canceled on %s"),
       FUNC_1(&VAR_10));
  }
  return;
 }

 FUNC_0(VAR_8->pss_state == VAR_2);


 if (VAR_8->pss_func == VAR_6) {
  if (VAR_11 == 0) {
   (void) FUNC_3(FUNC_2("scrub in progress since %s"),
       FUNC_1(&VAR_9));
  } else {
   (void) FUNC_3(FUNC_2("scrub paused since %s"),
       FUNC_1(&VAR_11));
   (void) FUNC_3(FUNC_2("\tscrub started on %s"),
       FUNC_1(&VAR_9));
  }
 } else if (VAR_8->pss_func == VAR_5) {
  (void) FUNC_3(FUNC_2("resilver in progress since %s"),
      FUNC_1(&VAR_9));
 }

 VAR_19 = VAR_8->pss_examined;
 VAR_18 = VAR_8->pss_pass_exam;
 VAR_21 = VAR_8->pss_issued;
 VAR_20 = VAR_8->pss_pass_issued;
 VAR_22 = VAR_8->pss_to_examine;


 VAR_25 = (double)VAR_21 / VAR_22;


 VAR_13 = FUNC_4(((void*)0)) - VAR_8->pss_pass_start;
 VAR_13 -= VAR_8->pss_pass_scrub_spent_paused;
 VAR_13 = (VAR_13 != 0) ? VAR_13 : 1;

 VAR_23 = VAR_18 / VAR_13;
 VAR_24 = VAR_20 / VAR_13;
 VAR_12 = (VAR_24 != 0) ?
     ((VAR_22 - VAR_21) / VAR_24) : VAR_7;

 VAR_17 = VAR_12 / 60 / 60 / 24;
 VAR_16 = (VAR_12 / 60 / 60) % 24;
 VAR_15 = (VAR_12 / 60) % 60;
 VAR_14 = (VAR_12 % 60);


 FUNC_5(VAR_19, VAR_27, sizeof (VAR_27));
 FUNC_5(VAR_21, VAR_28, sizeof (VAR_28));
 FUNC_5(VAR_22, VAR_29, sizeof (VAR_29));
 FUNC_5(VAR_23, VAR_30, sizeof (VAR_30));
 FUNC_5(VAR_24, VAR_31, sizeof (VAR_31));


 if (VAR_11 == 0) {
  (void) FUNC_3(FUNC_2("\t%s scanned at %s/s, "
      "%s issued at %s/s, %s total\n"),
      VAR_27, VAR_30, VAR_28, VAR_31, VAR_29);
 } else {
  (void) FUNC_3(FUNC_2("\t%s scanned, %s issued, %s total\n"),
                    VAR_27, VAR_28, VAR_29);
 }

 if (VAR_8->pss_func == VAR_5) {
  (void) FUNC_3(FUNC_2("\t%s resilvered, %.2f%% done"),
      VAR_26, 100 * VAR_25);
 } else if (VAR_8->pss_func == VAR_6) {
  (void) FUNC_3(FUNC_2("\t%s repaired, %.2f%% done"),
      VAR_26, 100 * VAR_25);
 }

 if (VAR_11 == 0) {
  if (VAR_24 >= 10 * 1024 * 1024) {
   (void) FUNC_3(FUNC_2(", %llu days "
                            "%02llu:%02llu:%02llu to go\n"),
                            (u_longlong_t)VAR_17, (u_longlong_t)VAR_16,
                            (u_longlong_t)VAR_15, (u_longlong_t)VAR_14);
  } else {
   (void) FUNC_3(FUNC_2(", no estimated "
                            "completion time\n"));
  }
 } else {
  (void) FUNC_3(FUNC_2("\n"));
 }
}
