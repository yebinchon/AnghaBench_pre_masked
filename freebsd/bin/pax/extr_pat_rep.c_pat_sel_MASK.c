
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; TYPE_1__* pat; int name; } ;
struct TYPE_6__ {int flgs; char* pend; char* pstr; int plen; struct TYPE_6__* fow; } ;
typedef TYPE_1__ PATTERN ;
typedef TYPE_2__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(ARCHD *VAR_6)
{
 PATTERN *VAR_7;
 PATTERN **VAR_8;
 int VAR_9;




 if ((VAR_5 == ((void*)0)) || ((VAR_7 = VAR_6->pat) == ((void*)0)))
  return(0);





 if (!VAR_4) {
  VAR_7->flgs |= VAR_1;
  return(0);
 }
 if (VAR_7->flgs & VAR_0)
  return(0);

 if (!VAR_3 && ((VAR_7->pend != ((void*)0)) || (VAR_6->type == VAR_2))) {
  if (VAR_7->pend != ((void*)0))
   *VAR_7->pend = '\0';

  if ((VAR_7->pstr = FUNC_2(VAR_6->name)) == ((void*)0)) {
   FUNC_1(1, "Pattern select out of memory");
   if (VAR_7->pend != ((void*)0))
    *VAR_7->pend = '/';
   VAR_7->pend = ((void*)0);
   return(-1);
  }




  if (VAR_7->pend != ((void*)0)) {
   *VAR_7->pend = '/';
   VAR_7->pend = ((void*)0);
  }
  VAR_7->plen = FUNC_3(VAR_7->pstr);




  VAR_9 = VAR_7->plen - 1;
  if (*(VAR_7->pstr + VAR_9) == '/') {
   *(VAR_7->pstr + VAR_9) = '\0';
   VAR_7->plen = VAR_9;
  }
  VAR_7->flgs = VAR_0 | VAR_1;
  VAR_6->pat = VAR_7;
  return(0);
 }
 VAR_7 = VAR_5;
 VAR_8 = &VAR_5;
 while ((VAR_7 != ((void*)0)) && (VAR_7 != VAR_6->pat)) {
  VAR_8 = &(VAR_7->fow);
  VAR_7 = VAR_7->fow;
 }

 if (VAR_7 == ((void*)0)) {



  FUNC_1(1, "Pattern list inconsistent");
  return(-1);
 }
 *VAR_8 = VAR_7->fow;
 FUNC_0(VAR_7);
 VAR_6->pat = ((void*)0);
 return(0);
}
