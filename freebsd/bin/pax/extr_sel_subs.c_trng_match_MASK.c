
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int st_mtime; int st_ctime; } ;
struct TYPE_8__ {TYPE_1__ sb; } ;
struct TYPE_7__ {int flgs; struct TYPE_7__* fow; int high_time; int low_time; } ;
typedef TYPE_2__ TIME_RNG ;
typedef TYPE_3__ ARCHD ;





 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_0(ARCHD *VAR_3)
{
 TIME_RNG *VAR_4;





 VAR_4 = VAR_2;
 while (VAR_4 != ((void*)0)) {
  switch(VAR_4->flgs & 130) {
  case 130:




   if (((VAR_4->flgs & VAR_1) &&
       (VAR_3->sb.st_mtime < VAR_4->low_time) &&
       (VAR_3->sb.st_ctime < VAR_4->low_time)) ||
       ((VAR_4->flgs & VAR_0) &&
       (VAR_3->sb.st_mtime > VAR_4->high_time) &&
       (VAR_3->sb.st_ctime > VAR_4->high_time))) {
    VAR_4 = VAR_4->fow;
    continue;
   }
   break;
  case 129:



   if (((VAR_4->flgs & VAR_1) &&
       (VAR_3->sb.st_ctime < VAR_4->low_time)) ||
       ((VAR_4->flgs & VAR_0) &&
       (VAR_3->sb.st_ctime > VAR_4->high_time))) {
    VAR_4 = VAR_4->fow;
    continue;
   }
   break;
  case 128:
  default:



   if (((VAR_4->flgs & VAR_1) &&
       (VAR_3->sb.st_mtime < VAR_4->low_time)) ||
       ((VAR_4->flgs & VAR_0) &&
       (VAR_3->sb.st_mtime > VAR_4->high_time))) {
    VAR_4 = VAR_4->fow;
    continue;
   }
   break;
  }
  break;
 }

 if (VAR_4 == ((void*)0))
  return(1);
 return(0);
}
