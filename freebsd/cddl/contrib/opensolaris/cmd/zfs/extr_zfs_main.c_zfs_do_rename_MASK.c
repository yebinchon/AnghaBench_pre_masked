
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {void* recurse; void* nounmount; void* forceunmount; int member_0; } ;
typedef TYPE_1__ renameflags_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 int * FUNC_10 (int ,char*,int) ;
 scalar_t__ FUNC_11 (int *,char*,char*,TYPE_1__) ;

__attribute__((used)) static int
FUNC_12(int VAR_10, char **VAR_11)
{
 zfs_handle_t *VAR_12;
 renameflags_t VAR_13 = { 0 };
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 boolean_t VAR_17 = VAR_0;
 boolean_t VAR_18 = VAR_0;
 char *VAR_19 = ((void*)0);


 while ((VAR_14 = FUNC_2(VAR_10, VAR_11, "fpru")) != -1) {
  switch (VAR_14) {
  case 'p':
   VAR_17 = VAR_1;
   break;
  case 'r':
   VAR_13.recurse = VAR_1;
   break;
  case 'u':
   VAR_13.nounmount = VAR_1;
   break;
  case 'f':
   VAR_13.forceunmount = VAR_1;
   break;
  case '?':
  default:
   (void) FUNC_1(VAR_9, FUNC_3("invalid option '%c'\n"),
       VAR_8);
   FUNC_5(VAR_0);
  }
 }

 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;


 if (VAR_10 < 1) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("missing source dataset "
      "argument\n"));
  FUNC_5(VAR_0);
 }
 if (VAR_10 < 2) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("missing target dataset "
      "argument\n"));
  FUNC_5(VAR_0);
 }
 if (VAR_10 > 2) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("too many arguments\n"));
  FUNC_5(VAR_0);
 }

 if (VAR_13.recurse && VAR_17) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("-p and -r options are mutually "
      "exclusive\n"));
  FUNC_5(VAR_0);
 }

 if (VAR_13.recurse && FUNC_4(VAR_11[0], '@') == ((void*)0)) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("source dataset for recursive "
      "rename must be a snapshot\n"));
  FUNC_5(VAR_0);
 }

 if (VAR_13.nounmount && VAR_17) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("-u and -p options are mutually "
      "exclusive\n"));
  FUNC_5(VAR_0);
 }

 if (FUNC_4(VAR_11[0], '#') != ((void*)0))
  VAR_18 = VAR_1;

 if (VAR_18 && (VAR_13.nounmount || VAR_13.recurse ||
     VAR_13.forceunmount || VAR_17)) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("options are not supported "
      "for renaming bookmarks\n"));
  FUNC_5(VAR_0);
 }

 if (VAR_13.nounmount)
  VAR_16 = VAR_4;
 else if (VAR_17)
  VAR_16 = VAR_4 | VAR_5;
 else if (VAR_18)
  VAR_16 = VAR_2;
 else
  VAR_16 = VAR_3;

 if (VAR_13.recurse) {






  VAR_19 = FUNC_4(VAR_11[0], '@');
  FUNC_0(VAR_19 != ((void*)0));
  *VAR_19 = '\0';
  VAR_19++;
 }

 if ((VAR_12 = FUNC_10(VAR_6, VAR_11[0], VAR_16)) == ((void*)0))
  return (1);


 if (VAR_17 && FUNC_9(VAR_11[1], FUNC_8(VAR_12)) &&
     FUNC_7(VAR_6, VAR_11[1]) != 0) {
  FUNC_6(VAR_12);
  return (1);
 }

 VAR_15 = (FUNC_11(VAR_12, VAR_19, VAR_11[1], VAR_13) != 0);

 FUNC_6(VAR_12);
 return (VAR_15);
}
