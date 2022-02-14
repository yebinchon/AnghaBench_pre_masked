
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int time_t ;
struct cpio {scalar_t__ day_first; scalar_t__ option_numeric_uid_gid; } ;
struct archive_entry {int dummy; } ;
typedef int size ;
typedef int date ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive_entry*) ;
 char* FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 char* FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 scalar_t__ FUNC_7 (struct archive_entry*) ;
 scalar_t__ FUNC_8 (struct archive_entry*) ;
 scalar_t__ FUNC_9 (struct archive_entry*) ;
 char* FUNC_10 (struct archive_entry*) ;
 char* FUNC_11 (struct archive_entry*) ;
 scalar_t__ FUNC_12 (struct archive_entry*) ;
 char* FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,char*,...) ;
 int FUNC_16 (int*) ;
 char* FUNC_17 (struct cpio*,int ) ;
 char* FUNC_18 (struct cpio*,int ) ;
 int FUNC_19 (char*,int,char*,unsigned long,unsigned long) ;
 int * VAR_2 ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char*,int,char const*,int ) ;
 int FUNC_22 (int*) ;

__attribute__((used)) static void
FUNC_23(struct cpio *VAR_3, struct archive_entry *VAR_4)
{
 char VAR_5[32];
 char VAR_6[32];
 char VAR_7[16], VAR_8[16];
 const char *VAR_9, *VAR_10;
 FILE *VAR_11 = VAR_2;
 const char *VAR_12;
 time_t VAR_13;
 static time_t VAR_14;

 if (!VAR_14)
  FUNC_22(&VAR_14);

 if (VAR_3->option_numeric_uid_gid) {

  FUNC_20(VAR_7, FUNC_14(FUNC_12(VAR_4)));
  VAR_9 = VAR_7;
  FUNC_20(VAR_8, FUNC_14(FUNC_1(VAR_4)));
  VAR_10 = VAR_8;
 } else {

  VAR_9 = FUNC_13(VAR_4);
  if (VAR_9 == ((void*)0))
   VAR_9 = FUNC_18(VAR_3, (uid_t)FUNC_12(VAR_4));

  VAR_10 = FUNC_2(VAR_4);
  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_17(VAR_3, (uid_t)FUNC_1(VAR_4));
 }


 if (FUNC_0(VAR_4) == VAR_1
     || FUNC_0(VAR_4) == VAR_0) {
  FUNC_19(VAR_5, sizeof(VAR_5), "%lu,%lu",
      (unsigned long)FUNC_7(VAR_4),
      (unsigned long)FUNC_8(VAR_4));
 } else {
  FUNC_20(VAR_5, FUNC_14(FUNC_9(VAR_4)));
 }


 VAR_13 = FUNC_4(VAR_4);
 if (VAR_13 - VAR_14 > 365*86400/2
  || VAR_13 - VAR_14 < -365*86400/2)
  VAR_12 = VAR_3->day_first ? "%e %b  %Y" : "%b %e  %Y";
 else
  VAR_12 = VAR_3->day_first ? "%e %b %H:%M" : "%b %e %H:%M";

 FUNC_21(VAR_6, sizeof(VAR_6), VAR_12, FUNC_16(&VAR_13));

 FUNC_15(VAR_11, "%s%3d %-8s %-8s %8s %12s %s",
     FUNC_10(VAR_4),
     FUNC_5(VAR_4),
     VAR_9, VAR_10, VAR_5, VAR_6,
     FUNC_6(VAR_4));


 if (FUNC_3(VAR_4))
  FUNC_15(VAR_11, " link to %s", FUNC_3(VAR_4));
 else if (FUNC_11(VAR_4))
  FUNC_15(VAR_11, " -> %s", FUNC_11(VAR_4));
 FUNC_15(VAR_11, "\n");
}
