
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int buf ;


 int VAR_0 ;




 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct gctl_req*) ;
 struct gctl_req* FUNC_3 () ;
 char* FUNC_4 (struct gctl_req*) ;
 int FUNC_5 (struct gctl_req*,char*,int,char*) ;
 int FUNC_6 (struct gctl_req*,char*,int,char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,char const*,int) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_14(const char *VAR_1, int VAR_2, int VAR_3)
{
 struct gctl_req *VAR_4;
 char VAR_5[1], VAR_6[VAR_0 - 1], *VAR_7, *VAR_8;
 const char *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 char VAR_16[1024];

 VAR_5[0] = '\0';


 VAR_4 = FUNC_3();
 FUNC_5(VAR_4, "class", -1, "VINUM");
 FUNC_5(VAR_4, "verb", -1, "getconfig");
 FUNC_5(VAR_4, "comment", -1, VAR_5);
 FUNC_6(VAR_4, "config", sizeof(VAR_6), VAR_6);
 VAR_9 = FUNC_4(VAR_4);
 if (VAR_9 != ((void*)0)) {
  FUNC_13("can't get configuration: %s", VAR_9);
  return (((void*)0));
 }
 FUNC_2(VAR_4);

 VAR_13 = 0;
 VAR_14 = FUNC_12(VAR_6);
 VAR_11 = 0;
 VAR_7 = FUNC_7(VAR_3 + 1);


 for (VAR_12 = 0; VAR_12 < 10000; VAR_12++) {
  FUNC_9(VAR_7, VAR_3, "%s%d", VAR_1, VAR_12);
  VAR_15 = 0;
  VAR_13 = 0;

  for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
   if (VAR_6[VAR_11] == '\n' || VAR_6[VAR_11] == '\0') {
    VAR_8 = VAR_6 + VAR_13;
    FUNC_11(VAR_16, VAR_8, (VAR_11 - VAR_13) + 1);
    VAR_13 = VAR_11 + 1;
    switch (VAR_2) {
    case 131:
     VAR_10 = FUNC_0(VAR_16, "drive");
     break;
    case 128:
     VAR_10 = FUNC_0(VAR_16, "volume");
     break;
    case 130:
    case 129:
     VAR_10 = FUNC_0(VAR_16, "name");
     break;
    default:
     FUNC_8("Invalid type given\n");
     continue;
    }
    if (VAR_10 == ((void*)0))
     continue;
    if (!FUNC_10(VAR_7, VAR_10)) {
     VAR_15 = 1;

    }
   }
  }
  if (!VAR_15)
   return (VAR_7);
 }
 FUNC_1(VAR_7);
 return (((void*)0));
}
