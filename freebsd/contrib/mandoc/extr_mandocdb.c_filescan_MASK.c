
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct mlink {char* file; char* dsec; char* arch; char* fsec; char* name; int dform; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mlink*) ;
 int FUNC_2 (char const*,struct stat*) ;
 struct mlink* FUNC_3 (int,int) ;
 int FUNC_4 (struct mlink*,struct stat*) ;
 scalar_t__ VAR_11 ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*,...) ;
 int FUNC_7 (char*,struct stat*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;
 char* FUNC_12 (char*,char) ;
 char* FUNC_13 (char*,char*) ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_14(const char *VAR_13)
{
 char VAR_14[VAR_6];
 struct stat VAR_15;
 struct mlink *VAR_16;
 char *VAR_17, *VAR_18;

 FUNC_0(VAR_12);

 if (0 == FUNC_11(VAR_13, "./", 2))
  VAR_13 += 2;
 if (-1 == FUNC_2(VAR_13, &VAR_15)) {
  VAR_10 = (int)VAR_4;
  FUNC_6(VAR_13, "&lstat");
  return;
 } else if (0 == ((VAR_8 | VAR_7) & VAR_15.st_mode)) {
  VAR_10 = (int)VAR_4;
  FUNC_6(VAR_13, "Not a regular file");
  return;
 }





 if (((void*)0) == FUNC_5(VAR_13, VAR_14)) {
  VAR_10 = (int)VAR_4;
  FUNC_6(VAR_13, "&realpath");
  return;
 }

 if (VAR_5 == VAR_11)
  VAR_18 = VAR_14;
 else if (FUNC_13(VAR_14, VAR_9) == VAR_14)
  VAR_18 = VAR_14 + FUNC_10(VAR_9);




 else {
  VAR_10 = (int)VAR_4;
  FUNC_6("", "%s: outside base directory", VAR_14);
  return;
 }
 if (VAR_7 & VAR_15.st_mode) {
  if (-1 == FUNC_7(VAR_14, &VAR_15)) {
   VAR_10 = (int)VAR_4;
   FUNC_6(VAR_13, "&stat");
   return;
  }
  if (FUNC_9(VAR_14, VAR_13, sizeof(VAR_14)) >= sizeof(VAR_14)) {
   FUNC_6(VAR_13, "Filename too long");
   return;
  }
  VAR_18 = VAR_14;
  if (VAR_5 != VAR_11 && FUNC_13(VAR_14, VAR_9) == VAR_14)
   VAR_18 += FUNC_10(VAR_9);
 }

 VAR_16 = FUNC_3(1, sizeof(struct mlink));
 VAR_16->dform = VAR_1;
 if (FUNC_9(VAR_16->file, VAR_18, sizeof(VAR_16->file)) >=
     sizeof(VAR_16->file)) {
  FUNC_6(VAR_18, "Filename too long");
  FUNC_1(VAR_16);
  return;
 }






 if (VAR_11 == VAR_5 || (VAR_18 == VAR_14 && *VAR_18 == '/')) {
  if (FUNC_11(VAR_14, "man/", 4) == 0)
   VAR_18 = VAR_14 + 4;
  else if ((VAR_18 = FUNC_13(VAR_14, "/man/")) != ((void*)0))
   VAR_18 += 5;
  else
   VAR_18 = VAR_14;
 }







 if (((void*)0) != (VAR_17 = FUNC_8(VAR_18, '/'))) {
  *VAR_17++ = '\0';
  if (0 == FUNC_11(VAR_18, "man", 3)) {
   VAR_16->dform = VAR_2;
   VAR_16->dsec = VAR_18 + 3;
  } else if (0 == FUNC_11(VAR_18, "cat", 3)) {
   VAR_16->dform = VAR_0;
   VAR_16->dsec = VAR_18 + 3;
  }

  VAR_18 = VAR_17;
  if (((void*)0) != VAR_16->dsec && ((void*)0) != (VAR_17 = FUNC_8(VAR_18, '/'))) {
   *VAR_17++ = '\0';
   VAR_16->arch = VAR_18;
   VAR_18 = VAR_17;
  }
 }





 VAR_17 = FUNC_12(VAR_18, '\0');
 while (VAR_17-- > VAR_18 && '/' != *VAR_17 && '.' != *VAR_17)
              ;

 if ('.' == *VAR_17) {
  *VAR_17++ = '\0';
  VAR_16->fsec = VAR_17;
 }





 VAR_16->name = VAR_18;
 if (((void*)0) != (VAR_17 = FUNC_12(VAR_18, '/'))) {
  VAR_16->name = VAR_17 + 1;
  *VAR_17 = '\0';
 }
 FUNC_4(VAR_16, &VAR_15);
}
