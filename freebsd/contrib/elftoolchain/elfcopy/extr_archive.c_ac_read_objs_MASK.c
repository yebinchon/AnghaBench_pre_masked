
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfcopy {int * ein; scalar_t__ rela_off; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
struct ar_obj {char* buf; int mtime; int md; int gid; int uid; int * name; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 char* FUNC_5 (struct archive_entry*) ;
 size_t FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 scalar_t__ FUNC_10 (struct archive*,char*,size_t) ;
 int FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 int FUNC_14 (struct archive*,int,int) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int *) ;
 int * FUNC_18 (char*,size_t) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,char*,...) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int,int ,int ) ;
 void* FUNC_23 (int) ;
 int FUNC_24 (struct elfcopy*,struct ar_obj*) ;
 scalar_t__ FUNC_25 (char const*,char*) ;
 int * FUNC_26 (char const*) ;
 int FUNC_27 (char*,int ) ;

__attribute__((used)) static void
FUNC_28(struct elfcopy *VAR_7, int VAR_8)
{
 struct archive *VAR_9;
 struct archive_entry *VAR_10;
 struct ar_obj *VAR_11;
 const char *VAR_12;
 char *VAR_13;
 size_t VAR_14;
 int VAR_15;

 VAR_7->rela_off = 0;
 if (FUNC_22(VAR_8, 0, VAR_6) == -1)
  FUNC_19(VAR_5, "lseek failed");
 if ((VAR_9 = FUNC_12()) == ((void*)0))
  FUNC_20(VAR_5, "archive_read_new failed");
 FUNC_15(VAR_9);
 FUNC_0(FUNC_14(VAR_9, VAR_8, 10240));
 for(;;) {
  VAR_15 = FUNC_13(VAR_9, &VAR_10);
  if (VAR_15 == VAR_1)
   FUNC_20(VAR_5, "%s", FUNC_8(VAR_9));
  if (VAR_15 == VAR_0)
   break;
  if (VAR_15 == VAR_3 || VAR_15 == VAR_2)
   FUNC_27("%s", FUNC_8(VAR_9));
  if (VAR_15 == VAR_2)
   continue;

  VAR_12 = FUNC_5(VAR_10);


  if (FUNC_25(VAR_12, "/") == 0 || FUNC_25(VAR_12, "//") == 0)
   continue;

  VAR_14 = FUNC_6(VAR_10);

  if (VAR_14 > 0) {
   if ((VAR_13 = FUNC_23(VAR_14)) == ((void*)0))
    FUNC_19(VAR_5, "malloc failed");
   if (FUNC_10(VAR_9, VAR_13, VAR_14) != (ssize_t)VAR_14) {
    FUNC_27("%s", FUNC_8(VAR_9));
    FUNC_21(VAR_13);
    continue;
   }
   if ((VAR_11 = FUNC_23(sizeof(*VAR_11))) == ((void*)0))
    FUNC_19(VAR_5, "malloc failed");
   if ((VAR_11->name = FUNC_26(VAR_12)) == ((void*)0))
    FUNC_19(VAR_5, "strdup failed");
   VAR_11->buf = VAR_13;
   VAR_11->uid = FUNC_7(VAR_10);
   VAR_11->gid = FUNC_2(VAR_10);
   VAR_11->md = FUNC_3(VAR_10);
   VAR_11->mtime = FUNC_4(VAR_10);
   if ((VAR_7->ein = FUNC_18(VAR_13, VAR_14)) == ((void*)0))
    FUNC_20(VAR_5, "elf_memory() failed: %s",
        FUNC_16(-1));
   if (FUNC_17(VAR_7->ein) != VAR_4)
    FUNC_20(VAR_5,
        "file format not recognized");
   FUNC_24(VAR_7, VAR_11);
  }
 }
 FUNC_0(FUNC_9(VAR_9));
 FUNC_1(FUNC_11(VAR_9));
}
