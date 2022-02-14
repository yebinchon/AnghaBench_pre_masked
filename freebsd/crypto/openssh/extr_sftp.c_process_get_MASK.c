
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sftp_conn {int dummy; } ;
struct TYPE_5__ {int gl_matchc; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int g ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct sftp_conn*,char*,char*,int *,int,int,int) ;
 int FUNC_3 (struct sftp_conn*,char*,char*,int *,int,int,int,int) ;
 int VAR_2 ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char const*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (char*,char*,char*) ;
 char* FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int VAR_8 ;
 int FUNC_13 (struct sftp_conn*,char*,int ,int *,TYPE_1__*) ;
 char* FUNC_14 (int ) ;
 char* FUNC_15 (char const*) ;

__attribute__((used)) static int
FUNC_16(struct sftp_conn *VAR_9, const char *VAR_10, const char *VAR_11,
    const char *VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 glob_t VAR_19;
 char *VAR_20, *VAR_21=((void*)0);
 int VAR_22, VAR_23, VAR_24 = 0;

 VAR_17 = FUNC_15(VAR_10);
 VAR_17 = FUNC_8(VAR_17, VAR_12);
 FUNC_9(&VAR_19, 0, sizeof(VAR_19));

 FUNC_1("Looking up %s", VAR_17);
 if ((VAR_23 = FUNC_13(VAR_9, VAR_17, VAR_0, ((void*)0), &VAR_19)) != 0) {
  if (VAR_23 == VAR_1) {
   FUNC_4("Too many matches for \"%s\".", VAR_17);
  } else {
   FUNC_4("File \"%s\" not found.", VAR_17);
  }
  VAR_24 = -1;
  goto out;
 }





 if (VAR_19.gl_matchc > 1 && VAR_11 != ((void*)0) && !FUNC_7(VAR_11)) {
  FUNC_4("Multiple source paths, but destination "
      "\"%s\" is not a directory", VAR_11);
  VAR_24 = -1;
  goto out;
 }

 for (VAR_22 = 0; VAR_19.gl_pathv[VAR_22] && !VAR_7; VAR_22++) {
  VAR_21 = FUNC_15(VAR_19.gl_pathv[VAR_22]);
  if ((VAR_20 = FUNC_0(VAR_21)) == ((void*)0)) {
   FUNC_4("basename %s: %s", VAR_21, FUNC_14(VAR_2));
   FUNC_5(VAR_21);
   VAR_24 = -1;
   goto out;
  }

  if (VAR_19.gl_matchc == 1 && VAR_11) {
   if (FUNC_7(VAR_11)) {
    VAR_18 = FUNC_11(VAR_11, VAR_20);
   } else {
    VAR_18 = FUNC_15(VAR_11);
   }
  } else if (VAR_11) {
   VAR_18 = FUNC_11(VAR_11, VAR_20);
  } else {
   VAR_18 = FUNC_15(VAR_20);
  }
  FUNC_5(VAR_21);

  VAR_15 |= VAR_3;
  if (!VAR_8 && VAR_15)
   FUNC_10("Resuming %s to %s\n",
       VAR_19.gl_pathv[VAR_22], VAR_18);
  else if (!VAR_8 && !VAR_15)
   FUNC_10("Fetching %s to %s\n",
       VAR_19.gl_pathv[VAR_22], VAR_18);
  if (FUNC_12(VAR_19.gl_pathv[VAR_22]) && (VAR_14 || VAR_6)) {
   if (FUNC_3(VAR_9, VAR_19.gl_pathv[VAR_22], VAR_18, ((void*)0),
       VAR_13 || VAR_5, 1, VAR_15,
       VAR_16 || VAR_4) == -1)
    VAR_24 = -1;
  } else {
   if (FUNC_2(VAR_9, VAR_19.gl_pathv[VAR_22], VAR_18, ((void*)0),
       VAR_13 || VAR_5, VAR_15,
       VAR_16 || VAR_4) == -1)
    VAR_24 = -1;
  }
  FUNC_5(VAR_18);
  VAR_18 = ((void*)0);
 }

out:
 FUNC_5(VAR_17);
 FUNC_6(&VAR_19);
 return(VAR_24);
}
