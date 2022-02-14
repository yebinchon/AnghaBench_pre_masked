
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct group {int dummy; } ;
typedef int nvlist_t ;
typedef scalar_t__ gid_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct group*,char*,size_t) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,char const*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static int
FUNC_12(cap_channel_t *VAR_4, const char *VAR_5, const char *VAR_6,
    gid_t VAR_7, struct group *VAR_8, char *VAR_9, size_t VAR_10,
    struct group **VAR_11)
{
 nvlist_t *VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_12 = FUNC_7(0);
 FUNC_6(VAR_12, "cmd", VAR_5);
 if (FUNC_11(VAR_5, "getgrent") == 0 || FUNC_11(VAR_5, "getgrent_r") == 0) {

 } else if (FUNC_11(VAR_5, "getgrnam") == 0 ||
     FUNC_11(VAR_5, "getgrnam_r") == 0) {
  FUNC_6(VAR_12, "name", VAR_6);
 } else if (FUNC_11(VAR_5, "getgrgid") == 0 ||
     FUNC_11(VAR_5, "getgrgid_r") == 0) {
  FUNC_5(VAR_12, "gid", (uint64_t)VAR_7);
 } else {
  FUNC_0();
 }
 VAR_12 = FUNC_2(VAR_4, VAR_12);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_1 != 0);
  *VAR_11 = ((void*)0);
  return (VAR_1);
 }
 VAR_14 = (int)FUNC_10(VAR_12, "error");
 if (VAR_14 != 0) {
  FUNC_8(VAR_12);
  *VAR_11 = ((void*)0);
  return (VAR_14);
 }

 if (!FUNC_9(VAR_12, "gr_name")) {

  FUNC_8(VAR_12);
  *VAR_11 = ((void*)0);
  return (0);
 }

 VAR_13 = (FUNC_11(VAR_5, "getgrent_r") == 0 ||
     FUNC_11(VAR_5, "getgrnam_r") == 0 || FUNC_11(VAR_5, "getgrgid_r") == 0);

 for (;;) {
  VAR_14 = FUNC_4(VAR_12, VAR_8, VAR_9, VAR_10);
  if (VAR_13 || VAR_14 != VAR_0)
   break;
  FUNC_1(VAR_9 == VAR_2);
  FUNC_1(VAR_10 == VAR_3);
  VAR_14 = FUNC_3();
  if (VAR_14 != 0)
   break;

  VAR_9 = VAR_2;
  VAR_10 = VAR_3;
 }

 FUNC_8(VAR_12);

 if (VAR_14 == 0)
  *VAR_11 = VAR_8;
 else
  *VAR_11 = ((void*)0);

 return (VAR_14);
}
