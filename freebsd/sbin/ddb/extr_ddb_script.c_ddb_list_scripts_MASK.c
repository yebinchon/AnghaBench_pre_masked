
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (char const*,char*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;

repeat:
 if (FUNC_7(VAR_4, ((void*)0), &VAR_12, ((void*)0), 0) < 0)
  FUNC_1(VAR_3, "sysctl: %s", VAR_4);
 if (VAR_12 == 0)
  return;
 VAR_7 = FUNC_3(VAR_12);
 if (VAR_7 == ((void*)0))
  FUNC_1(VAR_3, "malloc");
 FUNC_0(VAR_7, VAR_12);
 VAR_13 = VAR_12;
 VAR_14 = FUNC_7(VAR_4, VAR_7, &VAR_13, ((void*)0), 0);
 if (VAR_14 < 0 && VAR_5 != VAR_1)
  FUNC_1(VAR_3, "sysctl: %s", VAR_4);
 if (VAR_14 < 0) {
  FUNC_2(VAR_7);
  goto repeat;
 }






 if (VAR_6 == ((void*)0)) {
  FUNC_4("%s", VAR_7);
  FUNC_2(VAR_7);
  return;
 }





 VAR_9 = VAR_7;
 while ((VAR_8 = FUNC_6(&VAR_9, "\n")) != ((void*)0)) {
  VAR_10 = VAR_8;
  VAR_11 = FUNC_6(&VAR_10, "=");
  if (VAR_10 == ((void*)0))
   continue;
  if (FUNC_5(VAR_6, VAR_11) != 0)
   continue;
  FUNC_4("%s\n", VAR_10);
  break;
 }
 if (VAR_8 == ((void*)0)) {
  VAR_5 = VAR_0;
  FUNC_1(VAR_2, "%s", VAR_6);
 }
 FUNC_2(VAR_7);
}
