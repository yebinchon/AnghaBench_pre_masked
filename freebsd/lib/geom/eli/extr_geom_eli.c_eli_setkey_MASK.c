
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {char* error; } ;
struct g_eli_metadata {int dummy; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_2 (struct gctl_req*,struct g_eli_metadata*) ;
 int FUNC_3 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int FUNC_6 (struct gctl_req*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct gctl_req *VAR_0)
{
 struct g_eli_metadata VAR_1;
 const char *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_6(VAR_0, "nargs");
 if (VAR_3 != 1) {
  FUNC_4(VAR_0, "Invalid number of arguments.");
  return;
 }
 VAR_2 = FUNC_5(VAR_0, "arg0");

 if (FUNC_1(VAR_0, VAR_2, &VAR_1) == -1)
  return;

 if (FUNC_0(VAR_2))
  FUNC_2(VAR_0, &VAR_1);
 else
  FUNC_3(VAR_0, VAR_2, &VAR_1);

 if (VAR_0->error == ((void*)0) || VAR_0->error[0] == '\0') {
  FUNC_7("Note, that the master key encrypted with old keys "
      "and/or passphrase may still exists in a metadata backup "
      "file.\n");
 }
}
