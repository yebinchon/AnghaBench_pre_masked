
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint_t ;
typedef void* uid_t ;
typedef void* time_t ;
typedef int tbuf ;
struct tm {int dummy; } ;
struct passwd {char* pw_name; } ;
typedef int nvlist_t ;
struct TYPE_2__ {int longfmt; int internal; int first; } ;
typedef TYPE_1__ hist_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;
 struct passwd* FUNC_5 (void*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (void**,struct tm*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ***,int*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int,char*,struct tm*) ;
 int FUNC_13 (int) ;
 char** VAR_18 ;
 int FUNC_14 (int *,int **) ;
 char* FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(zpool_handle_t *VAR_19, void *VAR_20)
{
 nvlist_t *VAR_21;
 nvlist_t **VAR_22;
 uint_t VAR_23;
 int VAR_24, VAR_25;
 hist_cbdata_t *VAR_26 = (hist_cbdata_t *)VAR_20;

 VAR_26->first = VAR_0;

 (void) FUNC_11(FUNC_6("History for '%s':\n"), FUNC_15(VAR_19));

 if ((VAR_24 = FUNC_14(VAR_19, &VAR_21)) != 0)
  return (VAR_24);

 FUNC_13(FUNC_10(VAR_21, VAR_13,
     &VAR_22, &VAR_23) == 0);
 for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) {
  nvlist_t *VAR_27 = VAR_22[VAR_25];
  char VAR_28[30] = "";

  if (FUNC_8(VAR_27, VAR_14)) {
   time_t VAR_29;
   struct tm VAR_30;

   VAR_29 = FUNC_4(VAR_22[VAR_25],
       VAR_14);
   (void) FUNC_7(&VAR_29, &VAR_30);
   (void) FUNC_12(VAR_28, sizeof (VAR_28), "%F.%T", &VAR_30);
  }

  if (FUNC_8(VAR_27, VAR_2)) {
   (void) FUNC_11("%s %s", VAR_28,
       FUNC_3(VAR_27, VAR_2));
  } else if (FUNC_8(VAR_27, VAR_8)) {
   int VAR_31 =
       FUNC_4(VAR_27, VAR_8);
   if (!VAR_26->internal)
    continue;
   if (VAR_31 >= VAR_1) {
    (void) FUNC_11("%s unrecognized record:\n",
        VAR_28);
    FUNC_0(VAR_27, 4);
    continue;
   }
   (void) FUNC_11("%s [internal %s txg:%lld] %s", VAR_28,
       VAR_18[VAR_31],
       FUNC_4(VAR_27, VAR_15),
       FUNC_3(VAR_27, VAR_10));
  } else if (FUNC_8(VAR_27, VAR_9)) {
   if (!VAR_26->internal)
    continue;
   (void) FUNC_11("%s [txg:%lld] %s", VAR_28,
       FUNC_4(VAR_27, VAR_15),
       FUNC_3(VAR_27, VAR_9));
   if (FUNC_8(VAR_27, VAR_4)) {
    (void) FUNC_11(" %s (%llu)",
        FUNC_3(VAR_27,
        VAR_4),
        FUNC_4(VAR_27,
        VAR_3));
   }
   (void) FUNC_11(" %s", FUNC_3(VAR_27,
       VAR_10));
  } else if (FUNC_8(VAR_27, VAR_11)) {
   if (!VAR_26->internal)
    continue;
   (void) FUNC_11("%s ioctl %s\n", VAR_28,
       FUNC_3(VAR_27, VAR_11));
   if (FUNC_8(VAR_27, VAR_7)) {
    (void) FUNC_11("    input:\n");
    FUNC_0(FUNC_2(VAR_27,
        VAR_7), 8);
   }
   if (FUNC_8(VAR_27, VAR_12)) {
    (void) FUNC_11("    output:\n");
    FUNC_0(FUNC_2(VAR_27,
        VAR_12), 8);
   }
   if (FUNC_8(VAR_27, VAR_5)) {
    (void) FUNC_11("    errno: %lld\n",
        FUNC_1(VAR_27,
        VAR_5));
   }
  } else {
   if (!VAR_26->internal)
    continue;
   (void) FUNC_11("%s unrecognized record:\n", VAR_28);
   FUNC_0(VAR_27, 4);
  }

  if (!VAR_26->longfmt) {
   (void) FUNC_11("\n");
   continue;
  }
  (void) FUNC_11(" [");
  if (FUNC_8(VAR_27, VAR_16)) {
   uid_t VAR_32 = FUNC_4(VAR_27, VAR_16);
   struct passwd *VAR_33 = FUNC_5(VAR_32);
   (void) FUNC_11("user %d ", (int)VAR_32);
   if (VAR_33 != ((void*)0))
    (void) FUNC_11("(%s) ", VAR_33->pw_name);
  }
  if (FUNC_8(VAR_27, VAR_6)) {
   (void) FUNC_11("on %s",
       FUNC_3(VAR_27, VAR_6));
  }
  if (FUNC_8(VAR_27, VAR_17)) {
   (void) FUNC_11(":%s",
       FUNC_3(VAR_27, VAR_17));
  }
  (void) FUNC_11("]");
  (void) FUNC_11("\n");
 }
 (void) FUNC_11("\n");
 FUNC_9(VAR_21);

 return (VAR_24);
}
