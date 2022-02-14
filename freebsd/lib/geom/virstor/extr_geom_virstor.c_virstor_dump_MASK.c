
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int tmpmd ;
struct gctl_req {int dummy; } ;
struct g_virstor_metadata {int dummy; } ;
typedef int param ;
typedef int md ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (char const*,int *,int,int ) ;
 int FUNC_3 (struct gctl_req*,char*) ;
 char* FUNC_4 (struct gctl_req*,char*,char*) ;
 int FUNC_5 (struct gctl_req*,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,char*,int) ;
 int VAR_1 ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int *,struct g_virstor_metadata*) ;
 int FUNC_10 (struct g_virstor_metadata*) ;

__attribute__((used)) static void
FUNC_11(struct gctl_req *VAR_2)
{
 struct g_virstor_metadata VAR_3;
 u_char VAR_4[512];
 const char *VAR_5;
 char VAR_6[16];
 int VAR_7, VAR_8, VAR_9;

 FUNC_0(sizeof(VAR_4) >= sizeof(VAR_3));

 VAR_7 = FUNC_5(VAR_2, "nargs");
 if (VAR_7 < 1) {
  FUNC_3(VAR_2, "Too few arguments.");
  return;
 }
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  FUNC_7(VAR_6, sizeof(VAR_6), "arg%u", VAR_9);
  VAR_5 = FUNC_4(VAR_2, "%s", VAR_6);

  VAR_8 = FUNC_2(VAR_5, (u_char *) & VAR_4, sizeof(VAR_4),
      VAR_0);
  if (VAR_8 != 0) {
   FUNC_1(VAR_1, "Can't read metadata from %s: %s.\n",
       VAR_5, FUNC_8(VAR_8));
   FUNC_3(VAR_2,
       "Not fully done (error reading metadata).");
   continue;
  }
  FUNC_9((u_char *) & VAR_4, &VAR_3);
  FUNC_6("Metadata on %s:\n", VAR_5);
  FUNC_10(&VAR_3);
  FUNC_6("\n");
 }
}
