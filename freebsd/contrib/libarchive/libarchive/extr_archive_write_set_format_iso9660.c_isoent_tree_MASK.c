
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ length; char* s; } ;
struct isofile {scalar_t__ dircnt; int entry; TYPE_2__ basename; TYPE_2__ parentdir; } ;
struct isoent {scalar_t__ virtual; struct isofile* file; int rbtree; int dir; } ;
struct TYPE_10__ {struct isoent* rootent; } ;
struct iso9660 {scalar_t__ dircnt_max; TYPE_2__ cur_dirstr; struct isoent* cur_dirent; TYPE_1__ primary; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct archive_string {char* s; int length; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (struct isoent*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (TYPE_2__*,char) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (struct archive_string*) ;
 int FUNC_11 (struct archive_string*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct archive_string*,char const*,int) ;
 int FUNC_14 (char*,int,char const*) ;
 int FUNC_15 (struct isoent*,struct isoent*) ;
 struct isoent* FUNC_16 (struct archive_write*,struct iso9660*,char*) ;
 struct isoent* FUNC_17 (struct isoent*,char*) ;
 scalar_t__ FUNC_18 (char*,char const*) ;

__attribute__((used)) static int
FUNC_19(struct archive_write *VAR_7, struct isoent **VAR_8)
{





 char VAR_9[256];

 struct iso9660 *VAR_10 = VAR_7->format_data;
 struct isoent *VAR_11, *VAR_12, *VAR_13;
 struct isofile *VAR_14, *VAR_15;
 const char *VAR_16, *VAR_17;
 int VAR_18;

 VAR_12 = *VAR_8;
 VAR_11 = VAR_10->primary.rootent;
 if (VAR_12->file->parentdir.length > 0)
  VAR_16 = VAR_17 = VAR_12->file->parentdir.s;
 else
  VAR_16 = VAR_17 = "";






 if (FUNC_12(&(VAR_10->cur_dirstr))
       == FUNC_12(&(VAR_12->file->parentdir)) &&
     FUNC_18(VAR_10->cur_dirstr.s, VAR_16) == 0) {
  if (!FUNC_15(VAR_10->cur_dirent, VAR_12)) {
   VAR_13 = (struct isoent *)FUNC_0(
       &(VAR_10->cur_dirent->rbtree),
       VAR_12->file->basename.s);
   goto same_entry;
  }
  return (VAR_3);
 }

 for (;;) {
  VAR_18 = FUNC_14(VAR_9, sizeof(VAR_9), VAR_16);
  if (VAR_18 == 0) {
   VAR_13 = ((void*)0);
   break;
  }
  if (VAR_18 < 0) {
   FUNC_4(&VAR_7->archive,
       VAR_0,
       "A name buffer is too small");
   FUNC_1(VAR_12);
   return (VAR_2);
  }

  VAR_13 = FUNC_17(VAR_11, VAR_9);
  if (VAR_13 == ((void*)0) || VAR_16[0] == '\0')
   break;


  if (!VAR_13->dir) {

   FUNC_4(&VAR_7->archive,
       VAR_0,
       "`%s' is not directory, we cannot insert `%s' ",
       FUNC_3(VAR_13->file->entry),
       FUNC_3(VAR_12->file->entry));
   FUNC_1(VAR_12);
   *VAR_8 = ((void*)0);
   return (VAR_1);
  }
  VAR_16 += VAR_18;
  if (VAR_16[0] == '/')
   VAR_16++;
  VAR_11 = VAR_13;
 }
 if (VAR_13 == ((void*)0)) {



  while (VAR_16[0] != '\0') {
   struct isoent *VAR_19;
   struct archive_string VAR_20;

   FUNC_11(&VAR_20);
   FUNC_13(&VAR_20, VAR_17, VAR_16 - VAR_17 + VAR_18);
   if (VAR_20.s[VAR_20.length-1] == '/') {
    VAR_20.s[VAR_20.length-1] = '\0';
    VAR_20.length--;
   }
   VAR_19 = FUNC_16(VAR_7, VAR_10, VAR_20.s);
   if (VAR_19 == ((void*)0)) {
    FUNC_10(&VAR_20);
    FUNC_4(&VAR_7->archive, VAR_4,
        "Can't allocate memory");
    FUNC_1(VAR_12);
    *VAR_8 = ((void*)0);
    return (VAR_2);
   }
   FUNC_10(&VAR_20);

   if (VAR_19->file->dircnt > VAR_10->dircnt_max)
    VAR_10->dircnt_max = VAR_19->file->dircnt;
   FUNC_15(VAR_11, VAR_19);
   VAR_13 = VAR_19;

   VAR_16 += VAR_18;
   if (VAR_16[0] == '/')
    VAR_16++;
   VAR_18 = FUNC_14(VAR_9, sizeof(VAR_9), VAR_16);
   if (VAR_18 < 0) {
    FUNC_10(&VAR_20);
    FUNC_4(&VAR_7->archive,
        VAR_0,
        "A name buffer is too small");
    FUNC_1(VAR_12);
    *VAR_8 = ((void*)0);
    return (VAR_2);
   }
   VAR_11 = VAR_13;
  }



  VAR_10->cur_dirent = VAR_11;
  FUNC_8(&(VAR_10->cur_dirstr));
  FUNC_9(&(VAR_10->cur_dirstr),
      FUNC_12(&(VAR_11->file->parentdir)) +
      FUNC_12(&(VAR_11->file->basename)) + 2);
  if (FUNC_12(&(VAR_11->file->parentdir)) +
      FUNC_12(&(VAR_11->file->basename)) == 0)
   VAR_10->cur_dirstr.s[0] = 0;
  else {
   if (FUNC_12(&(VAR_11->file->parentdir)) > 0) {
    FUNC_7(&(VAR_10->cur_dirstr),
        &(VAR_11->file->parentdir));
    FUNC_5(&(VAR_10->cur_dirstr), '/');
   }
   FUNC_6(&(VAR_10->cur_dirstr),
       &(VAR_11->file->basename));
  }

  if (!FUNC_15(VAR_11, VAR_12)) {
   VAR_13 = (struct isoent *)FUNC_0(
       &(VAR_11->rbtree), VAR_12->file->basename.s);
   goto same_entry;
  }
  return (VAR_3);
 }

same_entry:




 VAR_14 = VAR_13->file;
 VAR_15 = VAR_12->file;



 if (FUNC_2(VAR_14->entry) !=
     FUNC_2(VAR_15->entry)) {
  FUNC_4(&VAR_7->archive, VAR_0,
      "Found duplicate entries `%s' and its file type is "
      "different",
      FUNC_3(VAR_14->entry));
  FUNC_1(VAR_12);
  *VAR_8 = ((void*)0);
  return (VAR_1);
 }


 VAR_13->file = VAR_15;
 VAR_12->file = VAR_14;
 VAR_13->virtual = 0;

 FUNC_1(VAR_12);
 *VAR_8 = VAR_13;
 return (VAR_3);
}
