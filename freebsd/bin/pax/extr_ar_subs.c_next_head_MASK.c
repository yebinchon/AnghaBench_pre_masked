
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hsz; scalar_t__ (* rd ) (int *,char*) ;int (* trail_tar ) (char*,int,int*) ;scalar_t__ (* trail_cpio ) (int *) ;scalar_t__ inhead; } ;
typedef int ARCHD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int,int*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(ARCHD *VAR_5)
{
 int VAR_6;
 char *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 1;





 VAR_8 = VAR_10 = VAR_3->hsz;
 VAR_7 = VAR_4;
 VAR_9 = VAR_10 - 1;
 for(;;) {




  for (;;) {
   if ((VAR_6 = FUNC_4(VAR_7, VAR_8)) == VAR_8)
    break;
   if (VAR_13 && VAR_6 == 0)
    return(-1);
   VAR_13 = 0;





   if ((VAR_6 == 0) || (FUNC_3() < 0)) {
    FUNC_2(1,"Premature end of file on archive read");
    return(-1);
   }
   if (!VAR_11) {
    if (VAR_1 == VAR_0) {
     FUNC_2(1,
       "Archive I/O error, cannot continue");
     return(-1);
    }
    FUNC_2(1,"Archive I/O error. Trying to recover.");
    ++VAR_11;
   }




   VAR_8 = VAR_10;
   VAR_7 = VAR_4;
  }
  if ((*VAR_3->rd)(VAR_5, VAR_4) == 0)
   break;

  if (!VAR_3->inhead) {



   if ((VAR_6 = (*VAR_3->trail_tar)(VAR_4,VAR_11,&VAR_12)) == 0){



    FUNC_0();
    return(-1);
   }

   if (VAR_6 == 1) {






    VAR_8 = VAR_10;
    VAR_7 = VAR_4;
    continue;
   }
  }
  if (!VAR_11) {
   if (VAR_1 == VAR_0) {
    FUNC_2(1,"Unable to append, archive header flaw");
    return(-1);
   }
   FUNC_2(1,"Invalid header, starting valid header search.");
   ++VAR_11;
  }
  FUNC_1(VAR_4, VAR_4+1, VAR_9);
  VAR_8 = 1;
  VAR_7 = VAR_4 + VAR_9;
 }





 if (VAR_3->inhead && ((*VAR_3->trail_cpio)(VAR_5) == 0)) {



  FUNC_0();
  return(-1);
 }

 ++VAR_2;
 return(0);
}
