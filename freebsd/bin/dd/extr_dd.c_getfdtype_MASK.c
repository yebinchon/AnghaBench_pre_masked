
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int off_t ;
struct TYPE_3__ {int flags; int fd; int name; } ;
typedef TYPE_1__ IO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(IO *VAR_12)
{
 struct stat VAR_13;
 int VAR_14;

 if (FUNC_4(VAR_12->fd, &VAR_13) == -1)
  FUNC_3(1, "%s", VAR_12->name);
 if (FUNC_2(VAR_13.st_mode))
  VAR_12->flags |= VAR_9;
 if (FUNC_1(VAR_13.st_mode) || FUNC_0(VAR_13.st_mode)) {
  if (FUNC_5(VAR_12->fd, VAR_4, &VAR_14) == -1) {
   FUNC_3(1, "%s", VAR_12->name);
  } else {
   if (VAR_14 & VAR_2)
    VAR_12->flags |= VAR_8;
   else if (VAR_14 & (VAR_0 | VAR_1))
    VAR_12->flags |= VAR_7;
   if (FUNC_1(VAR_13.st_mode) && (VAR_14 & VAR_2) == 0)
    VAR_12->flags |= VAR_5;
  }
  return;
 }
 VAR_11 = 0;
 if (FUNC_6(VAR_12->fd, (off_t)0, VAR_10) == -1 && VAR_11 == VAR_3)
  VAR_12->flags |= VAR_6;
 else
  VAR_12->flags |= VAR_7;
}
