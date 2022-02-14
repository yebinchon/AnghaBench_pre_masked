
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixup_entry {int fixup; struct fixup_entry* name; struct fixup_entry* mac_metadata; int acl; struct fixup_entry* next; int mac_metadata_size; int fflags_set; int mode; int ctime_nanos; int ctime; int mtime_nanos; int mtime; int birthtime_nanos; int birthtime; int atime_nanos; int atime; } ;
struct archive_write_disk {int * fixup_list; int archive; int * pst; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,char*) ;
 int FUNC_3 (int *,int,struct fixup_entry*,int *,int ) ;
 int FUNC_4 (struct fixup_entry*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct fixup_entry*) ;
 int FUNC_8 (struct fixup_entry*,int) ;
 int FUNC_9 (struct archive_write_disk*,int,struct fixup_entry*,int ,int ,int ) ;
 int FUNC_10 (struct archive_write_disk*,struct fixup_entry*,struct fixup_entry*,int ) ;
 int FUNC_11 (struct archive_write_disk*,int,int ,struct fixup_entry*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct fixup_entry* FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct archive *VAR_12)
{
 struct archive_write_disk *VAR_13 = (struct archive_write_disk *)VAR_12;
 struct fixup_entry *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 FUNC_2(&VAR_13->archive, VAR_2,
     VAR_1 | VAR_0,
     "archive_write_disk_close");
 VAR_17 = FUNC_0(&VAR_13->archive);


 VAR_15 = FUNC_12(VAR_13->fixup_list);

 while (VAR_15 != ((void*)0)) {
  VAR_16 = -1;
  VAR_13->pst = ((void*)0);
  if (VAR_15->fixup &
      (VAR_11 | VAR_10 | VAR_7 | VAR_8)) {
   VAR_16 = FUNC_8(VAR_15->name,
       VAR_6 | VAR_3 | VAR_5 | VAR_4);
  }
  if (VAR_15->fixup & VAR_11) {
   FUNC_11(VAR_13, VAR_16, VAR_15->mode, VAR_15->name,
       VAR_15->atime, VAR_15->atime_nanos,
       VAR_15->birthtime, VAR_15->birthtime_nanos,
       VAR_15->mtime, VAR_15->mtime_nanos,
       VAR_15->ctime, VAR_15->ctime_nanos);
  }
  if (VAR_15->fixup & VAR_10) {





   FUNC_4(VAR_15->name, VAR_15->mode);
  }
  if (VAR_15->fixup & VAR_7)
   FUNC_3(&VAR_13->archive, VAR_16,
       VAR_15->name, &VAR_15->acl, VAR_15->mode);
  if (VAR_15->fixup & VAR_8)
   FUNC_9(VAR_13, VAR_16, VAR_15->name,
       VAR_15->mode, VAR_15->fflags_set, 0);
  if (VAR_15->fixup & VAR_9)
   FUNC_10(VAR_13, VAR_15->name, VAR_15->mac_metadata,
      VAR_15->mac_metadata_size);
  VAR_14 = VAR_15->next;
  FUNC_1(&VAR_15->acl);
  FUNC_7(VAR_15->mac_metadata);
  FUNC_7(VAR_15->name);
  if (VAR_16 >= 0)
   FUNC_5(VAR_16);
  FUNC_7(VAR_15);
  VAR_15 = VAR_14;
 }
 VAR_13->fixup_list = ((void*)0);
 return (VAR_17);
}
