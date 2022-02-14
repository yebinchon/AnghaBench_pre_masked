
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_flags; int st_size; int st_mode; } ;
struct archive_read_disk {int flags; int (* open_on_current_dir ) (int *,char const*,int) ;scalar_t__ (* tree_enter_working_dir ) (int *) ;int archive; int * tree; int (* tree_current_dir_fd ) (int *) ;int follow_symlinks; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct archive*,int ,int ,char*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive_entry*,char const*) ;
 int FUNC_7 (struct archive_entry*,struct stat const*) ;
 int FUNC_8 (struct archive_entry*,char const*) ;
 int FUNC_9 (struct archive_entry*) ;
 char* FUNC_10 (struct archive_entry*) ;
 int FUNC_11 (struct archive_entry*,int,int ) ;
 int FUNC_12 (struct archive_entry*,char*) ;
 char* FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive_read_disk*,struct archive_entry*,int*) ;
 char* FUNC_16 (struct archive*,int ) ;
 char* FUNC_17 (struct archive*,int ) ;
 int FUNC_18 (int *,int ,char*,...) ;
 int FUNC_19 (int) ;
 int VAR_13 ;
 int FUNC_20 (char*) ;
 scalar_t__ FUNC_21 (int,struct stat*) ;
 int FUNC_22 (int,int ,int ,int*) ;
 scalar_t__ FUNC_23 (char const*,struct stat*) ;
 scalar_t__ FUNC_24 (char const*,struct stat*) ;
 char* FUNC_25 (size_t) ;
 int FUNC_26 (char const*,int) ;
 int FUNC_27 (char const*,char*,size_t) ;
 int FUNC_28 (int ,char const*,char*,size_t) ;
 int FUNC_29 (struct archive_read_disk*,struct archive_entry*,int*) ;
 int FUNC_30 (struct archive_read_disk*,struct archive_entry*,int*) ;
 int FUNC_31 (struct archive_read_disk*,struct archive_entry*,int*) ;
 int FUNC_32 (int *,char const*,int) ;
 int FUNC_33 (int *) ;
 scalar_t__ FUNC_34 (int *) ;

int
FUNC_35(struct archive *VAR_14,
    struct archive_entry *VAR_15,
    int VAR_16,
    const struct stat *VAR_17)
{
 struct archive_read_disk *VAR_18 = (struct archive_read_disk *)VAR_14;
 const char *VAR_19, *VAR_20;
 struct stat VAR_21;
 int VAR_22 = VAR_16;
 int VAR_23, VAR_24;

 FUNC_4(VAR_14, VAR_5, VAR_6,
  "archive_read_disk_entry_from_file");

 FUNC_5(VAR_14);
 VAR_19 = FUNC_13(VAR_15);
 if (VAR_19 == ((void*)0))
  VAR_19 = FUNC_10(VAR_15);

 if (VAR_18->tree == ((void*)0)) {
  if (VAR_17 == ((void*)0)) {
   if (FUNC_23(VAR_19, &VAR_21) != 0) {
    FUNC_18(&VAR_18->archive, VAR_13,
        "Can't stat %s", VAR_19);
    return (VAR_0);
   }
   VAR_17 = &VAR_21;
  }
  FUNC_7(VAR_15, VAR_17);
 }


 VAR_20 = FUNC_17(VAR_14, FUNC_14(VAR_15));
 if (VAR_20 != ((void*)0))
  FUNC_8(VAR_15, VAR_20);
 VAR_20 = FUNC_16(VAR_14, FUNC_9(VAR_15));
 if (VAR_20 != ((void*)0))
  FUNC_6(VAR_15, VAR_20);
 VAR_23 = 0;
 if ((VAR_18->flags & VAR_2) == 0)
  VAR_23 = FUNC_15(VAR_18, VAR_15, &VAR_16);
 if ((VAR_18->flags & VAR_4) == 0) {
  VAR_24 = FUNC_31(VAR_18, VAR_15, &VAR_16);
  if (VAR_24 < VAR_23)
   VAR_23 = VAR_24;
 }
 if (VAR_18->flags & VAR_1) {
  VAR_24 = FUNC_29(VAR_18, VAR_15, &VAR_16);
  if (VAR_24 < VAR_23)
   VAR_23 = VAR_24;
 }
 VAR_24 = FUNC_30(VAR_18, VAR_15, &VAR_16);
 if (VAR_24 < VAR_23)
  VAR_23 = VAR_24;


 if (VAR_22 != VAR_16)
  FUNC_19(VAR_16);
 return (VAR_23);
}
