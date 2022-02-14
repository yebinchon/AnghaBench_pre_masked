
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int tmpmd ;
struct gctl_req {int dummy; } ;
struct g_shsec_metadata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char*) ;
 int FUNC_1 (char const*,int *,int,int ) ;
 int FUNC_2 (struct gctl_req*,char*) ;
 char* FUNC_3 (struct gctl_req*,char*,int) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,struct g_shsec_metadata*) ;
 int FUNC_7 (struct g_shsec_metadata*) ;
 int VAR_1 ;
 char* FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_2)
{
 struct g_shsec_metadata VAR_3, VAR_4;
 const char *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_2, "nargs");
 if (VAR_8 < 1) {
  FUNC_2(VAR_2, "Too few arguments.");
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = FUNC_3(VAR_2, "arg%d", VAR_7);
  VAR_6 = FUNC_1(VAR_5, (u_char *)&VAR_4, sizeof(VAR_4),
      VAR_0);
  if (VAR_6 != 0) {
   FUNC_0(VAR_1, "Can't read metadata from %s: %s.\n",
       VAR_5, FUNC_8(VAR_6));
   FUNC_2(VAR_2, "Not fully done.");
   continue;
  }
  FUNC_6((u_char *)&VAR_4, &VAR_3);
  FUNC_5("Metadata on %s:\n", VAR_5);
  FUNC_7(&VAR_3);
  FUNC_5("\n");
 }
}
