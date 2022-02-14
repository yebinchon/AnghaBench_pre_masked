
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int full_tty ;
struct TYPE_4__ {int r_tty; } ;
typedef TYPE_1__ CTL_MSG ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,char const*) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;

int
FUNC_3(CTL_MSG *VAR_2, const char *VAR_3)
{
 char VAR_4[32];
 struct stat VAR_5;

 (void)FUNC_1(VAR_4, sizeof(VAR_4),
     "%s%s", VAR_1, VAR_2->r_tty);
 if (FUNC_2(VAR_4, &VAR_5) < 0 || (VAR_5.st_mode&020) == 0)
  return (VAR_0);
 return (FUNC_0(VAR_2->r_tty, VAR_2, VAR_3));
}
