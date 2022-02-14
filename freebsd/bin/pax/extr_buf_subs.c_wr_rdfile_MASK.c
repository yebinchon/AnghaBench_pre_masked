
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; } ;
typedef long off_t ;
struct TYPE_4__ {long st_size; scalar_t__ st_mtime; } ;
struct TYPE_5__ {int org_name; TYPE_1__ sb; } ;
typedef TYPE_2__ ARCHD ;


 int FUNC_0 (int,long) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int ,char*,int ) ;

int
FUNC_6(ARCHD *VAR_4, int VAR_5, off_t *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 off_t VAR_9 = VAR_4->sb.st_size;
 struct stat VAR_10;




 while (VAR_9 > 0L) {
  VAR_7 = VAR_1 - VAR_2;
  if ((VAR_7 <= 0) && ((VAR_7 = FUNC_1(VAR_0)) < 0)) {
   *VAR_6 = VAR_9;
   return(-1);
  }
  VAR_7 = FUNC_0(VAR_7, VAR_9);
  if ((VAR_8 = FUNC_4(VAR_5, VAR_2, VAR_7)) <= 0)
   break;
  VAR_9 -= VAR_8;
  VAR_2 += VAR_8;
 }





 if (VAR_8 < 0)
  FUNC_5(1, VAR_3, "Read fault on %s", VAR_4->org_name);
 else if (VAR_9 != 0L)
  FUNC_3(1, "File changed size during read %s", VAR_4->org_name);
 else if (FUNC_2(VAR_5, &VAR_10) < 0)
  FUNC_5(1, VAR_3, "Failed stat on %s", VAR_4->org_name);
 else if (VAR_4->sb.st_mtime != VAR_10.st_mtime)
  FUNC_3(1, "File %s was modified during copy to archive",
   VAR_4->org_name);
 *VAR_6 = VAR_9;
 return(0);
}
