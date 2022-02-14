
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;
struct intstr {char* s; int i; } ;
struct group {char* gr_name; } ;
struct devfs_rule {int dr_icond; int dr_dswflags; char* dr_pathptrn; int dr_iacts; int dr_bacts; int dr_uid; int dr_gid; int dr_mode; int dr_incset; int dr_id; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 struct group* FUNC_1 (int) ;
 struct passwd* FUNC_2 (int) ;
 struct intstr* VAR_9 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_10, struct devfs_rule *VAR_11)
{
 struct intstr *VAR_12;
 struct passwd *VAR_13;
 struct group *VAR_14;

 FUNC_0(VAR_10, "%d", FUNC_3(VAR_11->dr_id));

 if (VAR_11->dr_icond & VAR_7)
  for (VAR_12 = VAR_9; VAR_12->s != ((void*)0); ++VAR_12)
   if (VAR_11->dr_dswflags & VAR_12->i)
    FUNC_0(VAR_10, " type %s", VAR_12->s);
 if (VAR_11->dr_icond & VAR_8)
  FUNC_0(VAR_10, " path %s", VAR_11->dr_pathptrn);

 if (VAR_11->dr_iacts & VAR_0) {
  if (VAR_11->dr_bacts & VAR_5)
   FUNC_0(VAR_10, " hide");
  if (VAR_11->dr_bacts & VAR_6)
   FUNC_0(VAR_10, " unhide");
 }
 if (VAR_11->dr_iacts & VAR_4) {
  VAR_13 = FUNC_2(VAR_11->dr_uid);
  if (VAR_13 == ((void*)0))
   FUNC_0(VAR_10, " user %d", VAR_11->dr_uid);
  else
   FUNC_0(VAR_10, " user %s", VAR_13->pw_name);
 }
 if (VAR_11->dr_iacts & VAR_1) {
  VAR_14 = FUNC_1(VAR_11->dr_gid);
  if (VAR_14 == ((void*)0))
   FUNC_0(VAR_10, " group %d", VAR_11->dr_gid);
  else
   FUNC_0(VAR_10, " group %s", VAR_14->gr_name);
 }
 if (VAR_11->dr_iacts & VAR_3)
  FUNC_0(VAR_10, " mode %o", VAR_11->dr_mode);
 if (VAR_11->dr_iacts & VAR_2)
  FUNC_0(VAR_10, " include %d", VAR_11->dr_incset);

 FUNC_0(VAR_10, "\n");
}
