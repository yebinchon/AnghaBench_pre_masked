
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unit ;
struct gctl_req {int dummy; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*) ;
 struct gctl_req* FUNC_2 () ;
 char* FUNC_3 (struct gctl_req*) ;
 int FUNC_4 (struct gctl_req*,char*,int,...) ;
 int FUNC_5 (struct gctl_req*,char*,int,char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_9(int VAR_1)
{
 static int VAR_2;
 struct gctl_req *VAR_3;
 int VAR_4;
 char *VAR_5;
 char const *VAR_6;

 VAR_3 = FUNC_2();
 VAR_4 = 65536;
 VAR_5 = FUNC_6(VAR_4);
 FUNC_4(VAR_3, "verb", -1, "list");
 FUNC_4(VAR_3, "class", -1, "CCD");
 FUNC_4(VAR_3, "unit", sizeof(VAR_1), &VAR_1);
 FUNC_5(VAR_3, "output", VAR_4, VAR_5);
 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 != ((void*)0))
  FUNC_0(1, "%s\nor possibly kernel and ccdconfig out of sync",
   VAR_6);
 if (FUNC_8(VAR_5) == 0)
  FUNC_0(1, "ccd%d not configured", VAR_1);
 if (VAR_0 && !VAR_2) {
  FUNC_7("# ccd\t\tileave\tflags\tcomponent devices\n");
  VAR_2 = 1;
 }
 FUNC_7("%s", VAR_5);
 FUNC_1(VAR_5);
 return (0);
}
