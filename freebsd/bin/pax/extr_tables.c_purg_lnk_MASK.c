
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_7__ {int st_nlink; scalar_t__ st_ino; scalar_t__ st_dev; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ sb; } ;
struct TYPE_8__ {scalar_t__ ino; scalar_t__ dev; struct TYPE_8__* name; struct TYPE_8__* fow; } ;
typedef TYPE_2__ HRDLNK ;
typedef TYPE_3__ ARCHD ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__** VAR_4 ;

void
FUNC_1(ARCHD *VAR_5)
{
 HRDLNK *VAR_6;
 HRDLNK **VAR_7;
 u_int VAR_8;

 if (VAR_4 == ((void*)0))
  return;



 if ((VAR_5->sb.st_nlink <= 1) || (VAR_5->type == VAR_1) ||
     (VAR_5->type == VAR_2) || (VAR_5->type == VAR_3))
  return;




 VAR_8 = ((unsigned)VAR_5->sb.st_ino) % VAR_0;
 if ((VAR_6 = VAR_4[VAR_8]) == ((void*)0))
  return;





 VAR_7 = &(VAR_4[VAR_8]);
 while (VAR_6 != ((void*)0)) {
  if ((VAR_6->ino == VAR_5->sb.st_ino) &&
      (VAR_6->dev == VAR_5->sb.st_dev))
   break;
  VAR_7 = &(VAR_6->fow);
  VAR_6 = VAR_6->fow;
 }
 if (VAR_6 == ((void*)0))
  return;




 *VAR_7 = VAR_6->fow;
 FUNC_0(VAR_6->name);
 FUNC_0(VAR_6);
}
