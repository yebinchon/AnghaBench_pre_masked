
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct utsname {char* nodename; } ;
struct gctl_req {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct gctl_req*) ;
 struct gctl_req* FUNC_3 () ;
 char* FUNC_4 (struct gctl_req*) ;
 int FUNC_5 (struct gctl_req*,char*,int,char const*) ;
 int FUNC_6 (struct gctl_req*,char*,int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct utsname*) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static void
FUNC_10(FILE *VAR_1, const char *VAR_2)
{
 struct gctl_req *VAR_3;
 struct utsname VAR_4;
 const char *VAR_5;
 time_t VAR_6;
 char VAR_7[VAR_0 + 1];

 FUNC_8(&VAR_4);
 FUNC_7(&VAR_6);

 VAR_3 = FUNC_3();
 FUNC_5(VAR_3, "class", -1, "VINUM");
 FUNC_5(VAR_3, "verb", -1, "getconfig");
 FUNC_5(VAR_3, "comment", -1, VAR_2);
 FUNC_6(VAR_3, "config", sizeof(VAR_7), VAR_7);
 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 != ((void*)0)) {
  FUNC_9("can't get configuration: %s", VAR_5);
  return;
 }
 FUNC_2(VAR_3);

 FUNC_1(VAR_1, "# Vinum configuration of %s, saved at %s",
     VAR_4.nodename,
     FUNC_0(&VAR_6));

 if (*VAR_2 != '\0')
     FUNC_1(VAR_1, "# Current configuration:\n");

 FUNC_1(VAR_1, "%s", VAR_7);
}
