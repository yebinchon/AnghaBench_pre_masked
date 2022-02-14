
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ time_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_10 ;
 unsigned long FUNC_3 () ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,int ,char**) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*) ;
 int VAR_11 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char const*,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *,char const*,int *,int) ;
 int * FUNC_13 (int ,char*) ;

__attribute__((used)) static int
FUNC_14(nvlist_t *VAR_12, const char *VAR_13, const char *VAR_14,
    nvlist_t *VAR_15, int VAR_16)
{
 zpool_handle_t *VAR_17;
 char *VAR_18;
 uint64_t VAR_19;
 uint64_t VAR_20;

 FUNC_8(FUNC_6(VAR_12, VAR_6,
     &VAR_18) == 0);

 FUNC_8(FUNC_7(VAR_12,
     VAR_7, &VAR_19) == 0);
 FUNC_8(FUNC_7(VAR_12,
     VAR_9, &VAR_20) == 0);
 if (!FUNC_0(VAR_20)) {
  (void) FUNC_2(VAR_11, FUNC_4("cannot import '%s': pool "
      "is formatted using an unsupported ZFS version\n"), VAR_18);
  return (1);
 } else if (VAR_19 != VAR_0 &&
     !(VAR_16 & VAR_2)) {
  uint64_t VAR_21;

  if (FUNC_7(VAR_12, VAR_4,
      &VAR_21) == 0) {
   if ((unsigned long)VAR_21 != FUNC_3()) {
    char *VAR_22;
    uint64_t VAR_23;
    time_t VAR_24;

    FUNC_8(FUNC_6(VAR_12,
        VAR_5, &VAR_22) == 0);
    FUNC_8(FUNC_7(VAR_12,
        VAR_8, &VAR_23) == 0);
    VAR_24 = VAR_23;
    (void) FUNC_2(VAR_11, FUNC_4("cannot import "
        "'%s': pool may be in use from other "
        "system, it was last accessed by %s "
        "(hostid: 0x%lx) on %s"), VAR_18, VAR_22,
        (unsigned long)VAR_21,
        FUNC_1(FUNC_5(&VAR_24)));
    (void) FUNC_2(VAR_11, "%s", FUNC_4("use '-f' to "
        "import anyway\n"));
    return (1);
   }
  } else {
   (void) FUNC_2(VAR_11, FUNC_4("cannot import '%s': "
       "pool may be in use from other system\n"), VAR_18);
   (void) FUNC_2(VAR_11, "%s", FUNC_4("use '-f' to import "
       "anyway\n"));
   return (1);
  }
 }

 if (FUNC_12(VAR_10, VAR_12, VAR_13, VAR_15, VAR_16) != 0)
  return (1);

 if (VAR_13 != ((void*)0))
  VAR_18 = (char *)VAR_13;

 if ((VAR_17 = FUNC_13(VAR_10, VAR_18)) == ((void*)0))
  return (1);

 if (FUNC_11(VAR_17) != VAR_1 &&
     !(VAR_16 & VAR_3) &&
     FUNC_10(VAR_17, VAR_14, 0) != 0) {
  FUNC_9(VAR_17);
  return (1);
 }

 FUNC_9(VAR_17);
 return (0);
}
