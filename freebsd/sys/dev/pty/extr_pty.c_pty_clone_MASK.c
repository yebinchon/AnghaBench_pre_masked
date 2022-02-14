
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct make_dev_args {int mda_flags; int mda_mode; int mda_gid; int mda_uid; int * mda_devsw; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct make_dev_args*) ;
 int FUNC_2 (struct make_dev_args*,struct cdev**,char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, struct ucred *VAR_6, char *VAR_7, int VAR_8,
    struct cdev **VAR_9)
{
 struct make_dev_args VAR_10;
 int VAR_11;


 if (*VAR_9 != ((void*)0))
  return;


 if (VAR_8 != 5 || FUNC_0(VAR_7, "pty", 3) != 0)
  return;


 if (!(VAR_7[3] >= 'l' && VAR_7[3] <= 's') &&
     !(VAR_7[3] >= 'L' && VAR_7[3] <= 'S'))
  return;


 if (!(VAR_7[4] >= '0' && VAR_7[4] <= '9') &&
     !(VAR_7[4] >= 'a' && VAR_7[4] <= 'v'))
  return;


 FUNC_1(&VAR_10);
 VAR_10.mda_flags = VAR_1 | VAR_2;
 VAR_10.mda_devsw = &VAR_4;
 VAR_10.mda_uid = VAR_3;
 VAR_10.mda_gid = VAR_0;
 VAR_10.mda_mode = 0666;
 VAR_11 = FUNC_2(&VAR_10, VAR_9, "%s", VAR_7);
 if (VAR_11 != 0)
  *VAR_9 = ((void*)0);
}
