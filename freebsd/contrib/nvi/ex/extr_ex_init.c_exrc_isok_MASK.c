
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {scalar_t__ st_uid; int st_mode; } ;
typedef enum rc { ____Placeholder_rc } rc ;
typedef int SCR ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (int *,char*,int*) ;
 int FUNC_6 (int *,int ,char*,...) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int * FUNC_8 (char*,char) ;

__attribute__((used)) static enum rc
FUNC_9(SCR *VAR_7, struct stat *VAR_8, char *VAR_9, int VAR_10, int VAR_11)
{
 enum { ROOTOWN, OWN, WRITER } VAR_12;
 uid_t VAR_13;
 int VAR_14, VAR_15;
 char *VAR_16, *VAR_17, *VAR_18;


 if (FUNC_7(VAR_9, VAR_8))
  return (VAR_2);


 VAR_13 = FUNC_3();
 if (!(VAR_10 && VAR_8->st_uid == 0) &&
     !(VAR_11 && VAR_13 == 0) && VAR_8->st_uid != VAR_13) {
  VAR_12 = VAR_10 ? ROOTOWN : OWN;
  goto denied;
 }


 if (VAR_8->st_mode & (VAR_5 | VAR_6)) {
  VAR_12 = WRITER;
  goto denied;
 }
 return (VAR_4);

denied: VAR_16 = FUNC_5(VAR_7, VAR_9, &VAR_14);
 if (FUNC_8(VAR_9, '/') == ((void*)0) && (VAR_18 = FUNC_2(((void*)0), 0)) != ((void*)0)) {
  char *VAR_19;

  VAR_17 = FUNC_5(VAR_7, VAR_18, &VAR_15);
  if ((VAR_19 = FUNC_4(VAR_17, VAR_16)) == ((void*)0)) {
   FUNC_6(VAR_7, VAR_1, ((void*)0));
   goto err;
  }
  switch (VAR_12) {
  case ROOTOWN:
   FUNC_6(VAR_7, VAR_0,
       "128|%s: not sourced: not owned by you or root", VAR_19);
   break;
  case OWN:
   FUNC_6(VAR_7, VAR_0,
       "129|%s: not sourced: not owned by you", VAR_19);
   break;
  case WRITER:
   FUNC_6(VAR_7, VAR_0,
    "130|%s: not sourced: writeable by a user other than the owner", VAR_19);
   break;
  }
  FUNC_1(VAR_19);
err: FUNC_1(VAR_18);
  if (VAR_15)
   FUNC_0(VAR_7, VAR_17, 0);
 } else
  switch (VAR_12) {
  case ROOTOWN:
   FUNC_6(VAR_7, VAR_0,
       "128|%s: not sourced: not owned by you or root", VAR_16);
   break;
  case OWN:
   FUNC_6(VAR_7, VAR_0,
       "129|%s: not sourced: not owned by you", VAR_16);
   break;
  case WRITER:
   FUNC_6(VAR_7, VAR_0,
     "130|%s: not sourced: writeable by a user other than the owner", VAR_16);
   break;
  }

 if (VAR_14)
  FUNC_0(VAR_7, VAR_16, 0);
 return (VAR_3);
}
