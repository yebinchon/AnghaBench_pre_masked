
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,...) ;
 int FUNC_4 (char* const,char*) ;
 int FUNC_5 (char* const,int *,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(int VAR_0, char * const *VAR_1)
{
 struct gctl_req *VAR_2;
 const char *VAR_3;
 int VAR_4;
 off_t VAR_5;

 VAR_4 = 0;
 VAR_5 = -1;
 if (VAR_0 < 3) {
  FUNC_6("usage:\tattach <subdisk> <plex> [rename] "
      "[<plexoffset>]\n"
      "\tattach <plex> <volume> [rename]");
  return;
 }
 if (VAR_0 > 3) {
  if (!FUNC_4(VAR_1[3], "rename")) {
   VAR_4 = 1;
   if (VAR_0 == 5)
    VAR_5 = FUNC_5(VAR_1[4], ((void*)0), 0);
  } else
   VAR_5 = FUNC_5(VAR_1[3], ((void*)0), 0);
 }
 VAR_2 = FUNC_1();
 FUNC_3(VAR_2, "class", -1, "VINUM");
 FUNC_3(VAR_2, "verb", -1, "attach");
 FUNC_3(VAR_2, "child", -1, VAR_1[1]);
 FUNC_3(VAR_2, "parent", -1, VAR_1[2]);
 FUNC_3(VAR_2, "offset", sizeof(off_t), &VAR_5);
 FUNC_3(VAR_2, "rename", sizeof(int), &VAR_4);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_6("attach failed: %s", VAR_3);
 FUNC_0(VAR_2);
}
