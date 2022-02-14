
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uid_t ;
struct passwd {int dummy; } ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,char const*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,struct passwd*,char*,size_t) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static int
FUNC_12(cap_channel_t *VAR_4, const char *VAR_5, const char *VAR_6,
    uid_t VAR_7, struct passwd *VAR_8, char *VAR_9, size_t VAR_10,
    struct passwd **VAR_11)
{
 nvlist_t *VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(0);
 FUNC_4(VAR_12, "cmd", VAR_5);
 if (FUNC_11(VAR_5, "getpwent") == 0 || FUNC_11(VAR_5, "getpwent_r") == 0) {

 } else if (FUNC_11(VAR_5, "getpwnam") == 0 ||
     FUNC_11(VAR_5, "getpwnam_r") == 0) {
  FUNC_4(VAR_12, "name", VAR_6);
 } else if (FUNC_11(VAR_5, "getpwuid") == 0 ||
     FUNC_11(VAR_5, "getpwuid_r") == 0) {
  FUNC_3(VAR_12, "uid", (uint64_t)VAR_7);
 } else {
  FUNC_0();
 }
 VAR_12 = FUNC_2(VAR_4, VAR_12);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_1 != 0);
  *VAR_11 = ((void*)0);
  return (VAR_1);
 }
 VAR_14 = (int)FUNC_8(VAR_12, "error");
 if (VAR_14 != 0) {
  FUNC_6(VAR_12);
  *VAR_11 = ((void*)0);
  return (VAR_14);
 }

 if (!FUNC_7(VAR_12, "pw_name")) {

  FUNC_6(VAR_12);
  *VAR_11 = ((void*)0);
  return (0);
 }

 VAR_13 = (FUNC_11(VAR_5, "getpwent_r") == 0 ||
     FUNC_11(VAR_5, "getpwnam_r") == 0 || FUNC_11(VAR_5, "getpwuid_r") == 0);

 for (;;) {
  VAR_14 = FUNC_10(VAR_12, VAR_8, VAR_9, VAR_10);
  if (VAR_13 || VAR_14 != VAR_0)
   break;
  FUNC_1(VAR_9 == VAR_2);
  FUNC_1(VAR_10 == VAR_3);
  VAR_14 = FUNC_9();
  if (VAR_14 != 0)
   break;

  VAR_9 = VAR_2;
  VAR_10 = VAR_3;
 }

 FUNC_6(VAR_12);

 if (VAR_14 == 0)
  *VAR_11 = VAR_8;
 else
  *VAR_11 = ((void*)0);

 return (VAR_14);
}
