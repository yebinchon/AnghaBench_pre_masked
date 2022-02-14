
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int fd; int filename; int cset; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 scalar_t__ FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct archive*,struct archive_entry**) ;
 int FUNC_8 (struct archive*,int,int) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 struct archive* FUNC_13 () ;
 int FUNC_14 (struct archive*,int) ;
 int FUNC_15 (struct archive*,int) ;
 int FUNC_16 (struct archive*,int *) ;
 int FUNC_17 (int) ;
 int * FUNC_18 (int ) ;
 int VAR_9 ;
 int FUNC_19 (int,int ,char*,...) ;
 scalar_t__ FUNC_20 (int,int ,int ) ;
 void* FUNC_21 (int ,int,...) ;
 int FUNC_22 (struct bsdtar*,struct archive*) ;
 int FUNC_23 (struct bsdtar*,struct archive*) ;
 int FUNC_24 (struct bsdtar*) ;
 int FUNC_25 (struct archive*,struct bsdtar*) ;

void
FUNC_26(struct bsdtar *VAR_10)
{
 int64_t VAR_11;
 int VAR_12;
 struct archive *VAR_13;
 struct archive_entry *VAR_14;
 int VAR_15;


 FUNC_24(VAR_10);

 VAR_12 = VAR_3;




 VAR_10->fd = FUNC_21(VAR_10->filename, VAR_7 | VAR_6 | VAR_5, 0666);

 if (VAR_10->fd < 0)
  FUNC_19(1, VAR_9,
      "Cannot open %s", VAR_10->filename);

 VAR_13 = FUNC_6();
 FUNC_9(VAR_13);
 FUNC_10(VAR_13);
 FUNC_12(VAR_13);
 FUNC_11(VAR_13);
 FUNC_22(VAR_10, VAR_13);
 VAR_15 = FUNC_8(VAR_13, VAR_10->fd, 10240);
 if (VAR_15 != VAR_4)
  FUNC_19(1, FUNC_0(VAR_13),
      "Can't read archive %s: %s", VAR_10->filename,
      FUNC_1(VAR_13));
 while (0 == FUNC_7(VAR_13, &VAR_14)) {
  if (FUNC_2(VAR_13, 0) != VAR_0) {
   FUNC_4(VAR_13);
   FUNC_17(VAR_10->fd);
   FUNC_19(1, 0,
       "Cannot append to compressed archive.");
  }

  VAR_12 = FUNC_3(VAR_13);
 }

 VAR_11 = FUNC_5(VAR_13);
 FUNC_4(VAR_13);


 VAR_13 = FUNC_13();
 if (FUNC_18(VAR_10->cset) != ((void*)0)) {

  FUNC_16(VAR_13,
      FUNC_18(VAR_10->cset));

  VAR_12 &= VAR_1;
  if (VAR_12 != (int)(FUNC_3(VAR_13) & VAR_1)
      && VAR_12 != VAR_2) {
   FUNC_19(1, 0,
       "Format %s is incompatible with the archive %s.",
       FUNC_18(VAR_10->cset), VAR_10->filename);
  }
 } else {




  if (VAR_12 == VAR_2)
   VAR_12 = VAR_3;
  FUNC_15(VAR_13, VAR_12);
 }
 if (FUNC_20(VAR_10->fd, VAR_11, VAR_8) < 0)
  FUNC_19(1, VAR_9, "Could not seek to archive end");
 FUNC_23(VAR_10, VAR_13);
 if (VAR_4 != FUNC_14(VAR_13, VAR_10->fd))
  FUNC_19(1, 0, "%s", FUNC_1(VAR_13));

 FUNC_25(VAR_13, VAR_10);

 FUNC_17(VAR_10->fd);
 VAR_10->fd = -1;
}
