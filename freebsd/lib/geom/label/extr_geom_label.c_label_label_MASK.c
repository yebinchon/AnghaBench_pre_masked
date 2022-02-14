
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct gctl_req {int dummy; } ;
struct g_label_metadata {scalar_t__ md_provsize; int * md_label; int md_version; int * md_magic; } ;
typedef int sector ;


 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (struct gctl_req*,char*,...) ;
 char* FUNC_6 (struct gctl_req*,char*) ;
 int FUNC_7 (struct gctl_req*,char*) ;
 int FUNC_8 (struct g_label_metadata*,int *) ;
 int FUNC_9 (char*,char const*) ;
 int VAR_3 ;
 char* FUNC_10 (int) ;
 int FUNC_11 (int *,char const*,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_12(struct gctl_req *VAR_5)
{
 struct g_label_metadata VAR_6;
 const char *VAR_7, *VAR_8;
 u_char VAR_9[512];
 int VAR_10, VAR_11;

 FUNC_0(VAR_9, sizeof(VAR_9));
 VAR_11 = FUNC_7(VAR_5, "nargs");
 if (VAR_11 != 2) {
  FUNC_5(VAR_5, "Invalid number of arguments.");
  return;
 }




 VAR_7 = FUNC_6(VAR_5, "arg1");
 VAR_10 = FUNC_3(VAR_7, ((void*)0));
 if (VAR_10 != 0) {
  FUNC_5(VAR_5, "Can't store metadata on %s: %s.", VAR_7,
      FUNC_10(VAR_10));
  return;
 }

 FUNC_11(VAR_6.md_magic, VAR_0, sizeof(VAR_6.md_magic));
 VAR_6.md_version = VAR_1;
 VAR_8 = FUNC_6(VAR_5, "arg0");
 FUNC_0(VAR_6.md_label, sizeof(VAR_6.md_label));
 FUNC_11(VAR_6.md_label, VAR_8, sizeof(VAR_6.md_label));
 VAR_6.md_provsize = FUNC_2(VAR_7);
 if (VAR_6.md_provsize == 0) {
  FUNC_5(VAR_5, "Can't get mediasize of %s: %s.", VAR_7,
      FUNC_10(VAR_2));
  return;
 }




 FUNC_8(&VAR_6, VAR_9);
 VAR_10 = FUNC_4(VAR_7, VAR_9, sizeof(VAR_9));
 if (VAR_10 != 0) {
  FUNC_1(VAR_3, "Can't store metadata on %s: %s.\n", VAR_7,
      FUNC_10(VAR_10));
  FUNC_5(VAR_5, "Not done.");
 }
 if (VAR_4)
  FUNC_9("Metadata value stored on %s.\n", VAR_7);
}
