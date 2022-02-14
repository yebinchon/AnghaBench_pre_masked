
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_uid; } ;
struct mtpt_info {scalar_t__ mi_uid; scalar_t__ mi_gid; int mi_have_uid; int mi_have_gid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*) ;
 struct group* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char**,char*) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(const char *VAR_1, struct mtpt_info *VAR_2)
{
 char *VAR_3;
 char *VAR_4, *VAR_5;
 struct passwd *VAR_6;
 struct group *VAR_7;
 char *VAR_8;
 uid_t *VAR_9;
 gid_t *VAR_10;

 VAR_9 = &VAR_2->mi_uid;
 VAR_10 = &VAR_2->mi_gid;
 VAR_2->mi_have_uid = VAR_2->mi_have_gid = 0;


 VAR_3 = FUNC_5(VAR_1);
 FUNC_0(VAR_3 != ((void*)0));
 VAR_5 = VAR_3;
 VAR_4 = FUNC_6(&VAR_5, ":");
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || *VAR_4 == '\0' || *VAR_5 == '\0')
  FUNC_8();


 *VAR_9 = FUNC_7(VAR_4, &VAR_8, 10);
 if (*VAR_9 == (uid_t)VAR_0)
  FUNC_8();
 if (*VAR_8 != '\0') {
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6 == ((void*)0))
   FUNC_1(1, "invalid user: %s", VAR_4);
  *VAR_9 = VAR_6->pw_uid;
 }
 VAR_2->mi_have_uid = 1;


 *VAR_10 = FUNC_7(VAR_5, &VAR_8, 10);
 if (*VAR_10 == (gid_t)VAR_0)
  FUNC_8();
 if (*VAR_8 != '\0') {
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7 == ((void*)0))
   FUNC_1(1, "invalid group: %s", VAR_5);
  *VAR_10 = VAR_7->gr_gid;
 }
 VAR_2->mi_have_gid = 1;

 FUNC_2(VAR_3);
}
