
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_9__ {char* zc_name; int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int parent ;
struct TYPE_10__ {int libzfs_fd; } ;
typedef TYPE_2__ libzfs_handle_t ;
typedef int errbuf ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;
 int * FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int ,char*) ;
 int FUNC_11 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_15(libzfs_handle_t *VAR_12, const char *VAR_13, uint64_t *VAR_14,
    boolean_t VAR_15, int *VAR_16)
{
 zfs_cmd_t VAR_17 = { 0 };
 char VAR_18[VAR_8];
 char *VAR_19;
 zfs_handle_t *VAR_20;
 char VAR_21[1024];
 uint64_t VAR_22;

 (void) FUNC_5(VAR_21, sizeof (VAR_21),
     FUNC_0(VAR_6, "cannot create '%s'"), VAR_13);


 if (FUNC_4(VAR_13, VAR_18, sizeof (VAR_18)) != 0) {
  FUNC_11(VAR_12, FUNC_0(VAR_6,
      "missing dataset name"));
  return (FUNC_10(VAR_12, VAR_3, VAR_21));
 }


 if ((VAR_19 = FUNC_6(VAR_18, '/')) == ((void*)0))
  VAR_19 = VAR_18 + FUNC_7(VAR_18);
 (void) FUNC_8(VAR_17.zc_name, VAR_18, VAR_19 - VAR_18);
 VAR_17.zc_name[VAR_19 - VAR_18] = '\0';
 if (FUNC_2(VAR_12->libzfs_fd, VAR_7, &VAR_17) != 0 &&
     VAR_11 == VAR_0) {
  FUNC_11(VAR_12, FUNC_0(VAR_6,
      "no such pool '%s'"), VAR_17.zc_name);
  return (FUNC_10(VAR_12, VAR_4, VAR_21));
 }


 while ((VAR_20 = FUNC_3(VAR_12, VAR_18)) == ((void*)0)) {
  if (VAR_11 == VAR_0 && VAR_15) {



   if (FUNC_4(VAR_18, VAR_18, sizeof (VAR_18)) != 0) {
    FUNC_11(VAR_12, FUNC_0(VAR_6,
        "no such pool '%s'"), VAR_17.zc_name);
    return (FUNC_10(VAR_12, VAR_4, VAR_21));
   }
  } else if (VAR_11 == VAR_0) {
   FUNC_11(VAR_12, FUNC_0(VAR_6,
       "parent does not exist"));
   return (FUNC_10(VAR_12, VAR_4, VAR_21));
  } else
   return (FUNC_14(VAR_12, VAR_11, VAR_21));
 }

 VAR_22 = FUNC_13(VAR_20, VAR_9);
 if (VAR_14 != ((void*)0))
  *VAR_14 = VAR_22;


 if (FUNC_1() != VAR_5 && !VAR_22) {
  (void) FUNC_14(VAR_12, VAR_1, VAR_21);
  FUNC_9(VAR_20);
  return (-1);
 }


 if (FUNC_12(VAR_20) != VAR_10) {
  FUNC_11(VAR_12, FUNC_0(VAR_6,
      "parent is not a filesystem"));
  (void) FUNC_10(VAR_12, VAR_2, VAR_21);
  FUNC_9(VAR_20);
  return (-1);
 }

 FUNC_9(VAR_20);
 if (VAR_16 != ((void*)0))
  *VAR_16 = FUNC_7(VAR_18);
 return (0);
}
