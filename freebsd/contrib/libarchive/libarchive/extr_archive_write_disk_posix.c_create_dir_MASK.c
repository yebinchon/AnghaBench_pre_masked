
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct fixup_entry {int mode; int fixup; } ;
struct archive_write_disk {int flags; int user_umask; int archive; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_10 ;
 int FUNC_1 (int *,scalar_t__,char*,char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 struct fixup_entry* FUNC_4 (struct archive_write_disk*,char*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct archive_write_disk *VAR_12, char *VAR_13)
{
 struct stat VAR_14;
 struct fixup_entry *VAR_15;
 char *VAR_16, *VAR_17;
 mode_t VAR_18, VAR_19;
 int VAR_20;


 VAR_16 = FUNC_5(VAR_13, '/');
 if (VAR_16 == ((void*)0))
  VAR_17 = VAR_13;
 else
  VAR_17 = VAR_16 + 1;

 if (VAR_17[0] == '\0' ||
     (VAR_17[0] == '.' && VAR_17[1] == '\0') ||
     (VAR_17[0] == '.' && VAR_17[1] == '.' && VAR_17[2] == '\0')) {

  if (VAR_16 != ((void*)0)) {
   *VAR_16 = '\0';
   VAR_20 = FUNC_7(VAR_12, VAR_13);
   *VAR_16 = '/';
   return (VAR_20);
  }
  return (VAR_3);
 }






 if (FUNC_2(VAR_13, &VAR_14) == 0) {
  if (FUNC_0(VAR_14.st_mode))
   return (VAR_3);
  if ((VAR_12->flags & VAR_0)) {
   FUNC_1(&VAR_12->archive, VAR_5,
       "Can't create directory '%s'", VAR_13);
   return (VAR_1);
  }
  if (FUNC_6(VAR_13) != 0) {
   FUNC_1(&VAR_12->archive, VAR_11,
       "Can't create directory '%s': "
       "Conflicting file cannot be removed",
       VAR_13);
   return (VAR_1);
  }
 } else if (VAR_11 != VAR_6 && VAR_11 != VAR_7) {

  FUNC_1(&VAR_12->archive, VAR_11,
      "Can't test directory '%s'", VAR_13);
  return (VAR_1);
 } else if (VAR_16 != ((void*)0)) {
  *VAR_16 = '\0';
  VAR_20 = FUNC_7(VAR_12, VAR_13);
  *VAR_16 = '/';
  if (VAR_20 != VAR_3)
   return (VAR_20);
 }
 VAR_18 = VAR_4 & ~VAR_12->user_umask;

 VAR_19 = VAR_18;
 VAR_19 |= VAR_9;
 VAR_19 &= VAR_8;
 if (FUNC_3(VAR_13, VAR_19) == 0) {
  if (VAR_19 != VAR_18) {
   VAR_15 = FUNC_4(VAR_12, VAR_13);
   if (VAR_15 == ((void*)0))
    return (VAR_2);
   VAR_15->fixup |=VAR_10;
   VAR_15->mode = VAR_18;
  }
  return (VAR_3);
 }







 if (FUNC_2(VAR_13, &VAR_14) == 0 && FUNC_0(VAR_14.st_mode))
  return (VAR_3);

 FUNC_1(&VAR_12->archive, VAR_11, "Failed to create dir '%s'",
     VAR_13);
 return (VAR_1);
}
