
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct sftp_conn {int dummy; } ;
typedef int mode_t ;
struct TYPE_9__ {int perm; int flags; int mtime; int atime; } ;
struct TYPE_8__ {char* filename; TYPE_2__ a; } ;
typedef TYPE_1__ SFTP_DIRENT ;
typedef TYPE_2__ Attrib ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct sftp_conn*,char*,char*,TYPE_2__*,int,int,int) ;
 int FUNC_4 (struct sftp_conn*,char const*,TYPE_1__***) ;
 TYPE_2__* FUNC_5 (struct sftp_conn*,char const*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__**) ;
 int VAR_5 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (char*,char const*) ;
 char* FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* FUNC_14 (scalar_t__) ;
 int FUNC_15 (char const*,struct timeval*) ;

__attribute__((used)) static int
FUNC_16(struct sftp_conn *VAR_6, const char *VAR_7, const char *VAR_8,
    int VAR_9, Attrib *VAR_10, int VAR_11, int VAR_12,
    int VAR_13, int VAR_14)
{
 int VAR_15, VAR_16 = 0;
 SFTP_DIRENT **VAR_17;
 char *VAR_18, *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 mode_t VAR_21 = 0777;

 if (VAR_9 >= VAR_1) {
  FUNC_6("Maximum directory depth exceeded: %d levels", VAR_9);
  return -1;
 }

 if (VAR_10 == ((void*)0) &&
     (VAR_10 = FUNC_5(VAR_6, VAR_7, 1)) == ((void*)0)) {
  FUNC_6("Unable to stat remote directory \"%s\"", VAR_7);
  return -1;
 }
 if (!FUNC_0(VAR_10->perm)) {
  FUNC_6("\"%s\" is not a directory", VAR_7);
  return -1;
 }
 if (VAR_12)
  FUNC_11("Retrieving %s\n", VAR_7);

 if (VAR_10->flags & VAR_3)
  VAR_21 = VAR_10->perm & 01777;
 else {
  FUNC_2("Server did not send permissions for "
      "directory \"%s\"", VAR_8);
 }

 if (FUNC_10(VAR_8, VAR_21) == -1 && VAR_4 != VAR_0) {
  FUNC_6("mkdir %s: %s", VAR_8, FUNC_14(VAR_4));
  return -1;
 }

 if (FUNC_4(VAR_6, VAR_7, &VAR_17) == -1) {
  FUNC_6("%s: Failed to get directory contents", VAR_7);
  return -1;
 }

 for (VAR_15 = 0; VAR_17[VAR_15] != ((void*)0) && !VAR_5; VAR_15++) {
  FUNC_7(VAR_20);
  FUNC_7(VAR_19);

  VAR_18 = VAR_17[VAR_15]->filename;
  VAR_20 = FUNC_12(VAR_8, VAR_18);
  VAR_19 = FUNC_12(VAR_7, VAR_18);

  if (FUNC_0(VAR_17[VAR_15]->a.perm)) {
   if (FUNC_13(VAR_18, ".") == 0 ||
       FUNC_13(VAR_18, "..") == 0)
    continue;
   if (FUNC_16(VAR_6, VAR_19, VAR_20,
       VAR_9 + 1, &(VAR_17[VAR_15]->a), VAR_11,
       VAR_12, VAR_13, VAR_14) == -1)
    VAR_16 = -1;
  } else if (FUNC_1(VAR_17[VAR_15]->a.perm) ) {
   if (FUNC_3(VAR_6, VAR_19, VAR_20,
       &(VAR_17[VAR_15]->a), VAR_11,
       VAR_13, VAR_14) == -1) {
    FUNC_6("Download of file %s to %s failed",
        VAR_19, VAR_20);
    VAR_16 = -1;
   }
  } else
   FUNC_9("%s: not a regular file\n", VAR_19);

 }
 FUNC_7(VAR_20);
 FUNC_7(VAR_19);

 if (VAR_11) {
  if (VAR_10->flags & VAR_2) {
   struct timeval VAR_22[2];
   VAR_22[0].tv_sec = VAR_10->atime;
   VAR_22[1].tv_sec = VAR_10->mtime;
   VAR_22[0].tv_usec = VAR_22[1].tv_usec = 0;
   if (FUNC_15(VAR_8, VAR_22) == -1)
    FUNC_6("Can't set times on \"%s\": %s",
        VAR_8, FUNC_14(VAR_4));
  } else
   FUNC_2("Server did not send times for directory "
       "\"%s\"", VAR_8);
 }

 FUNC_8(VAR_17);

 return VAR_16;
}
