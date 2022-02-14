
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int total_buf ;
typedef int time_t ;
typedef int rate_buf ;
struct TYPE_3__ {scalar_t__ prs_state; int prs_removing_vdev; int prs_start_time; int prs_end_time; int prs_copied; int prs_to_copy; int prs_mapping_memory; } ;
typedef TYPE_1__ pool_removal_stat_t ;
typedef int nvlist_t ;
typedef int mem_buf ;
typedef int longlong_t ;
typedef int examined_buf ;
typedef int copied_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int*) ;
 int * FUNC_2 (int *,int ) ;
 int VAR_7 ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int ,int ***,int*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,int) ;
 int * FUNC_9 (int *,int *) ;
 char* FUNC_10 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_11(zpool_handle_t *VAR_8, pool_removal_stat_t *VAR_9)
{
 char VAR_10[7], VAR_11[7], VAR_12[7], VAR_13[7];
 time_t VAR_14, VAR_15;
 nvlist_t *VAR_16, *VAR_17;
 nvlist_t **VAR_18;
 uint_t VAR_19;
 char *VAR_20;

 if (VAR_9 == ((void*)0) || VAR_9->prs_state == VAR_3)
  return;




 VAR_16 = FUNC_9(VAR_8, ((void*)0));
 VAR_17 = FUNC_2(VAR_16,
     VAR_6);
 FUNC_7(FUNC_4(VAR_17, VAR_5,
     &VAR_18, &VAR_19) == 0);
 FUNC_0(VAR_9->prs_removing_vdev < VAR_19);
 VAR_20 = FUNC_10(VAR_7, VAR_8,
     VAR_18[VAR_9->prs_removing_vdev], VAR_0);

 (void) FUNC_5(FUNC_3("remove: "));

 VAR_14 = VAR_9->prs_start_time;
 VAR_15 = VAR_9->prs_end_time;
 FUNC_8(VAR_9->prs_copied, VAR_10, sizeof (VAR_10));




 if (VAR_9->prs_state == VAR_2) {
  uint64_t VAR_21 = (VAR_15 - VAR_14) / 60;

  (void) FUNC_5(FUNC_3("Removal of vdev %llu copied %s "
      "in %lluh%um, completed on %s"),
      (longlong_t)VAR_9->prs_removing_vdev,
      VAR_10,
      (u_longlong_t)(VAR_21 / 60),
      (uint_t)(VAR_21 % 60),
      FUNC_1((time_t *)&VAR_15));
 } else if (VAR_9->prs_state == VAR_1) {
  (void) FUNC_5(FUNC_3("Removal of %s canceled on %s"),
      VAR_20, FUNC_1(&VAR_15));
 } else {
  uint64_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
  double VAR_27;
  uint_t VAR_28;

  FUNC_0(VAR_9->prs_state == VAR_4);




  (void) FUNC_5(FUNC_3(
      "Evacuation of %s in progress since %s"),
      VAR_20, FUNC_1(&VAR_14));

  VAR_22 = VAR_9->prs_copied > 0 ? VAR_9->prs_copied : 1;
  VAR_23 = VAR_9->prs_to_copy;
  VAR_27 = (double)VAR_22 / VAR_23;


  VAR_24 = FUNC_6(((void*)0)) - VAR_9->prs_start_time;
  VAR_24 = VAR_24 > 0 ? VAR_24 : 1;
  VAR_28 = VAR_22 / VAR_24;
  VAR_28 = VAR_28 > 0 ? VAR_28 : 1;
  VAR_25 = ((VAR_23 - VAR_22) / VAR_28) / 60;
  VAR_26 = VAR_25 / 60;

  FUNC_8(VAR_22, VAR_11, sizeof (VAR_11));
  FUNC_8(VAR_23, VAR_12, sizeof (VAR_12));
  FUNC_8(VAR_28, VAR_13, sizeof (VAR_13));





  (void) FUNC_5(FUNC_3("    %s copied out of %s at %s/s, "
      "%.2f%% done"),
      VAR_11, VAR_12, VAR_13, 100 * VAR_27);
  if (VAR_26 < (30 * 24)) {
   (void) FUNC_5(FUNC_3(", %lluh%um to go\n"),
       (u_longlong_t)VAR_26, (uint_t)(VAR_25 % 60));
  } else {
   (void) FUNC_5(FUNC_3(
       ", (copy is slow, no estimated time)\n"));
  }
 }

 if (VAR_9->prs_mapping_memory > 0) {
  char VAR_29[7];
  FUNC_8(VAR_9->prs_mapping_memory, VAR_29, sizeof (VAR_29));
  (void) FUNC_5(FUNC_3("    %s memory used for "
      "removed device mappings\n"),
      VAR_29);
 }
}
