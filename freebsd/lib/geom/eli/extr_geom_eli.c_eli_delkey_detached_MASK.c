
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_eli_metadata {unsigned char* md_mkeys; int md_keys; } ;
typedef int md ;
typedef int intmax_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned int) ;
 int FUNC_1 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_2 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_3 (struct g_eli_metadata*,int) ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 int FUNC_5 (struct gctl_req*,char*) ;
 int FUNC_6 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_7(struct gctl_req *VAR_2, const char *VAR_3)
{
 struct g_eli_metadata VAR_4;
 unsigned char *VAR_5;
 unsigned int VAR_6;
 intmax_t VAR_7;
 bool VAR_8, VAR_9;

 if (FUNC_1(VAR_2, VAR_3, &VAR_4) == -1)
  return;

 VAR_8 = FUNC_5(VAR_2, "all");
 if (VAR_8)
  FUNC_0(VAR_4.md_mkeys, sizeof(VAR_4.md_mkeys));
 else {
  VAR_9 = FUNC_5(VAR_2, "force");
  VAR_7 = FUNC_6(VAR_2, "keyno");
  if (VAR_7 == -1) {
   FUNC_4(VAR_2, "Key number has to be specified.");
   return;
  }
  VAR_6 = VAR_7;
  if (VAR_6 >= VAR_0) {
   FUNC_4(VAR_2, "Invalid '%s' argument.", "keyno");
   return;
  }
  if (!(VAR_4.md_keys & (1 << VAR_6)) && !VAR_9) {
   FUNC_4(VAR_2, "Master Key %u is not set.", VAR_6);
   return;
  }
  VAR_4.md_keys &= ~(1 << VAR_6);
  if (VAR_4.md_keys == 0 && !VAR_9) {
   FUNC_4(VAR_2, "This is the last Master Key. Use '-f' "
       "option if you really want to remove it.");
   return;
  }
  VAR_5 = VAR_4.md_mkeys + VAR_6 * VAR_1;
  FUNC_0(VAR_5, VAR_1);
 }

 FUNC_2(VAR_2, VAR_3, &VAR_4);
 FUNC_3(&VAR_4, sizeof(VAR_4));
}
