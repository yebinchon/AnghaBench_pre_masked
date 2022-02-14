
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint_t ;
typedef unsigned long long uint64_t ;
struct stat64 {scalar_t__ st_size; } ;
struct TYPE_5__ {char* zprl_type; int zprl_children; unsigned long long zprl_parity; int member_0; } ;
typedef TYPE_1__ replication_level_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,struct stat64*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned long long) ;
 scalar_t__ FUNC_6 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_7 (int *,int ,char**) ;
 int FUNC_8 (int *,int ,unsigned long long*) ;
 int FUNC_9 (char*,int ) ;
 TYPE_1__* FUNC_10 (int) ;
 int FUNC_11 (char*,struct stat64*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (int ,...) ;
 int FUNC_14 (int) ;

__attribute__((used)) static replication_level_t *
FUNC_15(nvlist_t *VAR_13, boolean_t VAR_14)
{
 nvlist_t **VAR_15;
 uint_t VAR_16, VAR_17;
 nvlist_t **VAR_18;
 uint_t VAR_19, VAR_20;
 nvlist_t *VAR_21;
 char *VAR_22;
 replication_level_t VAR_23 = {0};
 replication_level_t VAR_24;
 replication_level_t *VAR_25;
 boolean_t VAR_26;

 VAR_25 = FUNC_10(sizeof (replication_level_t));

 FUNC_14(FUNC_6(VAR_13, VAR_7,
     &VAR_15, &VAR_17) == 0);

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  uint64_t VAR_27 = VAR_0;

  VAR_21 = VAR_15[VAR_16];





  (void) FUNC_8(VAR_21, VAR_8, &VAR_27);
  if (VAR_27)
   continue;

  FUNC_14(FUNC_7(VAR_21, VAR_11,
      &VAR_22) == 0);
  if (FUNC_6(VAR_21, VAR_7,
      &VAR_18, &VAR_20) != 0) {



   VAR_24.zprl_type = VAR_22;
   VAR_24.zprl_children = 1;
   VAR_24.zprl_parity = 0;
  } else {
   uint64_t VAR_28;
   VAR_24.zprl_type = VAR_22;
   VAR_24.zprl_children = 0;

   if (FUNC_12(VAR_22, VAR_4) == 0) {
    FUNC_14(FUNC_8(VAR_21,
        VAR_9,
        &VAR_24.zprl_parity) == 0);
    FUNC_0(VAR_24.zprl_parity != 0);
   } else {
    VAR_24.zprl_parity = 0;
   }






   VAR_22 = ((void*)0);
   VAR_26 = 0;
   VAR_28 = -1ULL;
   for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
    boolean_t VAR_29, VAR_30;
    nvlist_t *VAR_31 = VAR_18[VAR_19];
    char *VAR_32;
    struct stat64 VAR_33;
    uint64_t VAR_34 = -1ULL;
    char *VAR_35;
    int VAR_36, VAR_37;

    VAR_24.zprl_children++;

    FUNC_14(FUNC_7(VAR_31,
        VAR_11, &VAR_35) == 0);





    VAR_29 = FUNC_12(VAR_35,
        VAR_5) == 0;
    VAR_30 = FUNC_12(VAR_35,
        VAR_6) == 0;
    if (VAR_29 || VAR_30) {
     nvlist_t **VAR_38;
     uint_t VAR_39;

     FUNC_14(FUNC_6(VAR_31,
         VAR_7, &VAR_38,
         &VAR_39) == 0);
     FUNC_0((VAR_29 && VAR_39 == 2)
         || (VAR_30 && VAR_39 >= 2));
     VAR_31 = VAR_38[0];

     FUNC_14(FUNC_7(VAR_31,
         VAR_11,
         &VAR_35) == 0);
     if (FUNC_12(VAR_35,
         VAR_6) == 0) {




      FUNC_14(
          FUNC_6(
       VAR_31,
       VAR_7,
       &VAR_38,
          &VAR_39) == 0);
      FUNC_0(VAR_39 >= 2);
      VAR_31 = VAR_38[0];
     }
    }

    FUNC_14(FUNC_7(VAR_31,
        VAR_10, &VAR_32) == 0);





    if (!VAR_26 && VAR_22 != ((void*)0) &&
        FUNC_12(VAR_22, VAR_35) != 0) {
     if (VAR_25 != ((void*)0))
      FUNC_2(VAR_25);
     VAR_25 = ((void*)0);
     if (VAR_14)
      FUNC_13(FUNC_4(
          "mismatched replication "
          "level: %s contains both "
          "files and devices\n"),
          VAR_24.zprl_type);
     else
      return (((void*)0));
     VAR_26 = VAR_1;
    }
    if ((VAR_36 = FUNC_9(VAR_32, VAR_3)) >= 0) {
     VAR_37 = FUNC_3(VAR_36, &VAR_33);
     (void) FUNC_1(VAR_36);
    } else {
     VAR_37 = FUNC_11(VAR_32, &VAR_33);
    }

    if (VAR_37 != 0 ||
        VAR_33.st_size == 0 ||
        VAR_33.st_size == VAR_2)
     continue;

    VAR_34 = VAR_33.st_size;







    if (!VAR_26 &&
        (VAR_28 != -1ULL &&
        (FUNC_5(VAR_34 - VAR_28) >
        VAR_12))) {
     if (VAR_25 != ((void*)0))
      FUNC_2(VAR_25);
     VAR_25 = ((void*)0);
     if (VAR_14)
      FUNC_13(FUNC_4(
          "%s contains devices of "
          "different sizes\n"),
          VAR_24.zprl_type);
     else
      return (((void*)0));
     VAR_26 = VAR_1;
    }

    VAR_22 = VAR_35;
    VAR_28 = VAR_34;
   }
  }






  if (VAR_23.zprl_type != ((void*)0)) {
   if (FUNC_12(VAR_23.zprl_type, VAR_24.zprl_type) != 0) {
    if (VAR_25 != ((void*)0))
     FUNC_2(VAR_25);
    VAR_25 = ((void*)0);
    if (VAR_14)
     FUNC_13(FUNC_4(
         "mismatched replication level: "
         "both %s and %s vdevs are "
         "present\n"),
         VAR_23.zprl_type, VAR_24.zprl_type);
    else
     return (((void*)0));
   } else if (VAR_23.zprl_parity != VAR_24.zprl_parity) {
    if (VAR_25)
     FUNC_2(VAR_25);
    VAR_25 = ((void*)0);
    if (VAR_14)
     FUNC_13(FUNC_4(
         "mismatched replication level: "
         "both %llu and %llu device parity "
         "%s vdevs are present\n"),
         VAR_23.zprl_parity,
         VAR_24.zprl_parity,
         VAR_24.zprl_type);
    else
     return (((void*)0));
   } else if (VAR_23.zprl_children != VAR_24.zprl_children) {
    if (VAR_25)
     FUNC_2(VAR_25);
    VAR_25 = ((void*)0);
    if (VAR_14)
     FUNC_13(FUNC_4(
         "mismatched replication level: "
         "both %llu-way and %llu-way %s "
         "vdevs are present\n"),
         VAR_23.zprl_children,
         VAR_24.zprl_children,
         VAR_24.zprl_type);
    else
     return (((void*)0));
   }
  }
  VAR_23 = VAR_24;
 }

 if (VAR_25 != ((void*)0))
  *VAR_25 = VAR_24;

 return (VAR_25);
}
