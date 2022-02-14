
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char* pw_name; char* pw_passwd; int pw_fields; scalar_t__ pw_uid; scalar_t__ pw_gid; scalar_t__ pw_change; char* pw_class; char* pw_gecos; char* pw_dir; char* pw_shell; scalar_t__ pw_expire; } ;
typedef scalar_t__ gid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static unsigned int
FUNC_1(const struct passwd *VAR_17)
{
 unsigned int VAR_18;

 VAR_18 = 0;

 if (VAR_17->pw_name != ((void*)0) && VAR_17->pw_name[0] != '\0')
  VAR_18 |= VAR_6;



 if (VAR_17->pw_passwd != ((void*)0) && VAR_17->pw_passwd[0] != '\0')
  VAR_18 |= VAR_7;
 else if ((VAR_17->pw_fields & VAR_15) != 0)
  VAR_18 |= VAR_7;



 if (VAR_17->pw_uid != (uid_t)-1)
  VAR_18 |= VAR_9;



 if (VAR_17->pw_gid != (gid_t)-1)
  VAR_18 |= VAR_5;



 if (VAR_17->pw_change != 0 || (VAR_17->pw_fields & VAR_10) != 0)
  VAR_18 |= VAR_0;



 if (VAR_17->pw_class != ((void*)0) && VAR_17->pw_class[0] != '\0')
  VAR_18 |= VAR_1;
 else if ((VAR_17->pw_fields & VAR_11) != 0)
  VAR_18 |= VAR_1;



 if (VAR_17->pw_gecos != ((void*)0) && VAR_17->pw_gecos[0] != '\0')
  VAR_18 |= VAR_4;
 else if ((VAR_17->pw_fields & VAR_14) != 0)
  VAR_18 |= VAR_4;



 if (VAR_17->pw_dir != ((void*)0) && VAR_17->pw_dir[0] != '\0')
  VAR_18 |= VAR_2;
 else if ((VAR_17->pw_fields & VAR_12) != 0)
  VAR_18 |= VAR_2;



 if (VAR_17->pw_shell != ((void*)0) && VAR_17->pw_shell[0] != '\0')
  VAR_18 |= VAR_8;
 else if ((VAR_17->pw_fields & VAR_16) != 0)
  VAR_18 |= VAR_8;



 if (VAR_17->pw_expire != 0 || (VAR_17->pw_fields & VAR_13) != 0)
  VAR_18 |= VAR_3;



if (0 && VAR_17->pw_fields != (int)VAR_18) {
FUNC_0("fields=0x%x != result=0x%x\n", (const unsigned int)VAR_17->pw_fields, VAR_18);
FUNC_0("           fields result\n");
FUNC_0("PW_NAME    %d      %d\n", (VAR_17->pw_fields & VAR_6) != 0, (VAR_18 & VAR_6) != 0);
FUNC_0("PW_PASSWD  %d      %d\n", (VAR_17->pw_fields & VAR_7) != 0, (VAR_18 & VAR_7) != 0);
FUNC_0("PW_UID     %d      %d\n", (VAR_17->pw_fields & VAR_9) != 0, (VAR_18 & VAR_9) != 0);
FUNC_0("PW_GID     %d      %d\n", (VAR_17->pw_fields & VAR_5) != 0, (VAR_18 & VAR_5) != 0);
FUNC_0("PW_CHANGE  %d      %d\n", (VAR_17->pw_fields & VAR_0) != 0, (VAR_18 & VAR_0) != 0);
FUNC_0("PW_CLASS   %d      %d\n", (VAR_17->pw_fields & VAR_1) != 0, (VAR_18 & VAR_1) != 0);
FUNC_0("PW_GECOS   %d      %d\n", (VAR_17->pw_fields & VAR_4) != 0, (VAR_18 & VAR_4) != 0);
FUNC_0("PW_DIR     %d      %d\n", (VAR_17->pw_fields & VAR_2) != 0, (VAR_18 & VAR_2) != 0);
FUNC_0("PW_SHELL   %d      %d\n", (VAR_17->pw_fields & VAR_8) != 0, (VAR_18 & VAR_8) != 0);
FUNC_0("PW_EXPIRE  %d      %d\n", (VAR_17->pw_fields & VAR_3) != 0, (VAR_18 & VAR_3) != 0);
}


 return (VAR_18);
}
