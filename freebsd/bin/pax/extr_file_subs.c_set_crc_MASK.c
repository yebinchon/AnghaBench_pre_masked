
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int tbuf ;
struct stat {scalar_t__ st_mtime; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {scalar_t__ st_size; scalar_t__ st_mtime; scalar_t__ st_blksize; } ;
struct TYPE_5__ {long crc; int org_name; TYPE_1__ sb; } ;
typedef TYPE_2__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (int,int ,char*,int ) ;

int
FUNC_5(ARCHD *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 off_t VAR_7 = 0L;
 u_long VAR_8;
 unsigned long VAR_9 = 0L;
 char VAR_10[VAR_0];
 struct stat VAR_11;

 if (VAR_4 < 0) {



  VAR_3->crc = 0L;
  return(0);
 }

 if ((VAR_8 = (u_long)VAR_3->sb.st_blksize) > (u_long)sizeof(VAR_10))
  VAR_8 = (u_long)sizeof(VAR_10);





 for(;;) {
  if ((VAR_6 = FUNC_3(VAR_4, VAR_10, VAR_8)) <= 0)
   break;
  VAR_7 += VAR_6;
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
   VAR_9 += (VAR_10[VAR_5] & 0xff);
 }





 if (VAR_7 != VAR_3->sb.st_size)
  FUNC_2(1, "File changed size %s", VAR_3->org_name);
 else if (FUNC_0(VAR_4, &VAR_11) < 0)
  FUNC_4(1, VAR_2, "Failed stat on %s", VAR_3->org_name);
 else if (VAR_3->sb.st_mtime != VAR_11.st_mtime)
  FUNC_2(1, "File %s was modified during read", VAR_3->org_name);
 else if (FUNC_1(VAR_4, (off_t)0L, VAR_1) < 0)
  FUNC_4(1, VAR_2, "File rewind failed on: %s", VAR_3->org_name);
 else {
  VAR_3->crc = VAR_9;
  return(0);
 }
 return(-1);
}
