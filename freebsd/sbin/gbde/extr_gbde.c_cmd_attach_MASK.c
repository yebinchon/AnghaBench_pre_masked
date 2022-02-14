
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const u_char ;
struct gctl_req {int dummy; } ;
struct g_bde_softc {char const* sha2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*,char const*) ;
 int FUNC_3 (int ) ;
 struct gctl_req* FUNC_4 () ;
 char* FUNC_5 (struct gctl_req*) ;
 int FUNC_6 (struct gctl_req*,char*,int,char const*) ;
 int FUNC_7 (char const*,int ,int ) ;
 int FUNC_8 (int,char const*,int) ;

__attribute__((used)) static void
FUNC_9(const struct g_bde_softc *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5;
 u_char VAR_6[16];
 struct gctl_req *VAR_7;
 const char *VAR_8;

 VAR_7 = FUNC_4();
 FUNC_6(VAR_7, "verb", -1, "create geom");
 FUNC_6(VAR_7, "class", -1, "BDE");
 FUNC_6(VAR_7, "provider", -1, VAR_3);
 FUNC_6(VAR_7, "pass", VAR_1, VAR_2->sha2);
 if (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_7(VAR_4, VAR_0, 0);
  if (VAR_5 < 0)
   FUNC_1(1, "%s", VAR_4);
  FUNC_8(VAR_5, VAR_6, 16);
  FUNC_6(VAR_7, "key", 16, VAR_6);
  FUNC_0(VAR_5);
 }
 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8 != ((void*)0))
  FUNC_2(1, "Attach to %s failed: %s", VAR_3, VAR_8);

 FUNC_3 (0);
}
