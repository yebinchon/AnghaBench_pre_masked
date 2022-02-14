
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_fd_data {int fd; } ;
struct stat {int st_mode; int st_ino; int st_dev; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct archive*,int ,char*,int) ;
 scalar_t__ FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,int) ;
 int FUNC_7 (struct archive*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int,struct stat*) ;

__attribute__((used)) static int
FUNC_9(struct archive *VAR_3, void *VAR_4)
{
 struct write_fd_data *VAR_5;
 struct stat VAR_6;

 VAR_5 = (struct write_fd_data *)VAR_4;

 if (FUNC_8(VAR_5->fd, &VAR_6) != 0) {
  FUNC_4(VAR_3, VAR_2, "Couldn't stat fd %d", VAR_5->fd);
  return (VAR_0);
 }




 if (FUNC_3(VAR_6.st_mode))
  FUNC_7(VAR_3, VAR_6.st_dev, VAR_6.st_ino);





 if (FUNC_5(VAR_3) < 0) {



  if (FUNC_1(VAR_6.st_mode) || FUNC_0(VAR_6.st_mode) ||
      FUNC_2(VAR_6.st_mode) || (VAR_5->fd == 1))

   FUNC_6(VAR_3, 0);
  else
   FUNC_6(VAR_3, 1);
 }

 return (VAR_1);
}
