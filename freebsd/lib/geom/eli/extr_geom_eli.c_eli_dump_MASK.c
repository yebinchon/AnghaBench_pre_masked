
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_eli_metadata {int dummy; } ;


 int FUNC_0 (struct g_eli_metadata*) ;
 int FUNC_1 (int *,char const*,struct g_eli_metadata*) ;
 int FUNC_2 (struct gctl_req*,char*) ;
 char* FUNC_3 (struct gctl_req*,char*,int) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct gctl_req *VAR_0)
{
 struct g_eli_metadata VAR_1;
 const char *VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_4(VAR_0, "nargs");
 if (VAR_4 < 1) {
  FUNC_2(VAR_0, "Too few arguments.");
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = FUNC_3(VAR_0, "arg%d", VAR_3);
  if (FUNC_1(((void*)0), VAR_2, &VAR_1) == -1) {
   FUNC_2(VAR_0, "Not fully done.");
   continue;
  }
  FUNC_5("Metadata on %s:\n", VAR_2);
  FUNC_0(&VAR_1);
  FUNC_5("\n");
 }
}
