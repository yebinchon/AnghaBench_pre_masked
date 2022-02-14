
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_write_disk {int todo; scalar_t__ gid; int flags; scalar_t__ uid; scalar_t__ user_uid; scalar_t__ fd; int archive; int name; int mode; TYPE_1__* pst; } ;
struct TYPE_2__ {scalar_t__ st_gid; scalar_t__ st_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int,char*,...) ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct archive_write_disk*) ;
 scalar_t__ FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct archive_write_disk *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_1;
 int VAR_12;
 VAR_10 &= 07777;

 if (VAR_9->todo & VAR_5) {






  if ((VAR_11 = FUNC_5(VAR_9)) != VAR_1)
   return (VAR_11);
  if (VAR_9->pst->st_gid != VAR_9->gid) {
   VAR_10 &= ~ VAR_3;
   if (VAR_9->flags & VAR_0) {







    FUNC_2(&VAR_9->archive, -1,
        "Can't restore SGID bit");
    VAR_11 = VAR_2;
   }
  }

  if (VAR_9->pst->st_uid != VAR_9->uid
      && (VAR_9->todo & VAR_6)) {
   VAR_10 &= ~ VAR_4;
   if (VAR_9->flags & VAR_0) {
    FUNC_2(&VAR_9->archive, -1,
        "Can't restore SUID bit");
    VAR_11 = VAR_2;
   }
  }
  VAR_9->todo &= ~VAR_5;
  VAR_9->todo &= ~VAR_7;
 } else if (VAR_9->todo & VAR_7) {





  if (VAR_9->user_uid != VAR_9->uid) {
   VAR_10 &= ~ VAR_4;
   if (VAR_9->flags & VAR_0) {
    FUNC_2(&VAR_9->archive, -1,
        "Can't make file SUID");
    VAR_11 = VAR_2;
   }
  }
  VAR_9->todo &= ~VAR_7;
 }

 if (FUNC_1(VAR_9->mode)) {
 } else if (!FUNC_0(VAR_9->mode)) {
  VAR_12 = FUNC_3(VAR_9->name, VAR_10);

  if (VAR_12 != 0) {
   FUNC_2(&VAR_9->archive, VAR_8,
       "Can't set permissions to 0%o", (int)VAR_10);
   VAR_11 = VAR_2;
  }
 }
 return (VAR_11);
}
