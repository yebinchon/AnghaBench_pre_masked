
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int intmax_t ;
struct TYPE_3__ {char* name; int st_gid; int st_mode; int st_uid; char* md5digest; char* sha1digest; char* rmd160digest; char* sha256digest; char* sha384digest; char* sha512digest; int st_flags; scalar_t__ st_size; scalar_t__ st_nlink; int cksum; int type; } ;
typedef TYPE_1__ NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* FUNC_0 (int ,char*) ;
 struct group* FUNC_1 (int) ;
 struct passwd* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(NODE *VAR_21, int VAR_22, char const *VAR_23)
{
 struct group *VAR_24;
 struct passwd *VAR_25;

 FUNC_5("%s%s %s", VAR_23, VAR_21->name, FUNC_3(FUNC_4(VAR_21->type)));
 if (VAR_22 & VAR_0)
  FUNC_5(" cksum=%lu", VAR_21->cksum);
 if (VAR_22 & VAR_2)
  FUNC_5(" gid=%d", VAR_21->st_gid);
 if (VAR_22 & VAR_3) {
  VAR_24 = FUNC_1(VAR_21->st_gid);
  if (VAR_24 == ((void*)0))
   FUNC_5(" gid=%d", VAR_21->st_gid);
  else
   FUNC_5(" gname=%s", VAR_24->gr_name);
 }
 if (VAR_22 & VAR_5)
  FUNC_5(" mode=%o", VAR_21->st_mode);
 if (VAR_22 & VAR_6)
  FUNC_5(" nlink=%ju", (uintmax_t)VAR_21->st_nlink);
 if (VAR_22 & VAR_12)
  FUNC_5(" size=%jd", (intmax_t)VAR_21->st_size);
 if (VAR_22 & VAR_13)
  FUNC_5(" uid=%d", VAR_21->st_uid);
 if (VAR_22 & VAR_14) {
  VAR_25 = FUNC_2(VAR_21->st_uid);
  if (VAR_25 == ((void*)0))
   FUNC_5(" uid=%d", VAR_21->st_uid);
  else
   FUNC_5(" uname=%s", VAR_25->pw_name);
 }
 if (VAR_22 & VAR_4)
  FUNC_5(" %s=%s", VAR_15, VAR_21->md5digest);
 if (VAR_22 & VAR_8)
  FUNC_5(" %s=%s", VAR_17, VAR_21->sha1digest);
 if (VAR_22 & VAR_7)
  FUNC_5(" %s=%s", VAR_16, VAR_21->rmd160digest);
 if (VAR_22 & VAR_9)
  FUNC_5(" %s=%s", VAR_18, VAR_21->sha256digest);
 if (VAR_22 & VAR_10)
  FUNC_5(" %s=%s", VAR_19, VAR_21->sha384digest);
 if (VAR_22 & VAR_11)
  FUNC_5(" %s=%s", VAR_20, VAR_21->sha512digest);
 if (VAR_22 & VAR_1)
  FUNC_5(" flags=%s", FUNC_0(VAR_21->st_flags, "none"));
 FUNC_5("\n");
}
