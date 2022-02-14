
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {scalar_t__ tr_magic; char* tr_filename; int tr_filefd; int tr_dirname; int tr_dirfp; } ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int,struct stat*) ;
 int FUNC_6 (int,scalar_t__,int ) ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (int,char*,int ,char const*,...) ;
 int FUNC_9 (int ,char*,int ,char const*,...) ;
 int FUNC_10 (char*,int ,char const*) ;
 int FUNC_11 (char*,char const*,int) ;
 scalar_t__ FUNC_12 (struct trail*) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*) ;
 int FUNC_15 (struct trail*) ;
 int FUNC_16 (int,char const*,int ) ;

void
FUNC_17(struct trail *VAR_7, const char *VAR_8, off_t VAR_9)
{
 struct stat VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(VAR_7->tr_magic == VAR_5);

 FUNC_1(FUNC_11(VAR_7->tr_filename, VAR_8,
     sizeof(VAR_7->tr_filename)) < sizeof(VAR_7->tr_filename));
 VAR_7->tr_filefd = -1;

 if (VAR_7->tr_filename[0] == '\0') {
  FUNC_0(VAR_9 == 0);
  FUNC_15(VAR_7);
  return;
 }

 VAR_11 = FUNC_4(VAR_7->tr_dirfp);
 FUNC_0(VAR_11 >= 0);
again:
 VAR_12 = FUNC_7(VAR_11, VAR_7->tr_filename, VAR_3);
 if (VAR_12 == -1) {
  if (VAR_6 == VAR_0 &&
      FUNC_14(VAR_7->tr_filename) &&
      FUNC_12(VAR_7)) {

   FUNC_8(1,
      "Trail file was renamed since last connection to \"%s/%s\".",
      VAR_7->tr_dirname, VAR_7->tr_filename);
   goto again;
  } else if (VAR_6 == VAR_0) {

   FUNC_8(1, "File \"%s/%s\" doesn't exist.",
       VAR_7->tr_dirname, VAR_7->tr_filename);
  } else {
   FUNC_9(VAR_1,
       "Unable to open file \"%s/%s\", skipping",
       VAR_7->tr_dirname, VAR_7->tr_filename);
  }
  FUNC_15(VAR_7);
  return;
 }
 if (FUNC_5(VAR_12, &VAR_10) == -1) {
  FUNC_9(VAR_1,
      "Unable to stat file \"%s/%s\", skipping",
      VAR_7->tr_dirname, VAR_7->tr_filename);
  FUNC_3(VAR_12);
  FUNC_15(VAR_7);
  return;
 }
 if (!FUNC_2(VAR_10.st_mode)) {
  FUNC_10("File \"%s/%s\" is not a regular file, skipping.",
      VAR_7->tr_dirname, VAR_7->tr_filename);
  FUNC_3(VAR_12);
  FUNC_15(VAR_7);
  return;
 }
 if (VAR_9 < VAR_10.st_size ||
     (VAR_9 >= VAR_10.st_size &&
      FUNC_14(VAR_7->tr_filename)) ||
     (VAR_9 >= VAR_10.st_size && FUNC_14(VAR_8) &&
      !FUNC_14(VAR_7->tr_filename))) {

  if (FUNC_6(VAR_12, VAR_9, VAR_4) == -1) {
   FUNC_9(VAR_1,
       "Unable to move to offset %jd within file \"%s/%s\", skipping",
       (intmax_t)VAR_9, VAR_7->tr_dirname,
       VAR_7->tr_filename);
   FUNC_3(VAR_12);
   FUNC_15(VAR_7);
   return;
  }
  if (!FUNC_13(VAR_7->tr_filename)) {
   FUNC_8(1,
       "Restarting file \"%s/%s\" at offset %jd.",
       VAR_7->tr_dirname, VAR_7->tr_filename,
       (intmax_t)VAR_9);
  }
  VAR_7->tr_filefd = VAR_12;
  return;
 }
 FUNC_3(VAR_12);
 if (VAR_9 > VAR_10.st_size) {
  FUNC_10("File \"%s/%s\" shrinked, removing it.",
      VAR_7->tr_dirname, VAR_7->tr_filename);
 } else {
  FUNC_8(1, "File \"%s/%s\" is already sent, removing it.",
      VAR_7->tr_dirname, VAR_7->tr_filename);
 }

 if (FUNC_16(VAR_11, VAR_7->tr_filename, 0) == -1) {
  FUNC_9(VAR_2, "Unable to remove file \"%s/%s\"",
      VAR_7->tr_dirname, VAR_7->tr_filename);
 }
 FUNC_15(VAR_7);
}
