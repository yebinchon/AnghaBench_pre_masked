
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sftp_conn {int dummy; } ;
typedef int path_buf ;
struct TYPE_10__ {char** gl_pathv; scalar_t__ gl_pathc; } ;
typedef TYPE_1__ glob_t ;
typedef int g ;
struct TYPE_11__ {int flags; int perm; unsigned long uid; unsigned long gid; } ;
typedef TYPE_2__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sftp_conn*,char*,int,int) ;
 int FUNC_4 (struct sftp_conn*,char*,char*,int) ;
 int FUNC_5 (struct sftp_conn*,char*,char*) ;
 int FUNC_6 (struct sftp_conn*,char*,char*,int) ;
 int FUNC_7 (struct sftp_conn*,char*,TYPE_2__*,int) ;
 char* FUNC_8 (struct sftp_conn*,char*) ;
 int FUNC_9 (struct sftp_conn*,char*,char*,int) ;
 int FUNC_10 (struct sftp_conn*,char*) ;
 int FUNC_11 (struct sftp_conn*,char*) ;
 int FUNC_12 (struct sftp_conn*,char*,TYPE_2__*) ;
 TYPE_2__* FUNC_13 (struct sftp_conn*,char*,int ) ;
 int FUNC_14 (struct sftp_conn*,char*,char*) ;
 int VAR_4 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 () ;
 int VAR_5 ;
 int FUNC_22 (char const*) ;
 int FUNC_23 (char const*) ;
 char* FUNC_24 (char*,char*) ;
 int FUNC_25 (TYPE_1__*,int ,int) ;
 int FUNC_26 (char*,int) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (char const**,int*,int*,int*,int*,int*,int*,int*,int*,int*,unsigned long*,char**,char**) ;
 int FUNC_29 (char*,...) ;
 int FUNC_30 (struct sftp_conn*,char*,char*,char*,int,int,int,int) ;
 int FUNC_31 (struct sftp_conn*,char*,char*,char*,int,int,int,int) ;
 int VAR_6 ;
 int FUNC_32 (struct sftp_conn*,char*,int ,int *,TYPE_1__*) ;
 int FUNC_33 (struct sftp_conn*) ;
 int VAR_7 ;
 char* FUNC_34 (int ) ;
 int FUNC_35 (struct sftp_conn*,char*,char*) ;
 char* FUNC_36 (char*,int ) ;
 int FUNC_37 (unsigned long) ;
 char* FUNC_38 (char const*) ;

__attribute__((used)) static int
FUNC_39(struct sftp_conn *VAR_8, const char *VAR_9, char **VAR_10,
    const char *VAR_11, int VAR_12)
{
 char *VAR_13, *VAR_14, *VAR_15;
 int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0,
 VAR_20 = 0;
 int VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 int VAR_25, VAR_26;
 unsigned long VAR_27 = 0;
 Attrib VAR_28, *VAR_29;
 char VAR_30[VAR_1];
 int VAR_31 = 0;
 glob_t VAR_32;

 VAR_13 = VAR_14 = ((void*)0);
 VAR_25 = FUNC_28(&VAR_9, &VAR_16, &VAR_17, &VAR_18, &VAR_19,
     &VAR_20, &VAR_21, &VAR_22, &VAR_23, &VAR_24, &VAR_27, &VAR_13, &VAR_14);
 if (VAR_16 != 0)
  VAR_12 = 0;

 FUNC_25(&VAR_32, 0, sizeof(VAR_32));


 switch (VAR_25) {
 case 0:

  break;
 case -1:

  VAR_31 = -1;
  break;
 case 135:
  VAR_17 = 1;

 case 149:
  VAR_31 = FUNC_30(VAR_8, VAR_13, VAR_14, *VAR_10, VAR_22,
      VAR_23, VAR_17, VAR_18);
  break;
 case 133:
  VAR_17 = 1;

 case 138:
  VAR_31 = FUNC_31(VAR_8, VAR_13, VAR_14, *VAR_10, VAR_22,
      VAR_23, VAR_17, VAR_18);
  break;
 case 134:
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  VAR_14 = FUNC_24(VAR_14, *VAR_10);
  VAR_31 = FUNC_9(VAR_8, VAR_13, VAR_14, VAR_21);
  break;
 case 129:
  VAR_24 = 1;
 case 146:
  if (!VAR_24)
   VAR_13 = FUNC_24(VAR_13, *VAR_10);
  VAR_14 = FUNC_24(VAR_14, *VAR_10);
  VAR_31 = (VAR_24 ? FUNC_14 : FUNC_5)(VAR_8, VAR_13, VAR_14);
  break;
 case 132:
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  FUNC_32(VAR_8, VAR_13, VAR_0, ((void*)0), &VAR_32);
  for (VAR_26 = 0; VAR_32.gl_pathv[VAR_26] && !VAR_5; VAR_26++) {
   if (!VAR_6)
    FUNC_27("Removing %s\n", VAR_32.gl_pathv[VAR_26]);
   VAR_31 = FUNC_10(VAR_8, VAR_32.gl_pathv[VAR_26]);
   if (VAR_31 != 0 && VAR_12)
    break;
  }
  break;
 case 140:
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  FUNC_1(&VAR_28);
  VAR_28.flags |= VAR_2;
  VAR_28.perm = 0777;
  VAR_31 = FUNC_7(VAR_8, VAR_13, &VAR_28, 1);
  break;
 case 131:
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  VAR_31 = FUNC_11(VAR_8, VAR_13);
  break;
 case 154:
  if (VAR_13 == ((void*)0) || *VAR_13 == '\0')
   VAR_13 = FUNC_38(VAR_11);
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  if ((VAR_15 = FUNC_8(VAR_8, VAR_13)) == ((void*)0)) {
   VAR_31 = 1;
   break;
  }
  if ((VAR_29 = FUNC_13(VAR_8, VAR_15, 0)) == ((void*)0)) {
   FUNC_17(VAR_15);
   VAR_31 = 1;
   break;
  }
  if (!(VAR_29->flags & VAR_2)) {
   FUNC_15("Can't change directory: Can't check target");
   FUNC_17(VAR_15);
   VAR_31 = 1;
   break;
  }
  if (!FUNC_0(VAR_29->perm)) {
   FUNC_15("Can't change directory: \"%s\" is not "
       "a directory", VAR_15);
   FUNC_17(VAR_15);
   VAR_31 = 1;
   break;
  }
  FUNC_17(*VAR_10);
  *VAR_10 = VAR_15;
  break;
 case 142:
  if (!VAR_13) {
   FUNC_6(VAR_8, *VAR_10, *VAR_10, VAR_21);
   break;
  }


  VAR_15 = ((void*)0);
  if (*VAR_13 != '/')
   VAR_15 = *VAR_10;

  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  VAR_31 = FUNC_4(VAR_8, VAR_13, VAR_15, VAR_21);
  break;
 case 150:

  if (VAR_13 == ((void*)0))
   VAR_13 = FUNC_38(*VAR_10);
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  VAR_31 = FUNC_3(VAR_8, VAR_13, VAR_19, VAR_20);
  break;
 case 147:
  if (VAR_13 == ((void*)0) || *VAR_13 == '\0')
   VAR_13 = FUNC_38("~");
  VAR_15 = FUNC_36(VAR_13, FUNC_19());
  FUNC_17(VAR_13);
  VAR_13 = VAR_15;
  if (FUNC_2(VAR_13) == -1) {
   FUNC_15("Couldn't change local directory to "
       "\"%s\": %s", VAR_13, FUNC_34(VAR_4));
   VAR_31 = 1;
  }
  break;
 case 144:
  if (FUNC_26(VAR_13, 0777) == -1) {
   FUNC_15("Couldn't create local directory "
       "\"%s\": %s", VAR_13, FUNC_34(VAR_4));
   VAR_31 = 1;
  }
  break;
 case 145:
  FUNC_22(VAR_9);
  break;
 case 130:
  FUNC_23(VAR_9);
  break;
 case 141:
  FUNC_37(VAR_27);
  FUNC_29("Local umask: %03lo\n", VAR_27);
  break;
 case 152:
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  FUNC_1(&VAR_28);
  VAR_28.flags |= VAR_2;
  VAR_28.perm = VAR_27;
  FUNC_32(VAR_8, VAR_13, VAR_0, ((void*)0), &VAR_32);
  for (VAR_26 = 0; VAR_32.gl_pathv[VAR_26] && !VAR_5; VAR_26++) {
   if (!VAR_6)
    FUNC_27("Changing mode on %s\n",
        VAR_32.gl_pathv[VAR_26]);
   VAR_31 = FUNC_12(VAR_8, VAR_32.gl_pathv[VAR_26], &VAR_28);
   if (VAR_31 != 0 && VAR_12)
    break;
  }
  break;
 case 151:
 case 153:
  VAR_13 = FUNC_24(VAR_13, *VAR_10);
  FUNC_32(VAR_8, VAR_13, VAR_0, ((void*)0), &VAR_32);
  for (VAR_26 = 0; VAR_32.gl_pathv[VAR_26] && !VAR_5; VAR_26++) {
   if (!(VAR_29 = FUNC_13(VAR_8, VAR_32.gl_pathv[VAR_26], 0))) {
    if (VAR_12) {
     VAR_31 = -1;
     break;
    } else
     continue;
   }
   if (!(VAR_29->flags & VAR_3)) {
    FUNC_15("Can't get current ownership of "
        "remote file \"%s\"", VAR_32.gl_pathv[VAR_26]);
    if (VAR_12) {
     VAR_31 = -1;
     break;
    } else
     continue;
   }
   VAR_29->flags &= VAR_3;
   if (VAR_25 == 151) {
    if (!VAR_6)
     FUNC_27("Changing owner on %s\n",
         VAR_32.gl_pathv[VAR_26]);
    VAR_29->uid = VAR_27;
   } else {
    if (!VAR_6)
     FUNC_27("Changing group on %s\n",
         VAR_32.gl_pathv[VAR_26]);
    VAR_29->gid = VAR_27;
   }
   VAR_31 = FUNC_12(VAR_8, VAR_32.gl_pathv[VAR_26], VAR_29);
   if (VAR_31 != 0 && VAR_12)
    break;
  }
  break;
 case 137:
  FUNC_27("Remote working directory: %s\n", *VAR_10);
  break;
 case 143:
  if (!FUNC_18(VAR_30, sizeof(VAR_30))) {
   FUNC_15("Couldn't get local cwd: %s", FUNC_34(VAR_4));
   VAR_31 = -1;
   break;
  }
  FUNC_27("Local working directory: %s\n", VAR_30);
  break;
 case 136:

  break;
 case 148:
  FUNC_21();
  break;
 case 128:
  FUNC_29("SFTP protocol version %u\n", FUNC_33(VAR_8));
  break;
 case 139:
  VAR_7 = !VAR_7;
  if (VAR_7)
   FUNC_29("Progress meter enabled\n");
  else
   FUNC_29("Progress meter disabled\n");
  break;
 default:
  FUNC_16("%d is not implemented", VAR_25);
 }

 if (VAR_32.gl_pathc)
  FUNC_20(&VAR_32);
 FUNC_17(VAR_13);
 FUNC_17(VAR_14);


 if (VAR_12 && VAR_31 != 0)
  return (-1);
 else if (VAR_25 == 136)
  return (1);

 return (0);
}
