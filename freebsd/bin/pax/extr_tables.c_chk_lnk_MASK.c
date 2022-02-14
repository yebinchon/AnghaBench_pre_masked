
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_9__ {int st_nlink; scalar_t__ st_ino; scalar_t__ st_dev; } ;
struct TYPE_11__ {scalar_t__ type; size_t ln_nlen; char* ln_name; TYPE_1__ sb; int name; } ;
struct TYPE_10__ {scalar_t__ ino; scalar_t__ dev; int nlink; struct TYPE_10__* fow; struct TYPE_10__* name; } ;
typedef TYPE_2__ HRDLNK ;
typedef TYPE_3__ ARCHD ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (char*,TYPE_2__*,int) ;
 TYPE_2__** VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 TYPE_2__* FUNC_4 (int ) ;

int
FUNC_5(ARCHD *VAR_6)
{
 HRDLNK *VAR_7;
 HRDLNK **VAR_8;
 u_int VAR_9;

 if (VAR_5 == ((void*)0))
  return(-1);



 if ((VAR_6->type == VAR_1) || (VAR_6->sb.st_nlink <= 1))
  return(0);




 VAR_9 = ((unsigned)VAR_6->sb.st_ino) % VAR_0;
 if ((VAR_7 = VAR_5[VAR_9]) != ((void*)0)) {



  VAR_8 = &(VAR_5[VAR_9]);
  while (VAR_7 != ((void*)0)) {
   if ((VAR_7->ino == VAR_6->sb.st_ino) &&
       (VAR_7->dev == VAR_6->sb.st_dev))
    break;
   VAR_8 = &(VAR_7->fow);
   VAR_7 = VAR_7->fow;
  }

  if (VAR_7 != ((void*)0)) {






   VAR_6->ln_nlen = FUNC_1(VAR_6->ln_name, VAR_7->name,
    sizeof(VAR_6->ln_name) - 1);
   VAR_6->ln_name[VAR_6->ln_nlen] = '\0';
   if (VAR_6->type == VAR_4)
    VAR_6->type = VAR_3;
   else
    VAR_6->type = VAR_2;





   if (--VAR_7->nlink <= 1) {
    *VAR_8 = VAR_7->fow;
    FUNC_0(VAR_7->name);
    FUNC_0(VAR_7);
   }
   return(1);
  }
 }





 if ((VAR_7 = (HRDLNK *)FUNC_2(sizeof(HRDLNK))) != ((void*)0)) {
  if ((VAR_7->name = FUNC_4(VAR_6->name)) != ((void*)0)) {
   VAR_7->dev = VAR_6->sb.st_dev;
   VAR_7->ino = VAR_6->sb.st_ino;
   VAR_7->nlink = VAR_6->sb.st_nlink;
   VAR_7->fow = VAR_5[VAR_9];
   VAR_5[VAR_9] = VAR_7;
   return(0);
  }
  FUNC_0(VAR_7);
 }

 FUNC_3(1, "Hard link table out of memory");
 return(-1);
}
