
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int off_t ;
typedef int dblk ;
struct TYPE_2__ {int nlen; int atime; int mtime; int mode; scalar_t__ frc_mode; int npos; } ;
typedef TYPE_1__ DIRDATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(void)
{
 char VAR_8[VAR_0+1];
 DIRDATA VAR_9;
 u_long VAR_10;

 if (VAR_4 < 0)
  return;



 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {




  if (FUNC_1(VAR_4, -((off_t)sizeof(VAR_9)), VAR_1) < 0)
   break;
  if (FUNC_3(VAR_4,(char *)&VAR_9, sizeof(VAR_9)) != sizeof(VAR_9))
   break;
  if (FUNC_1(VAR_4, VAR_9.npos, VAR_2) < 0)
   break;
  if (FUNC_3(VAR_4, VAR_8, VAR_9.nlen) != VAR_9.nlen)
   break;
  if (FUNC_1(VAR_4, VAR_9.npos, VAR_2) < 0)
   break;





  if (VAR_6 || VAR_9.frc_mode)
   FUNC_5(VAR_8, VAR_9.mode);
  if (VAR_5 || VAR_7)
   FUNC_4(VAR_8, VAR_9.mtime, VAR_9.atime, 0);
 }

 (void)FUNC_0(VAR_4);
 VAR_4 = -1;
 if (VAR_10 != VAR_3)
  FUNC_2(1,"Unable to set mode and times for created directories");
 return;
}
