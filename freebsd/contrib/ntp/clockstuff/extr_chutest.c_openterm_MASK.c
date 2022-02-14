
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgttyb {int sg_flags; scalar_t__ sg_kill; scalar_t__ sg_erase; int sg_ospeed; int sg_ispeed; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,char*) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

int
FUNC_4(
 char *VAR_14
 )
{
 int VAR_15;
 struct sgttyb VAR_16;

 if (VAR_11)
     (void) FUNC_1(VAR_12, "Doing open...");
 if ((VAR_15 = FUNC_3(VAR_14, VAR_6, 0777)) < 0)
     FUNC_0("open(%s)", VAR_14, "");
 if (VAR_11)
     (void) FUNC_1(VAR_12, "open okay\n");

 if (VAR_11)
     (void) FUNC_1(VAR_12, "Setting exclusive use...");
 if (FUNC_2(VAR_15, VAR_8, (char *)0) < 0)
     FUNC_0("ioctl(TIOCEXCL)", "", "");
 if (VAR_11)
     (void) FUNC_1(VAR_12, "done\n");

 VAR_16.sg_ispeed = VAR_16.sg_ospeed = VAR_0;
 VAR_16.sg_erase = VAR_16.sg_kill = 0;
 VAR_16.sg_flags = VAR_2|VAR_5|VAR_7;
 if (VAR_11)
     (void) FUNC_1(VAR_12, "Setting baud rate et al...");
 if (FUNC_2(VAR_15, VAR_10, (char *)&VAR_16) < 0)
     FUNC_0("ioctl(TIOCSETP, raw)", "", "");
 if (VAR_11)
     (void) FUNC_1(VAR_12, "done\n");
 return VAR_15;
}
