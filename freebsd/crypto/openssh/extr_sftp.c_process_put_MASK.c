
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
struct sftp_conn {int dummy; } ;
struct TYPE_5__ {int gl_matchc; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int g ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct sftp_conn*,char*,char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,int,int *,TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_7 ;
 char* FUNC_7 (char*,char const*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (char*,char*,char*) ;
 char* FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int VAR_8 ;
 int FUNC_12 (struct sftp_conn*,char*) ;
 int FUNC_13 (char*,struct stat*) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (struct sftp_conn*,char*,char*,int,int,int,int) ;
 char* FUNC_16 (char const*) ;

__attribute__((used)) static int
FUNC_17(struct sftp_conn *VAR_9, const char *VAR_10, const char *VAR_11,
    const char *VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 glob_t VAR_21;
 int VAR_22 = 0;
 int VAR_23, VAR_24 = 1;
 struct stat VAR_25;

 if (VAR_11) {
  VAR_17 = FUNC_16(VAR_11);
  VAR_17 = FUNC_7(VAR_17, VAR_12);
 }

 FUNC_8(&VAR_21, 0, sizeof(VAR_21));
 FUNC_1("Looking up %s", VAR_10);
 if (FUNC_5(VAR_10, VAR_1 | VAR_0, ((void*)0), &VAR_21)) {
  FUNC_3("File \"%s\" not found.", VAR_10);
  VAR_22 = -1;
  goto out;
 }


 if (VAR_17 != ((void*)0))
  VAR_24 = FUNC_12(VAR_9, VAR_17);


 if (VAR_21.gl_matchc > 1 && VAR_17 && !VAR_24) {
  FUNC_3("Multiple paths match, but destination "
      "\"%s\" is not a directory", VAR_17);
  VAR_22 = -1;
  goto out;
 }

 for (VAR_23 = 0; VAR_21.gl_pathv[VAR_23] && !VAR_7; VAR_23++) {
  if (FUNC_13(VAR_21.gl_pathv[VAR_23], &VAR_25) == -1) {
   VAR_22 = -1;
   FUNC_3("stat %s: %s", VAR_21.gl_pathv[VAR_23], FUNC_14(VAR_2));
   continue;
  }

  VAR_19 = FUNC_16(VAR_21.gl_pathv[VAR_23]);
  if ((VAR_20 = FUNC_0(VAR_19)) == ((void*)0)) {
   FUNC_3("basename %s: %s", VAR_19, FUNC_14(VAR_2));
   FUNC_4(VAR_19);
   VAR_22 = -1;
   goto out;
  }

  if (VAR_21.gl_matchc == 1 && VAR_17) {

   if (VAR_24)
    VAR_18 = FUNC_10(VAR_17, VAR_20);
   else
    VAR_18 = FUNC_16(VAR_17);
  } else if (VAR_17) {
   VAR_18 = FUNC_10(VAR_17, VAR_20);
  } else {
   VAR_18 = FUNC_7(FUNC_16(VAR_20), VAR_12);
  }
  FUNC_4(VAR_19);

                VAR_15 |= VAR_3;
  if (!VAR_8 && VAR_15)
   FUNC_9("Resuming upload of %s to %s\n",
       VAR_21.gl_pathv[VAR_23], VAR_18);
  else if (!VAR_8 && !VAR_15)
   FUNC_9("Uploading %s to %s\n",
       VAR_21.gl_pathv[VAR_23], VAR_18);
  if (FUNC_11(VAR_21.gl_pathv[VAR_23]) && (VAR_14 || VAR_6)) {
   if (FUNC_15(VAR_9, VAR_21.gl_pathv[VAR_23], VAR_18,
       VAR_13 || VAR_5, 1, VAR_15,
       VAR_16 || VAR_4) == -1)
    VAR_22 = -1;
  } else {
   if (FUNC_2(VAR_9, VAR_21.gl_pathv[VAR_23], VAR_18,
       VAR_13 || VAR_5, VAR_15,
       VAR_16 || VAR_4) == -1)
    VAR_22 = -1;
  }
 }

out:
 FUNC_4(VAR_18);
 FUNC_4(VAR_17);
 FUNC_6(&VAR_21);
 return(VAR_22);
}
