
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct winsize {int ws_col; } ;
struct stat {int dummy; } ;
struct sftp_conn {int dummy; } ;
typedef int sb ;
struct TYPE_5__ {char* filename; int longname; int a; } ;
typedef TYPE_1__ SFTP_DIRENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,struct stat*) ;
 int FUNC_3 (struct sftp_conn*,char const*,TYPE_1__***) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__**) ;
 int VAR_8 ;
 int FUNC_7 (int ,int ,struct winsize*) ;
 char* FUNC_8 (char*,struct stat*,int,int) ;
 int FUNC_9 (struct stat*,int ,int) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (char const*,char*) ;
 char* FUNC_12 (char const*,char const*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_1__**,int,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(struct sftp_conn *VAR_12, const char *VAR_13,
    const char *VAR_14, int VAR_15)
{
 int VAR_16;
 u_int VAR_17 = 1, VAR_18 = 0, VAR_19 = 1;
 SFTP_DIRENT **VAR_20;

 if ((VAR_16 = FUNC_3(VAR_12, VAR_13, &VAR_20)) != 0)
  return (VAR_16);

 if (!(VAR_15 & VAR_3)) {
  u_int VAR_21 = 0, VAR_22 = 80;
  struct winsize VAR_23;
  char *VAR_24;


  for (VAR_16 = 0; VAR_20[VAR_16] != ((void*)0); VAR_16++) {
   if (VAR_20[VAR_16]->filename[0] != '.' || (VAR_15 & VAR_4))
    VAR_21 = FUNC_0(VAR_21, FUNC_15(VAR_20[VAR_16]->filename));
  }


  VAR_24 = FUNC_12(VAR_13, VAR_14);
  VAR_21 += FUNC_15(VAR_24);
  FUNC_5(VAR_24);

  if (FUNC_7(FUNC_4(VAR_11), VAR_7, &VAR_23) != -1)
   VAR_22 = VAR_23.ws_col;

  VAR_19 = VAR_22 / (VAR_21 + 2);
  VAR_19 = FUNC_0(VAR_19, 1);
  VAR_18 = VAR_22 / VAR_19;
  VAR_18 = FUNC_1(VAR_18, VAR_22);
 }

 if (VAR_15 & VAR_6) {
  for (VAR_16 = 0; VAR_20[VAR_16] != ((void*)0); VAR_16++)
   ;
  VAR_10 = VAR_15 & (VAR_6|VAR_2);
  FUNC_14(VAR_20, VAR_16, sizeof(*VAR_20), VAR_9);
 }

 for (VAR_16 = 0; VAR_20[VAR_16] != ((void*)0) && !VAR_8; VAR_16++) {
  char *VAR_25, *VAR_26;

  if (VAR_20[VAR_16]->filename[0] == '.' && !(VAR_15 & VAR_4))
   continue;

  VAR_25 = FUNC_11(VAR_13, VAR_20[VAR_16]->filename);
  VAR_26 = FUNC_12(VAR_25, VAR_14);
  FUNC_5(VAR_25);

  if (VAR_15 & VAR_0) {
   if (VAR_15 & (VAR_1|VAR_5)) {
    char *VAR_27;
    struct stat VAR_28;

    FUNC_9(&VAR_28, 0, sizeof(VAR_28));
    FUNC_2(&VAR_20[VAR_16]->a, &VAR_28);
    VAR_27 = FUNC_8(VAR_26, &VAR_28, 1,
        (VAR_15 & VAR_5));
    FUNC_10("%s\n", VAR_27);
    FUNC_5(VAR_27);
   } else
    FUNC_10("%s\n", VAR_20[VAR_16]->longname);
  } else {
   FUNC_10("%-*s", VAR_18, VAR_26);
   if (VAR_17 >= VAR_19) {
    FUNC_13("\n");
    VAR_17 = 1;
   } else
    VAR_17++;
  }

  FUNC_5(VAR_26);
 }

 if (!(VAR_15 & VAR_0) && (VAR_17 != 1))
  FUNC_13("\n");

 FUNC_6(VAR_20);
 return (0);
}
