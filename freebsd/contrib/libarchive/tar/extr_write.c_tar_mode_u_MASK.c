
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int fd; struct archive_dir* archive_dir; int bytes_in_last_block; int bytes_per_block; struct archive* matching; int filename; } ;
struct archive_entry {int dummy; } ;
struct archive_dir_entry {struct archive_dir_entry* name; struct archive_dir_entry* next; } ;
struct archive_dir {int * tail; struct archive_dir_entry* head; } ;
struct archive {int dummy; } ;
typedef int int64_t ;
typedef int archive_dir ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct archive*) ;
 scalar_t__ FUNC_1 (struct archive*,int ) ;
 int FUNC_2 (struct archive*) ;
 scalar_t__ FUNC_3 (struct archive*,int,struct archive_entry*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_8 (struct archive*,int,int ) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 scalar_t__ FUNC_13 (struct archive*,int) ;
 int FUNC_14 (struct archive*,int ) ;
 int FUNC_15 (struct archive*,int ) ;
 int FUNC_16 (struct archive*,int) ;
 int FUNC_17 (int) ;
 int VAR_9 ;
 int FUNC_18 (struct archive_dir_entry*) ;
 int FUNC_19 (int,int ,char*,...) ;
 scalar_t__ FUNC_20 (int,int ,int ) ;
 int FUNC_21 (struct archive_dir*,int ,int) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (struct bsdtar*,struct archive*) ;
 int FUNC_24 (struct bsdtar*,struct archive*) ;
 int FUNC_25 (struct bsdtar*) ;
 int FUNC_26 (struct archive*,struct bsdtar*) ;

void
FUNC_27(struct bsdtar *VAR_10)
{
 int64_t VAR_11;
 struct archive *VAR_12;
 struct archive_entry *VAR_13;
 int VAR_14;
 struct archive_dir_entry *VAR_15;
 struct archive_dir VAR_16;

 VAR_10->archive_dir = &VAR_16;
 FUNC_21(&VAR_16, 0, sizeof(VAR_16));

 VAR_14 = VAR_1;


 FUNC_25(VAR_10);

 VAR_10->fd = FUNC_22(VAR_10->filename, VAR_7 | VAR_6);
 if (VAR_10->fd < 0)
  FUNC_19(1, VAR_9,
      "Cannot open %s", VAR_10->filename);

 VAR_12 = FUNC_6();
 FUNC_9(VAR_12);
 FUNC_11(VAR_12);
 FUNC_10(VAR_12);
 FUNC_23(VAR_10, VAR_12);
 if (FUNC_8(VAR_12, VAR_10->fd, VAR_10->bytes_per_block)
     != VAR_5) {
  FUNC_19(1, 0,
      "Can't open %s: %s", VAR_10->filename,
      FUNC_0(VAR_12));
 }


 while (0 == FUNC_7(VAR_12, &VAR_13)) {
  if (FUNC_1(VAR_12, 0) != VAR_0) {
   FUNC_4(VAR_12);
   FUNC_17(VAR_10->fd);
   FUNC_19(1, 0,
       "Cannot append to compressed archive.");
  }
  if (FUNC_3(VAR_10->matching,
      VAR_3 | VAR_4 |
      VAR_2, VAR_13) != VAR_5)
   FUNC_19(1, 0, "Error : %s",
       FUNC_0(VAR_10->matching));

  VAR_14 = FUNC_2(VAR_12);

 }

 VAR_11 = FUNC_5(VAR_12);
 FUNC_4(VAR_12);


 VAR_12 = FUNC_12();



 FUNC_16(VAR_12, VAR_14);
 FUNC_15(VAR_12, VAR_10->bytes_per_block);
 FUNC_14(VAR_12, VAR_10->bytes_in_last_block);

 if (FUNC_20(VAR_10->fd, VAR_11, VAR_8) < 0)
  FUNC_19(1, VAR_9, "Could not seek to archive end");
 FUNC_24(VAR_10, VAR_12);
 if (VAR_5 != FUNC_13(VAR_12, VAR_10->fd))
  FUNC_19(1, 0, "%s", FUNC_0(VAR_12));

 FUNC_26(VAR_12, VAR_10);

 FUNC_17(VAR_10->fd);
 VAR_10->fd = -1;

 while (VAR_10->archive_dir->head != ((void*)0)) {
  VAR_15 = VAR_10->archive_dir->head->next;
  FUNC_18(VAR_10->archive_dir->head->name);
  FUNC_18(VAR_10->archive_dir->head);
  VAR_10->archive_dir->head = VAR_15;
 }
 VAR_10->archive_dir->tail = ((void*)0);
}
