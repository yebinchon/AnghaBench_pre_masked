
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_blksize; scalar_t__ st_mtime; } ;
typedef long off_t ;
struct TYPE_4__ {int st_blocks; long st_size; scalar_t__ st_mtime; } ;
struct TYPE_5__ {char* name; char* org_name; TYPE_1__ sb; } ;
typedef TYPE_2__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int ,int,int*,int*,int,char*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,char*,char*,char*) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int ,char*,char*,...) ;
 int FUNC_6 (int,int ,int) ;

void
FUNC_7(ARCHD *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 off_t VAR_9 = 0L;
 int VAR_10 = 0;
 char *VAR_11 = VAR_5->name;
 int VAR_12 = 0;
 int VAR_13 = 1;
 int VAR_14;
 int VAR_15 = VAR_1;
 struct stat VAR_16;





  if (((off_t)(VAR_5->sb.st_blocks * VAR_0)) >= VAR_5->sb.st_size)
  ++VAR_12;





 if (FUNC_2(VAR_7, &VAR_16) == 0) {
  if (VAR_16.st_blksize > 0)
   VAR_15 = VAR_16.st_blksize;
 } else
  FUNC_5(0,VAR_4,"Unable to obtain block size for file %s",VAR_11);
 VAR_14 = VAR_15;




 for(;;) {
  if ((VAR_8 = FUNC_4(VAR_6, VAR_3, VAR_2)) <= 0)
   break;
  if (VAR_12)
   VAR_10 = FUNC_6(VAR_7, VAR_3, VAR_8);
  else
   VAR_10 = FUNC_1(VAR_7, VAR_3, VAR_8, &VAR_14, &VAR_13, VAR_15, VAR_11);
  if (VAR_10 != VAR_8)
   break;
  VAR_9 += VAR_8;
 }




 if (VAR_10 < 0)
  FUNC_5(1, VAR_4, "Failed write during copy of %s to %s",
   VAR_5->org_name, VAR_5->name);
 else if (VAR_9 != VAR_5->sb.st_size)
  FUNC_3(1, "File %s changed size during copy to %s",
   VAR_5->org_name, VAR_5->name);
 else if (FUNC_2(VAR_6, &VAR_16) < 0)
  FUNC_5(1, VAR_4, "Failed stat of %s", VAR_5->org_name);
 else if (VAR_5->sb.st_mtime != VAR_16.st_mtime)
  FUNC_3(1, "File %s was modified during copy to %s",
   VAR_5->org_name, VAR_5->name);







 if (!VAR_12 && VAR_13 && (VAR_5->sb.st_size > 0L))
  FUNC_0(VAR_7, VAR_11, VAR_13);
 return;
}
