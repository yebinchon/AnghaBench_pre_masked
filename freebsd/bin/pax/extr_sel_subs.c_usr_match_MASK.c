
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ uid; struct TYPE_7__* fow; } ;
typedef TYPE_2__ USRT ;
struct TYPE_6__ {scalar_t__ st_uid; } ;
struct TYPE_8__ {TYPE_1__ sb; } ;
typedef TYPE_3__ ARCHD ;


 unsigned int VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int
FUNC_0(ARCHD *VAR_2)
{
 USRT *VAR_3;




 VAR_3 = VAR_1[((unsigned)VAR_2->sb.st_uid) % VAR_0];
 while (VAR_3 != ((void*)0)) {
  if (VAR_3->uid == VAR_2->sb.st_uid)
   return(0);
  VAR_3 = VAR_3->fow;
 }




 return(1);
}
