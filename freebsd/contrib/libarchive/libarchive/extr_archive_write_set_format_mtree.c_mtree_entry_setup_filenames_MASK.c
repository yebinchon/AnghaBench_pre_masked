
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_wstring {char* s; int length; } ;
struct mtree_entry {struct archive_wstring basename; struct archive_wstring parentdir; struct archive_wstring pathname; } ;
struct archive_write {int archive; } ;
struct archive_string {char* s; int length; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (struct archive_entry*) ;
 int * FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int *,scalar_t__,char*) ;
 int FUNC_3 (struct archive_wstring*,char const*) ;
 int FUNC_4 (struct archive_wstring*,char*,int) ;
 int FUNC_5 (struct archive_wstring*,struct archive_wstring*) ;
 int FUNC_6 (struct archive_wstring*,struct archive_wstring*) ;
 int FUNC_7 (struct archive_wstring*) ;
 int FUNC_8 (struct archive_wstring*) ;
 int FUNC_9 (struct archive_wstring*) ;
 size_t FUNC_10 (struct archive_wstring*) ;
 int FUNC_11 (struct archive_wstring*,char*,size_t) ;
 int FUNC_12 (struct archive_wstring*,int const*) ;
 int FUNC_13 (struct archive_wstring*) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_16 (char*,char*,int) ;
 scalar_t__ FUNC_17 (char const*,char*) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_21(struct archive_write *VAR_4, struct mtree_entry *VAR_5,
    struct archive_entry *VAR_6)
{
 const char *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;
 int VAR_12 = VAR_1;

 FUNC_3(&VAR_5->pathname, FUNC_0(VAR_6));
 (void)VAR_4;

 VAR_7 = VAR_5->pathname.s;
 if (FUNC_17(VAR_7, ".") == 0) {
  FUNC_3(&VAR_5->basename, ".");
  return (VAR_1);
 }

 FUNC_3(&(VAR_5->parentdir), VAR_7);

 VAR_11 = VAR_5->parentdir.length;
 VAR_8 = VAR_9 = VAR_5->parentdir.s;




 while (*VAR_8) {
  if (VAR_8[0] == '/') {
   VAR_8++;
   VAR_11--;
  } else if (VAR_8[0] != '.')
   break;
  else if (VAR_8[1] == '.' && VAR_8[2] == '/') {
   VAR_8 += 3;
   VAR_11 -= 3;
  } else
   break;
 }
 if (VAR_8 != VAR_9) {
  FUNC_16(VAR_9, VAR_8, VAR_11+1);
  VAR_8 = VAR_9;
 }



 while (VAR_11 > 0) {
  size_t VAR_13 = VAR_11;

  if (VAR_11 > 0 && VAR_8[VAR_11-1] == '/') {
   VAR_8[VAR_11-1] = '\0';
   VAR_11--;
  }
  if (VAR_11 > 1 && VAR_8[VAR_11-2] == '/' && VAR_8[VAR_11-1] == '.') {
   VAR_8[VAR_11-2] = '\0';
   VAR_11 -= 2;
  }
  if (VAR_11 > 2 && VAR_8[VAR_11-3] == '/' && VAR_8[VAR_11-2] == '.' &&
      VAR_8[VAR_11-1] == '.') {
   VAR_8[VAR_11-3] = '\0';
   VAR_11 -= 3;
  }
  if (VAR_13 == VAR_11)
   break;
 }
 while (*VAR_8) {
  if (VAR_8[0] == '/') {
   if (VAR_8[1] == '/')

    FUNC_16(VAR_8, VAR_8+1, FUNC_19(VAR_8+1) + 1);
   else if (VAR_8[1] == '.' && VAR_8[2] == '/')

    FUNC_16(VAR_8, VAR_8+2, FUNC_19(VAR_8+2) + 1);
   else if (VAR_8[1] == '.' && VAR_8[2] == '.' && VAR_8[3] == '/') {



    char *VAR_14 = VAR_8 -1;
    while (VAR_14 >= VAR_9) {
     if (*VAR_14 == '/')
      break;
     --VAR_14;
    }
    if (VAR_14 > VAR_9) {
     FUNC_18(VAR_14, VAR_8+3);
     VAR_8 = VAR_14;
    } else {
     FUNC_18(VAR_9, VAR_8+4);
     VAR_8 = VAR_9;
    }
   } else
    VAR_8++;
  } else
   VAR_8++;
 }
 VAR_8 = VAR_9;
 VAR_11 = FUNC_19(VAR_8);
 if (FUNC_17(VAR_8, ".") != 0 && FUNC_20(VAR_8, "./", 2) != 0) {
  struct archive_string VAR_15;
  FUNC_9(&VAR_15);
  FUNC_3(&VAR_15, "./");
  FUNC_11(&VAR_15, VAR_8, VAR_11);
  FUNC_7(&VAR_5->parentdir);
  FUNC_5(&VAR_5->parentdir, &VAR_15);
  FUNC_8(&VAR_15);
  VAR_8 = VAR_5->parentdir.s;
  VAR_11 = FUNC_10(&VAR_5->parentdir);
 }





 VAR_10 = ((void*)0);
 for (; *VAR_8 != '\0'; VAR_8++) {
  if (*VAR_8 == '/')
   VAR_10 = VAR_8;
 }
 if (VAR_10 == ((void*)0)) {

  VAR_5->parentdir.length = VAR_11;
  FUNC_6(&(VAR_5->basename), &(VAR_5->parentdir));
  FUNC_7(&(VAR_5->parentdir));
  *VAR_5->parentdir.s = '\0';
  return (VAR_12);
 }


 *VAR_10 = '\0';
 VAR_5->parentdir.length = VAR_10 - VAR_5->parentdir.s;
 FUNC_3(&(VAR_5->basename), VAR_10 + 1);
 return (VAR_12);
}
