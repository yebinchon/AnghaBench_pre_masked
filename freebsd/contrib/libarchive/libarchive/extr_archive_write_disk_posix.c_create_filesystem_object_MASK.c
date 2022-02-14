
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct archive_write_disk {int flags; scalar_t__ filesize; int todo; int deferred; scalar_t__ fd; int mode; int user_umask; scalar_t__ user_uid; int name; int entry; int archive; } ;
struct archive_string {int s; } ;
typedef int mode_t ;






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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,int,char*,int ) ;
 int FUNC_5 (struct archive_string*) ;
 int FUNC_6 (struct archive_string*) ;
 int FUNC_7 (char*,int*,struct archive_string*,int) ;
 int FUNC_8 (char*,int*,struct archive_string*,int) ;
 int VAR_20 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,struct stat*) ;
 scalar_t__ FUNC_11 (char const*,int ) ;
 int FUNC_12 (int ,struct stat*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,int ) ;
 void* FUNC_16 (int ,int,...) ;
 char* FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char const*,int ) ;

__attribute__((used)) static int
FUNC_19(struct archive_write_disk *VAR_21)
{

 const char *VAR_22;
 mode_t VAR_23, VAR_24;
 int VAR_25;

 char *VAR_26;
 struct stat VAR_27;
 struct archive_string VAR_28;
 int VAR_29;



 VAR_22 = FUNC_1(VAR_21->entry);
 if (VAR_22 != ((void*)0)) {

  return (VAR_4);
 }
 VAR_22 = FUNC_3(VAR_21->entry);
 if (VAR_22 != ((void*)0)) {



  return (VAR_4);

 }
 VAR_23 = VAR_21->mode & 07777;





 VAR_24 = VAR_23 & 0777 & ~VAR_21->user_umask;





 if (VAR_21->user_uid != 0 &&
     VAR_21->todo & (VAR_16 | VAR_19)) {
  VAR_24 |= 0200;
 }

 switch (VAR_21->mode & VAR_0) {
 default:


 case 128:
  VAR_21->fd = FUNC_16(VAR_21->name,
      VAR_13 | VAR_9 | VAR_10 | VAR_7 | VAR_8, VAR_24);
  FUNC_0(VAR_21->fd);
  VAR_25 = (VAR_21->fd < 0);
  break;
 case 131:
  return (VAR_3);

 case 132:







  return (VAR_3);

 case 130:
  VAR_24 = (VAR_24 | VAR_6) & VAR_5;
  VAR_25 = FUNC_13(VAR_21->name, VAR_24);
  if (VAR_25 == 0) {

   VAR_21->deferred |= (VAR_21->todo & VAR_18);
   VAR_21->todo &= ~VAR_18;



   if ((VAR_24 != VAR_23)
       || (VAR_21->flags & VAR_1))
    VAR_21->deferred |= (VAR_21->todo & VAR_17);
   VAR_21->todo &= ~VAR_17;
  }
  break;
 case 129:






  return (VAR_3);

 }


 if (VAR_25)
  return (VAR_20);


 if (VAR_24 == VAR_23)
  VAR_21->todo &= ~VAR_17;
 return (0);
}
