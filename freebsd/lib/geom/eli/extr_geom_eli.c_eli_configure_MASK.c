
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (struct gctl_req*,char const*,int,int,int,int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct gctl_req*,char*) ;
 char* FUNC_3 (struct gctl_req*,char*,int) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (struct gctl_req*) ;

__attribute__((used)) static void
FUNC_6(struct gctl_req *VAR_0)
{
 const char *VAR_1;
 bool VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 bool VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = FUNC_4(VAR_0, "nargs");
 if (VAR_18 == 0) {
  FUNC_2(VAR_0, "Too few arguments.");
  return;
 }

 VAR_2 = FUNC_4(VAR_0, "boot");
 VAR_3 = FUNC_4(VAR_0, "noboot");
 VAR_4 = FUNC_4(VAR_0, "geliboot");
 VAR_5 = FUNC_4(VAR_0, "nogeliboot");
 VAR_6 = FUNC_4(VAR_0, "displaypass");
 VAR_7 = FUNC_4(VAR_0, "nodisplaypass");
 VAR_10 = FUNC_4(VAR_0, "trim");
 VAR_11 = FUNC_4(VAR_0, "notrim");
 VAR_8 = FUNC_4(VAR_0, "autoresize");
 VAR_9 = FUNC_4(VAR_0, "noautoresize");

 VAR_12 = -1;
 if (VAR_2 && VAR_3) {
  FUNC_2(VAR_0, "Options -b and -B are mutually exclusive.");
  return;
 }
 if (VAR_2)
  VAR_12 = 1;
 else if (VAR_3)
  VAR_12 = 0;

 VAR_13 = -1;
 if (VAR_4 && VAR_5) {
  FUNC_2(VAR_0, "Options -g and -G are mutually exclusive.");
  return;
 }
 if (VAR_4)
  VAR_13 = 1;
 else if (VAR_5)
  VAR_13 = 0;

 VAR_14 = -1;
 if (VAR_6 && VAR_7) {
  FUNC_2(VAR_0, "Options -d and -D are mutually exclusive.");
  return;
 }
 if (VAR_6)
  VAR_14 = 1;
 else if (VAR_7)
  VAR_14 = 0;

 VAR_15 = -1;
 if (VAR_10 && VAR_11) {
  FUNC_2(VAR_0, "Options -t and -T are mutually exclusive.");
  return;
 }
 if (VAR_10)
  VAR_15 = 1;
 else if (VAR_11)
  VAR_15 = 0;

 VAR_16 = -1;
 if (VAR_8 && VAR_9) {
  FUNC_2(VAR_0, "Options -r and -R are mutually exclusive.");
  return;
 }
 if (VAR_8)
  VAR_16 = 1;
 else if (VAR_9)
  VAR_16 = 0;

 if (VAR_12 == -1 && VAR_13 == -1 && VAR_14 == -1 &&
     VAR_15 == -1 && VAR_16 == -1) {
  FUNC_2(VAR_0, "No option given.");
  return;
 }


 FUNC_5(VAR_0);

 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
  VAR_1 = FUNC_3(VAR_0, "arg%d", VAR_17);
  if (!FUNC_1(VAR_1)) {
   FUNC_0(VAR_0, VAR_1, VAR_12, VAR_13,
       VAR_14, VAR_15, VAR_16);
  }
 }
}
