
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uid_t ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct stat {scalar_t__ st_mtime; } ;
struct bsdar {char const* filename; int options; int argc; char** argv; int * output; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int mode_t ;
typedef int gid_t ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct archive_entry*) ;
 char* FUNC_5 (struct archive_entry*) ;
 size_t FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 char const* FUNC_8 (struct archive*) ;
 scalar_t__ FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*,int ) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*,struct archive_entry*,int) ;
 int FUNC_14 (struct archive*) ;
 struct archive* FUNC_15 () ;
 int FUNC_16 (struct archive*,struct archive_entry**) ;
 int FUNC_17 (struct archive*,char const*,int ) ;
 int FUNC_18 (struct archive*) ;
 int FUNC_19 (int) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (struct bsdar*,scalar_t__,char*) ;
 scalar_t__ FUNC_22 (struct bsdar*,char const*) ;
 char* FUNC_23 (int ) ;
 int FUNC_24 (struct bsdar*,scalar_t__,char*,...) ;
 scalar_t__ VAR_17 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,char*,...) ;
 struct tm* FUNC_28 (scalar_t__*) ;
 scalar_t__ FUNC_29 (char const*,struct stat*) ;
 scalar_t__ FUNC_30 (char const*,char) ;
 scalar_t__ FUNC_31 (char const*,char const*) ;
 int FUNC_32 (char*,int,char*,struct tm*) ;

int
FUNC_33(struct bsdar *VAR_18, int VAR_19)
{
 FILE *VAR_20;
 struct archive *VAR_21;
 struct archive_entry *VAR_22;
 struct stat VAR_23;
 struct tm *VAR_24;
 const char *VAR_25;
 const char *VAR_26;
 mode_t VAR_27;
 size_t VAR_28;
 time_t VAR_29;
 uid_t VAR_30;
 gid_t VAR_31;
 char **VAR_32;
 char VAR_33[25];
 int VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38;

 FUNC_19(VAR_19 == 'p' || VAR_19 == 't' || VAR_19 == 'x');

 if ((VAR_21 = FUNC_15()) == ((void*)0))
  FUNC_21(VAR_18, 0, "archive_read_new failed");
 FUNC_18(VAR_21);
 FUNC_0(FUNC_17(VAR_21, VAR_18->filename, VAR_13));

 VAR_35 = VAR_16;
 VAR_20 = VAR_18->output;

 for (;;) {
  VAR_38 = FUNC_16(VAR_21, &VAR_22);
  if (VAR_38 == VAR_7 || VAR_38 == VAR_6 ||
      VAR_38 == VAR_4)
   FUNC_24(VAR_18, 0, "%s", FUNC_8(VAR_21));
  if (VAR_38 == VAR_0 || VAR_38 == VAR_4)
   break;
  if (VAR_38 == VAR_6) {
   FUNC_24(VAR_18, 0, "Retrying...");
   continue;
  }

  if (FUNC_9(VAR_21) == VAR_5)
   VAR_18->options |= VAR_8;
  else
   VAR_18->options &= ~VAR_8;

  if ((VAR_26 = FUNC_5(VAR_22)) == ((void*)0))
   break;


  if (FUNC_22(VAR_18, VAR_26))
   continue;


  if (FUNC_30(VAR_26, '/')) {
   FUNC_24(VAR_18, 0, "ignoring entry: %s",
       VAR_26);
   continue;
  }





  if (VAR_18->argc > 0) {
   VAR_34 = 0;
   for(VAR_36 = 0; VAR_36 < VAR_18->argc; VAR_36++) {
    VAR_32 = &VAR_18->argv[VAR_36];
    if (*VAR_32 == ((void*)0))
     continue;




    if ((VAR_25 = FUNC_20(*VAR_32)) == ((void*)0))
     FUNC_21(VAR_18, VAR_17,
         "basename failed");
    if (FUNC_31(VAR_25, VAR_26) != 0)
     continue;

    *VAR_32 = ((void*)0);
    VAR_34 = 1;
    break;
   }
   if (!VAR_34)
    continue;
  }

  if (VAR_19 == 't') {
   if (VAR_18->options & VAR_12) {
    VAR_27 = FUNC_3(VAR_22);
    VAR_30 = FUNC_7(VAR_22);
    VAR_31 = FUNC_2(VAR_22);
    VAR_28 = FUNC_6(VAR_22);
    VAR_29 = FUNC_4(VAR_22);
    (void)FUNC_27(VAR_20, "%s %6d/%-6d %8ju ",
        FUNC_23(VAR_27) + 1, VAR_30, VAR_31,
        (uintmax_t)VAR_28);
    VAR_24 = FUNC_28(&VAR_29);
    (void)FUNC_32(VAR_33, sizeof(VAR_33),
        "%b %e %H:%M %Y", VAR_24);
    (void)FUNC_27(VAR_20, "%s %s", VAR_33, VAR_26);
   } else
    (void)FUNC_27(VAR_20, "%s", VAR_26);
   VAR_38 = FUNC_12(VAR_21);
   if (VAR_38 == VAR_7 || VAR_38 == VAR_6 ||
       VAR_38 == VAR_4) {
    (void)FUNC_27(VAR_20, "\n");
    FUNC_24(VAR_18, 0, "%s",
        FUNC_8(VAR_21));
   }

   if (VAR_38 == VAR_4)
    break;

   (void)FUNC_27(VAR_20, "\n");
  } else {

   if (VAR_19 == 'p') {
    if (VAR_18->options & VAR_12) {
     (void)FUNC_27(VAR_20, "\n<%s>\n\n",
         VAR_26);
     FUNC_25(VAR_20);
    }
    VAR_38 = FUNC_11(VAR_21, FUNC_26(VAR_20));
   } else {

    if (FUNC_29(VAR_26, &VAR_23) != 0) {
     if (VAR_17 != VAR_14) {
      FUNC_24(VAR_18, VAR_17,
          "stat %s failed",
          VAR_18->filename);
      continue;
     }
    } else {

     if (VAR_18->options & VAR_9)
      continue;
     if (VAR_18->options & VAR_11 &&
         FUNC_4(VAR_22) <=
         VAR_23.st_mtime)
      continue;
    }

    if (VAR_18->options & VAR_12)
     (void)FUNC_27(VAR_20, "x - %s\n", VAR_26);

    VAR_37 = VAR_2 |
         VAR_1;
    if (VAR_18->options & VAR_10)
     VAR_37 |= VAR_3;

    VAR_38 = FUNC_13(VAR_21, VAR_22, VAR_37);
   }

   if (VAR_38) {
    FUNC_24(VAR_18, 0, "%s",
        FUNC_8(VAR_21));
    VAR_35 = VAR_15;
   }
  }
 }

 if (VAR_38 == VAR_4)
  VAR_35 = VAR_15;

 FUNC_0(FUNC_10(VAR_21));
 FUNC_1(FUNC_14(VAR_21));

 return (VAR_35);
}
