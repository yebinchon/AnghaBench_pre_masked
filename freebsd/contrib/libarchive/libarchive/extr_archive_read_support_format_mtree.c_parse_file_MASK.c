
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tv_nsec; } ;
struct TYPE_6__ {int tv_nsec; } ;
struct stat {int st_mode; int st_mtime_n; int st_umtime; int st_mtime_usec; int st_dev; int st_ino; int st_size; int st_nlink; int st_mtime; TYPE_2__ st_mtim; TYPE_1__ st_mtimespec; int st_uid; int st_gid; int st_rdev; } ;
struct mtree_entry {int used; char* name; scalar_t__ full; struct mtree_entry* next_dup; } ;
struct TYPE_8__ {char* s; size_t length; } ;
struct mtree {int fd; scalar_t__ offset; int cur_size; int resolver; TYPE_3__ contents_name; scalar_t__ checkfs; TYPE_3__ current_dir; int rbtree; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (int ,struct archive_entry**,struct archive_entry**) ;
 char const* FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*,int ) ;
 int FUNC_7 (struct archive_entry*,scalar_t__) ;
 int FUNC_8 (struct archive_entry*,int ) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive_entry*,int ,int) ;
 int FUNC_11 (struct archive_entry*,int ) ;
 int FUNC_12 (struct archive_entry*,int) ;
 int FUNC_13 (struct archive_entry*,int ) ;
 int FUNC_14 (struct archive_entry*,int ) ;
 int FUNC_15 (struct archive_entry*,int ) ;
 int FUNC_16 (struct archive_entry*) ;
 int FUNC_17 (int *,scalar_t__,char*,char const*) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 int FUNC_19 (TYPE_3__*) ;
 size_t FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (int) ;
 scalar_t__ VAR_33 ;
 int FUNC_22 (int,struct stat*) ;
 int FUNC_23 (char const*,struct stat*) ;
 int FUNC_24 (char const*,int) ;
 int FUNC_25 (struct archive_read*,struct archive_entry*,struct mtree*,struct mtree_entry*,int*) ;

__attribute__((used)) static int
FUNC_26(struct archive_read *VAR_34, struct archive_entry *VAR_35,
    struct mtree *VAR_36, struct mtree_entry *VAR_37, int *VAR_38)
{
 const char *VAR_39;
 struct stat VAR_40, *VAR_41;
 struct mtree_entry *VAR_42;
 struct archive_entry *VAR_43;
 int VAR_44 = VAR_8, VAR_45, VAR_46;

 VAR_37->used = 1;


 FUNC_7(VAR_35, VAR_5);
 FUNC_14(VAR_35, 0);
 FUNC_19(&VAR_36->contents_name);


 VAR_46 = 0;
 VAR_44 = FUNC_25(VAR_34, VAR_35, VAR_36, VAR_37, &VAR_46);

 if (VAR_37->full) {
  FUNC_2(VAR_35, VAR_37->name);
  VAR_42 = (struct mtree_entry *)FUNC_1(
      &VAR_36->rbtree, VAR_37->name);
  for (; VAR_42; VAR_42 = VAR_42->next_dup) {
   if (VAR_42->full && !VAR_42->used) {

    VAR_42->used = 1;
    VAR_45 = FUNC_25(VAR_34, VAR_35, VAR_36, VAR_42, &VAR_46);
    if (VAR_45 < VAR_44)
     VAR_44 = VAR_45;
   }
  }
 } else {





  size_t VAR_47 = FUNC_20(&VAR_36->current_dir);
  if (VAR_47 > 0)
   FUNC_18(&VAR_36->current_dir, "/");
  FUNC_18(&VAR_36->current_dir, VAR_37->name);
  FUNC_2(VAR_35, VAR_36->current_dir.s);
  if (FUNC_3(VAR_35) != VAR_2)
   VAR_36->current_dir.length = VAR_47;
 }

 if (VAR_36->checkfs) {
  VAR_36->fd = -1;
  if (FUNC_20(&VAR_36->contents_name) > 0)
   VAR_39 = VAR_36->contents_name.s;
  else
   VAR_39 = FUNC_5(VAR_35);

  if (FUNC_3(VAR_35) == VAR_5 ||
    FUNC_3(VAR_35) == VAR_2) {
   VAR_36->fd = FUNC_24(VAR_39, VAR_24 | VAR_22 | VAR_23);
   FUNC_0(VAR_36->fd);
   if (VAR_36->fd == -1 &&
    (VAR_33 != VAR_10 ||
     FUNC_20(&VAR_36->contents_name) > 0)) {
    FUNC_17(&VAR_34->archive, VAR_33,
      "Can't open %s", VAR_39);
    VAR_44 = VAR_9;
   }
  }

  VAR_41 = &VAR_40;
  if (VAR_36->fd >= 0) {
   if (FUNC_22(VAR_36->fd, VAR_41) == -1) {
    FUNC_17(&VAR_34->archive, VAR_33,
      "Could not fstat %s", VAR_39);
    VAR_44 = VAR_9;

    FUNC_21(VAR_36->fd);
    VAR_36->fd = -1;
    VAR_41 = ((void*)0);
   }
  } else if (FUNC_23(VAR_39, VAR_41) == -1) {
   VAR_41 = ((void*)0);
  }





  if (VAR_41 != ((void*)0)) {
   if (((VAR_41->st_mode & VAR_30) == VAR_31 &&
         FUNC_3(VAR_35) == VAR_5)
     ||((VAR_41->st_mode & VAR_30) == VAR_27 &&
         FUNC_3(VAR_35) == VAR_2)




   ) {

   } else {

    if (VAR_36->fd >= 0)
     FUNC_21(VAR_36->fd);
    VAR_36->fd = -1;
    if (VAR_46 & VAR_17) {


     *VAR_38 = 1;
    } else if (VAR_44 == VAR_8) {
     FUNC_17(&VAR_34->archive,
         VAR_7,
         "mtree specification has different"
         " type for %s",
         FUNC_5(VAR_35));
     VAR_44 = VAR_9;
    }
    return (VAR_44);
   }
  }







  if (VAR_41 != ((void*)0)) {
   if (((VAR_46 & VAR_11) == 0 ||
    (VAR_46 & VAR_16) != 0) &&
    (FUNC_3(VAR_35) == VAR_1 ||
     FUNC_3(VAR_35) == VAR_0))
    FUNC_13(VAR_35, VAR_41->st_rdev);
   if ((VAR_46 & (VAR_12 | VAR_13))
    == 0 ||
       (VAR_46 & VAR_16) != 0)
    FUNC_8(VAR_35, VAR_41->st_gid);
   if ((VAR_46 & (VAR_20 | VAR_21))
    == 0 ||
       (VAR_46 & VAR_16) != 0)
    FUNC_15(VAR_35, VAR_41->st_uid);
   if ((VAR_46 & VAR_14) == 0 ||
       (VAR_46 & VAR_16) != 0) {
    FUNC_10(VAR_35, VAR_41->st_mtime, 0);

   }
   if ((VAR_46 & VAR_15) == 0 ||
       (VAR_46 & VAR_16) != 0)
    FUNC_11(VAR_35, VAR_41->st_nlink);
   if ((VAR_46 & VAR_18) == 0 ||
       (VAR_46 & VAR_16) != 0)
    FUNC_12(VAR_35, VAR_41->st_mode);
   if ((VAR_46 & VAR_19) == 0 ||
       (VAR_46 & VAR_16) != 0)
    FUNC_14(VAR_35, VAR_41->st_size);
   FUNC_9(VAR_35, VAR_41->st_ino);
   FUNC_6(VAR_35, VAR_41->st_dev);

   FUNC_4(VAR_36->resolver, &VAR_35,
    &VAR_43);
  } else if (VAR_46 & VAR_17) {





   *VAR_38 = 1;
   return VAR_8;
  }
 }

 VAR_36->cur_size = FUNC_16(VAR_35);
 VAR_36->offset = 0;

 return VAR_44;
}
