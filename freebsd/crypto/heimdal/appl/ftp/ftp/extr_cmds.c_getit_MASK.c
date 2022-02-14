
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct stat {int st_mtime; scalar_t__ st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 struct tm* FUNC_5 (int *) ;
 int FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char*,char*,char*,int,int) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*,char*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_11 (char*,struct stat*) ;
 int VAR_9 ;
 int FUNC_12 (char*,char*) ;

int
FUNC_13(int VAR_10, char **VAR_11, int VAR_12, char *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 1;
 char *VAR_16, *VAR_17;

 if (VAR_10 == 2) {
  VAR_10++;
  VAR_15 = 0;
  VAR_11[2] = VAR_11[1];
  VAR_14++;
 }
 if ((VAR_10 < 2 && !FUNC_0(&VAR_10, &VAR_11, "remote-file")) ||
     (VAR_10 < 3 && !FUNC_0(&VAR_10, &VAR_11, "local-file"))) {
  FUNC_8("usage: %s remote-file [ local-file ]\n", VAR_11[0]);
  VAR_2 = -1;
  return (0);
 }
 VAR_16 = VAR_11[1];
 VAR_17 = VAR_11[2];
 if (!FUNC_4(&VAR_11[2])) {
  VAR_2 = -1;
  return (0);
 }
 if (VAR_14 && VAR_5) {
  char *VAR_18 = VAR_11[1], *VAR_19, VAR_20[VAR_1];

  while (*VAR_18 && !FUNC_6((unsigned char)*VAR_18)) {
   VAR_18++;
  }
  if (!*VAR_18) {
   VAR_18 = VAR_11[2];
   VAR_19 = VAR_20;
   while ((*VAR_19 = *VAR_18) != '\0') {
    if (FUNC_7((unsigned char)*VAR_19)) {
     *VAR_19 = 'a' + *VAR_19 - 'A';
    }
    VAR_18++;
    VAR_19++;
   }
   VAR_11[2] = VAR_20;
  }
 }
 if (VAR_14 && VAR_6)
  VAR_11[2] = FUNC_3(VAR_11[2]);
 if (VAR_14 && VAR_4)
  VAR_11[2] = FUNC_2(VAR_11[2]);
 if (VAR_12) {
  struct stat VAR_21;
  int VAR_22;

  VAR_22 = FUNC_11(VAR_11[2], &VAR_21);
  if (VAR_12 == 1) {
   if (VAR_22 < 0) {
    FUNC_12("local: %s", VAR_11[2]);
    return (0);
   }
   VAR_8 = VAR_21.st_size;
  } else if (VAR_22 == 0) {
   int VAR_23;
   int VAR_24;
   int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
   struct tm *VAR_31;
   time_t VAR_32 = VAR_21.st_mtime;

   VAR_23 = VAR_9;
   if (VAR_3 == 0)
    VAR_9 = -1;
   VAR_24 = FUNC_1("MDTM %s", VAR_11[1]);
   VAR_9 = VAR_23;
   if (VAR_24 != VAR_0) {
    FUNC_8("%s\n", VAR_7);
    return (0);
   }
   if (FUNC_10(VAR_7,
       "%*s %04d%02d%02d%02d%02d%02d",
       &VAR_25, &VAR_26, &VAR_27, &VAR_28, &VAR_29, &VAR_30)
       != 6) {
    FUNC_8 ("bad MDTM result\n");
    return (0);
   }

   VAR_31 = FUNC_5(&VAR_32);
   VAR_31->tm_mon++;
   VAR_31->tm_year += 1900;

   if ((VAR_31->tm_year > VAR_25) ||
       (VAR_31->tm_year == VAR_25 &&
        VAR_31->tm_mon > VAR_26) ||
       (VAR_31->tm_mon == VAR_26 &&
        VAR_31->tm_mday > VAR_27) ||
       (VAR_31->tm_mday == VAR_27 &&
        VAR_31->tm_hour > VAR_28) ||
       (VAR_31->tm_hour == VAR_28 &&
        VAR_31->tm_min > VAR_29) ||
       (VAR_31->tm_min == VAR_29 &&
        VAR_31->tm_sec > VAR_30))
    return (1);
  }
 }

 FUNC_9("RETR", VAR_11[2], VAR_11[1], VAR_13,
      VAR_11[1] != VAR_16 || VAR_11[2] != VAR_17, VAR_15);
 VAR_8 = 0;
 return (0);
}
