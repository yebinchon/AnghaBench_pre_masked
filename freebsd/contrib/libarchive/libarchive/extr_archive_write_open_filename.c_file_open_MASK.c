
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct write_file_data {scalar_t__ fd; int filename; } ;
struct stat {int st_ino; int st_dev; int st_mode; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (char const*) ;
 void* FUNC_6 (char const*,int,int) ;
 scalar_t__ FUNC_7 (struct archive*,int *,char const**) ;
 scalar_t__ FUNC_8 (struct archive*,int *,char const**) ;
 int FUNC_9 (struct archive*,scalar_t__,char*,...) ;
 scalar_t__ FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*,int) ;
 int FUNC_12 (struct archive*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (scalar_t__,struct stat*) ;
 scalar_t__ FUNC_15 (char const*,int,int) ;

__attribute__((used)) static int
FUNC_16(struct archive *VAR_9, void *VAR_10)
{
 int VAR_11;
 struct write_file_data *VAR_12;
 struct stat VAR_13;



 const wchar_t *VAR_14;
 const char *VAR_15;

 VAR_12 = (struct write_file_data *)VAR_10;
 VAR_11 = VAR_7 | VAR_5 | VAR_6 | VAR_3 | VAR_4;




 VAR_15 = ((void*)0); VAR_14 = ((void*)0);
 if (FUNC_7(VAR_9, &VAR_12->filename, &VAR_15) != 0) {
  if (VAR_8 == VAR_2)
   FUNC_9(VAR_9, VAR_8, "No memory");
  else {
   FUNC_8(VAR_9, &VAR_12->filename, &VAR_14);
   FUNC_9(VAR_9, VAR_8,
       "Can't convert '%S' to MBS", VAR_14);
  }
  return (VAR_0);
 }
 VAR_12->fd = FUNC_15(VAR_15, VAR_11, 0666);
 FUNC_4(VAR_12->fd);

 if (VAR_12->fd < 0) {
  if (VAR_15 != ((void*)0))
   FUNC_9(VAR_9, VAR_8, "Failed to open '%s'", VAR_15);
  else
   FUNC_9(VAR_9, VAR_8, "Failed to open '%S'", VAR_14);
  return (VAR_0);
 }

 if (FUNC_14(VAR_12->fd, &VAR_13) != 0) {
  if (VAR_15 != ((void*)0))
   FUNC_9(VAR_9, VAR_8, "Couldn't stat '%s'", VAR_15);
  else
   FUNC_9(VAR_9, VAR_8, "Couldn't stat '%S'", VAR_14);
  return (VAR_0);
 }




 if (FUNC_10(VAR_9) < 0) {
  if (FUNC_1(VAR_13.st_mode) || FUNC_0(VAR_13.st_mode) ||
      FUNC_2(VAR_13.st_mode))

   FUNC_11(VAR_9, 0);
  else

   FUNC_11(VAR_9, 1);
 }






 if (FUNC_3(VAR_13.st_mode))
  FUNC_12(VAR_9, VAR_13.st_dev, VAR_13.st_ino);

 return (VAR_1);
}
