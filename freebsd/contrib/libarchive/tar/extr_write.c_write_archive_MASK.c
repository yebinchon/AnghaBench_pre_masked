
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int buff_size; int symlink_mode; char** argv; int return_value; int flags; struct archive* diskreader; int * resolver; int * buff; int * names_from_file; int readdisk_flags; int * matching; scalar_t__ bytes_per_block; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bsdtar*,struct archive*,char const*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int *,struct archive_entry**,struct archive_entry**) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 struct archive_entry* FUNC_6 () ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive*) ;
 char* FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,int) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct bsdtar*,struct archive*) ;
 int FUNC_13 (struct archive*) ;
 struct archive* FUNC_14 () ;
 int FUNC_15 (struct archive*,int ) ;
 int FUNC_16 (struct archive*,int ) ;
 int FUNC_17 (struct archive*,int *,int *,struct bsdtar*) ;
 int FUNC_18 (struct archive*,int *,struct bsdtar*) ;
 int FUNC_19 (struct archive*) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (struct archive*) ;
 int FUNC_22 (struct archive*) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*,struct archive_entry*) ;
 scalar_t__ FUNC_25 (struct archive*) ;
 int FUNC_26 (struct archive*) ;
 int FUNC_27 (struct bsdtar*) ;
 int * VAR_3 ;
 int FUNC_28 (int ,char*,char*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int,int ,char*) ;
 int FUNC_31 (int ,char*,...) ;
 int * FUNC_32 (int) ;
 int * VAR_4 ;
 int FUNC_33 (struct bsdtar*,char const*) ;
 int VAR_5 ;
 char* FUNC_34 (int ) ;
 int FUNC_35 (struct bsdtar*,struct archive*,struct archive_entry*) ;
 int FUNC_36 (struct bsdtar*,struct archive*,char const*) ;

__attribute__((used)) static void
FUNC_37(struct archive *VAR_6, struct bsdtar *VAR_7)
{
 const char *VAR_8;
 struct archive_entry *VAR_9, *VAR_10;


 VAR_7->buff_size = 64 * 1024;
 while (VAR_7->buff_size < (size_t)VAR_7->bytes_per_block)
   VAR_7->buff_size *= 2;

 VAR_7->buff_size += 16 * 1024;


 if ((VAR_7->buff = FUNC_32(VAR_7->buff_size)) == ((void*)0))
  FUNC_30(1, 0, "cannot allocate memory");

 if ((VAR_7->resolver = FUNC_4()) == ((void*)0))
  FUNC_30(1, 0, "cannot create link resolver");
 FUNC_5(VAR_7->resolver,
     FUNC_11(VAR_6));


 if ((VAR_7->diskreader = FUNC_14()) == ((void*)0))
  FUNC_30(1, 0, "Cannot create read_disk object");

 switch (VAR_7->symlink_mode) {
 case 'H':
  FUNC_20(VAR_7->diskreader);
  break;
 case 'L':
  FUNC_21(VAR_7->diskreader);
  break;
 default:
  FUNC_22(VAR_7->diskreader);
  break;
 }

 FUNC_17(VAR_7->diskreader,
     VAR_7->matching, VAR_3, VAR_7);
 FUNC_18(
     VAR_7->diskreader, VAR_4, VAR_7);

 FUNC_16(VAR_7->diskreader,
     VAR_7->readdisk_flags);
 FUNC_19(VAR_7->diskreader);

 if (VAR_7->names_from_file != ((void*)0))
  FUNC_12(VAR_7, VAR_6);

 while (*VAR_7->argv) {
  VAR_8 = *VAR_7->argv;
  if (VAR_8[0] == '-' && VAR_8[1] == 'C') {
   VAR_8 += 2;
   if (*VAR_8 == '\0') {
    VAR_7->argv++;
    VAR_8 = *VAR_7->argv;
    if (VAR_8 == ((void*)0)) {
     FUNC_31(0, "%s",
         "Missing argument for -C");
     VAR_7->return_value = 1;
     goto cleanup;
    }
    if (*VAR_8 == '\0') {
     FUNC_31(0,
         "Meaningless argument for -C: ''");
     VAR_7->return_value = 1;
     goto cleanup;
    }
   }
   FUNC_33(VAR_7, VAR_8);
  } else {
   if (*VAR_8 != '/')
    FUNC_27(VAR_7);
   if (*VAR_8 == '@') {
    if (FUNC_0(VAR_7, VAR_6,
        VAR_8 + 1) != 0)
     break;
   } else
    FUNC_36(VAR_7, VAR_6, VAR_8);
  }
  VAR_7->argv++;
 }

 FUNC_17(VAR_7->diskreader, ((void*)0), ((void*)0), ((void*)0));
 FUNC_18(
     VAR_7->diskreader, ((void*)0), ((void*)0));
 VAR_9 = ((void*)0);
 FUNC_2(VAR_7->resolver, &VAR_9, &VAR_10);
 while (VAR_9 != ((void*)0)) {
  int VAR_11;
  struct archive_entry *VAR_12;
  struct archive *VAR_13 = VAR_7->diskreader;
  VAR_11 = FUNC_15(VAR_13,
   FUNC_7(VAR_9));
  if (VAR_11 != VAR_1) {
   FUNC_31(FUNC_8(VAR_13),
       "%s", FUNC_9(VAR_13));
   VAR_7->return_value = 1;
   goto next_entry;
  }






  VAR_12 = FUNC_6();
  VAR_11 = FUNC_24(VAR_13, VAR_12);
  FUNC_1(VAR_12);
  if (VAR_11 != VAR_1) {
   FUNC_31(FUNC_8(VAR_13),
       "%s", FUNC_9(VAR_13));
   if (VAR_11 == VAR_0)
    VAR_7->return_value = 1;
   FUNC_13(VAR_13);
   goto next_entry;
  }

  FUNC_35(VAR_7, VAR_6, VAR_9);
  FUNC_13(VAR_13);
next_entry:
  FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
  FUNC_2(VAR_7->resolver, &VAR_9, &VAR_10);
 }

 if (FUNC_25(VAR_6)) {
  FUNC_31(0, "%s", FUNC_9(VAR_6));
  VAR_7->return_value = 1;
 }

cleanup:

 FUNC_29(VAR_7->buff);
 FUNC_3(VAR_7->resolver);
 VAR_7->resolver = ((void*)0);
 FUNC_23(VAR_7->diskreader);
 VAR_7->diskreader = ((void*)0);

 if (VAR_7->flags & VAR_2) {
  FUNC_28(VAR_5, "Total bytes written: %s\n",
      FUNC_34(FUNC_10(VAR_6, -1)));
 }

 FUNC_26(VAR_6);
}
