
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ length; char* s; } ;
struct mtree_writer {TYPE_3__ cur_dirstr; struct mtree_entry* cur_dirent; struct mtree_entry* root; } ;
struct TYPE_12__ {char* s; } ;
struct mtree_entry {TYPE_1__* dir_info; struct mtree_entry* parent; TYPE_3__ basename; TYPE_3__ parentdir; TYPE_2__ pathname; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_string {char* s; int length; } ;
struct archive_rb_node {int dummy; } ;
typedef int name ;
struct TYPE_11__ {scalar_t__ virtual; int rbtree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct archive_rb_node*) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (TYPE_3__*,char) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (struct archive_string*) ;
 int FUNC_9 (struct archive_string*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (struct archive_string*,char const*,int) ;
 int FUNC_12 (char*,int,char const*) ;
 int FUNC_13 (struct archive_write*,char*,struct mtree_entry**) ;
 int FUNC_14 (struct archive_write*,struct mtree_entry*,struct mtree_entry*) ;
 struct mtree_entry* FUNC_15 (struct mtree_entry*,char*) ;
 int FUNC_16 (struct mtree_entry*) ;
 int FUNC_17 (struct mtree_writer*,struct mtree_entry*) ;
 scalar_t__ FUNC_18 (char*,char const*) ;

__attribute__((used)) static int
FUNC_19(struct archive_write *VAR_7, struct mtree_entry **VAR_8)
{





 char VAR_9[256];

 struct mtree_writer *VAR_10 = (struct mtree_writer *)VAR_7->format_data;
 struct mtree_entry *VAR_11, *VAR_12, *VAR_13;
 const char *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 VAR_12 = *VAR_8;
 if (VAR_12->parentdir.length == 0 && VAR_12->basename.length == 1 &&
     VAR_12->basename.s[0] == '.') {
  VAR_12->parent = VAR_12;
  if (VAR_10->root != ((void*)0)) {
   VAR_13 = VAR_10->root;
   goto same_entry;
  }
  VAR_10->root = VAR_12;
  FUNC_17(VAR_10, VAR_12);
  return (VAR_3);
 }

 if (VAR_12->parentdir.length == 0) {
  FUNC_2(&VAR_7->archive, VAR_0,
      "Internal programming error "
      "in generating canonical name for %s",
      VAR_12->pathname.s);
  return (VAR_1);
 }

 VAR_14 = VAR_15 = VAR_12->parentdir.s;






 if (FUNC_10(&(VAR_10->cur_dirstr))
       == FUNC_10(&(VAR_12->parentdir)) &&
     FUNC_18(VAR_10->cur_dirstr.s, VAR_14) == 0) {
  if (!FUNC_1(
      &(VAR_10->cur_dirent->dir_info->rbtree),
      (struct archive_rb_node *)VAR_12)) {

   VAR_13 = (struct mtree_entry *)FUNC_0(
       &(VAR_10->cur_dirent->dir_info->rbtree),
       VAR_12->basename.s);
   goto same_entry;
  }
  VAR_12->parent = VAR_10->cur_dirent;
  FUNC_17(VAR_10, VAR_12);
  return (VAR_3);
 }

 VAR_11 = VAR_10->root;
 for (;;) {
  VAR_16 = FUNC_12(VAR_9, sizeof(VAR_9), VAR_14);
  if (VAR_16 == 0) {
   VAR_13 = ((void*)0);
   break;
  }
  if (VAR_16 < 0) {
   FUNC_2(&VAR_7->archive,
       VAR_0,
       "A name buffer is too small");
   return (VAR_2);
  }
  if (VAR_16 == 1 && VAR_9[0] == '.' && VAR_11 != ((void*)0) &&
      VAR_11 == VAR_10->root) {
   VAR_14 += VAR_16;
   if (VAR_14[0] == '/')
    VAR_14++;
   continue;
  }

  VAR_13 = FUNC_15(VAR_11, VAR_9);
  if (VAR_13 == ((void*)0) || VAR_14[0] == '\0')
   break;


  if (!VAR_13->dir_info) {

   FUNC_2(&VAR_7->archive,
       VAR_0,
       "`%s' is not directory, we cannot insert `%s' ",
       VAR_13->pathname.s, VAR_12->pathname.s);
   return (VAR_1);
  }
  VAR_14 += VAR_16;
  if (VAR_14[0] == '/')
   VAR_14++;
  VAR_11 = VAR_13;
 }
 if (VAR_13 == ((void*)0)) {



  while (VAR_14[0] != '\0') {
   struct mtree_entry *VAR_18;
   struct archive_string VAR_19;

   FUNC_9(&VAR_19);
   FUNC_11(&VAR_19, VAR_15, VAR_14 - VAR_15 + VAR_16);
   if (VAR_19.s[VAR_19.length-1] == '/') {
    VAR_19.s[VAR_19.length-1] = '\0';
    VAR_19.length--;
   }
   VAR_17 = FUNC_13(VAR_7, VAR_19.s, &VAR_18);
   FUNC_8(&VAR_19);
   if (VAR_17 < VAR_4)
    return (VAR_17);

   if (FUNC_18(VAR_18->pathname.s, ".") == 0) {
    VAR_18->parent = VAR_18;
    VAR_10->root = VAR_18;
   } else {
    FUNC_1(
        &(VAR_11->dir_info->rbtree),
        (struct archive_rb_node *)VAR_18);
    VAR_18->parent = VAR_11;
   }
   FUNC_17(VAR_10, VAR_18);
   VAR_13 = VAR_18;

   VAR_14 += VAR_16;
   if (VAR_14[0] == '/')
    VAR_14++;
   VAR_16 = FUNC_12(VAR_9, sizeof(VAR_9), VAR_14);
   if (VAR_16 < 0) {
    FUNC_8(&VAR_19);
    FUNC_2(&VAR_7->archive,
        VAR_0,
        "A name buffer is too small");
    return (VAR_2);
   }
   VAR_11 = VAR_13;
  }



  VAR_10->cur_dirent = VAR_11;
  FUNC_6(&(VAR_10->cur_dirstr));
  FUNC_7(&(VAR_10->cur_dirstr),
      FUNC_10(&(VAR_11->parentdir)) +
      FUNC_10(&(VAR_11->basename)) + 2);
  if (FUNC_10(&(VAR_11->parentdir)) +
      FUNC_10(&(VAR_11->basename)) == 0)
   VAR_10->cur_dirstr.s[0] = 0;
  else {
   if (FUNC_10(&(VAR_11->parentdir)) > 0) {
    FUNC_5(&(VAR_10->cur_dirstr),
        &(VAR_11->parentdir));
    FUNC_3(
        &(VAR_10->cur_dirstr), '/');
   }
   FUNC_4(&(VAR_10->cur_dirstr),
       &(VAR_11->basename));
  }

  if (!FUNC_1(
      &(VAR_11->dir_info->rbtree),
      (struct archive_rb_node *)VAR_12)) {
   VAR_13 = (struct mtree_entry *)FUNC_0(
       &(VAR_11->dir_info->rbtree), VAR_12->basename.s);
   goto same_entry;
  }
  VAR_12->parent = VAR_11;
  FUNC_17(VAR_10, VAR_12);
  return (VAR_3);
 }

same_entry:




 VAR_17 = FUNC_14(VAR_7, VAR_13, VAR_12);
 if (VAR_17 < VAR_4)
  return (VAR_17);
 if (VAR_13->dir_info)
  VAR_13->dir_info->virtual = 0;
 *VAR_8 = VAR_13;
 FUNC_16(VAR_12);
 return (VAR_4);
}
