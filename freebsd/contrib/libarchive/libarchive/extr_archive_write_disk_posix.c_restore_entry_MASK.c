
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * error; } ;
struct TYPE_5__ {scalar_t__ st_mode; scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct archive_write_disk {int flags; scalar_t__ mode; int todo; int deferred; int * pst; int * name; TYPE_4__ archive; TYPE_1__ st; scalar_t__ skip_file_ino; scalar_t__ skip_file_dev; scalar_t__ skip_file_set; int entry; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;


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
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int,char*,...) ;
 int FUNC_4 (struct archive_write_disk*) ;
 int FUNC_5 (struct archive_write_disk*) ;
 int FUNC_6 (struct archive_write_disk*,int *) ;
 int VAR_13 ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct archive_write_disk *VAR_14)
{
 int VAR_15 = VAR_6, VAR_16;

 if (VAR_14->flags & VAR_4 && !FUNC_0(VAR_14->mode)) {
  if (VAR_14->flags & VAR_0)
   (void)FUNC_4(VAR_14);
  if (FUNC_11(VAR_14->name) == 0) {

   VAR_14->pst = ((void*)0);
  } else if (VAR_13 == VAR_9) {

  } else if (FUNC_10(VAR_14->name) == 0) {

   VAR_14->pst = ((void*)0);
  } else {

   FUNC_3(&VAR_14->archive, VAR_13,
       "Could not unlink");
   return(VAR_5);
  }
 }


 VAR_16 = FUNC_5(VAR_14);

 if ((VAR_16 == VAR_10 || VAR_16 == VAR_9)
     && !(VAR_14->flags & VAR_1)) {

  FUNC_6(VAR_14, VAR_14->name);

  VAR_16 = FUNC_5(VAR_14);
 }

 if ((VAR_16 == VAR_9) && (FUNC_1(VAR_14->entry) != ((void*)0))) {
  FUNC_3(&VAR_14->archive, VAR_16,
      "Hard-link target '%s' does not exist.",
      FUNC_1(VAR_14->entry));
  return (VAR_5);
 }

 if ((VAR_16 == VAR_8 || VAR_16 == VAR_7)
     && (VAR_14->flags & VAR_2)) {

  if (FUNC_0(VAR_14->mode)) {

   VAR_14->todo = 0;
  }
  FUNC_2(VAR_14->entry);
  return (VAR_6);
 }
 if (VAR_16 == VAR_8) {

  if (FUNC_10(VAR_14->name) != 0) {
   FUNC_3(&VAR_14->archive, VAR_13,
       "Can't remove already-existing dir");
   return (VAR_5);
  }
  VAR_14->pst = ((void*)0);

  VAR_16 = FUNC_5(VAR_14);
 } else if (VAR_16 == VAR_7) {




  int VAR_17 = 0;





  if (FUNC_0(VAR_14->mode))
   VAR_17 = FUNC_7(VAR_14->name, &VAR_14->st);




  if (VAR_17 != 0 || !FUNC_0(VAR_14->mode))
   VAR_17 = FUNC_8(VAR_14->name, &VAR_14->st);
  if (VAR_17 != 0) {
   FUNC_3(&VAR_14->archive, VAR_13,
       "Can't stat existing object");
   return (VAR_5);
  }




  if ((VAR_14->flags & VAR_3)
      && !FUNC_0(VAR_14->st.st_mode)) {
   if (!FUNC_9(&(VAR_14->st), VAR_14->entry)) {
    FUNC_2(VAR_14->entry);
    return (VAR_6);
   }
  }


  if (VAR_14->skip_file_set &&
      VAR_14->st.st_dev == (dev_t)VAR_14->skip_file_dev &&
      VAR_14->st.st_ino == (ino_t)VAR_14->skip_file_ino) {
   FUNC_3(&VAR_14->archive, 0,
       "Refusing to overwrite archive");
   return (VAR_5);
  }

  if (!FUNC_0(VAR_14->st.st_mode)) {

   if (VAR_14->flags & VAR_0)
    (void)FUNC_4(VAR_14);
   if (FUNC_11(VAR_14->name) != 0) {
    FUNC_3(&VAR_14->archive, VAR_13,
        "Can't unlink already-existing object");
    return (VAR_5);
   }
   VAR_14->pst = ((void*)0);

   VAR_16 = FUNC_5(VAR_14);
  } else if (!FUNC_0(VAR_14->mode)) {

   if (VAR_14->flags & VAR_0)
    (void)FUNC_4(VAR_14);
   if (FUNC_10(VAR_14->name) != 0) {
    FUNC_3(&VAR_14->archive, VAR_13,
        "Can't replace existing directory with non-directory");
    return (VAR_5);
   }

   VAR_16 = FUNC_5(VAR_14);
  } else {







   if ((VAR_14->mode != VAR_14->st.st_mode)
       && (VAR_14->todo & VAR_12))
    VAR_14->deferred |= (VAR_14->todo & VAR_11);

   VAR_16 = 0;
  }
 }

 if (VAR_16) {

  if ((&VAR_14->archive)->error == ((void*)0))
   FUNC_3(&VAR_14->archive, VAR_16, "Can't create '%s'",
       VAR_14->name);
  return (VAR_5);
 }

 VAR_14->pst = ((void*)0);
 return (VAR_15);
}
