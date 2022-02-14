
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* pstr; char* chdname; struct TYPE_4__* fow; scalar_t__ flgs; int plen; int * pend; } ;
typedef TYPE_1__ PATTERN ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(char *VAR_2, char *VAR_3)
{
 PATTERN *VAR_4;




 if ((VAR_2 == ((void*)0)) || (*VAR_2 == '\0')) {
  FUNC_1(1, "Empty pattern string");
  return(-1);
 }






 if ((VAR_4 = (PATTERN *)FUNC_0(sizeof(PATTERN))) == ((void*)0)) {
  FUNC_1(1, "Unable to allocate memory for pattern string");
  return(-1);
 }

 VAR_4->pstr = VAR_2;
 VAR_4->pend = ((void*)0);
 VAR_4->plen = FUNC_2(VAR_2);
 VAR_4->fow = ((void*)0);
 VAR_4->flgs = 0;
 VAR_4->chdname = VAR_3;

 if (VAR_0 == ((void*)0)) {
  VAR_1 = VAR_0 = VAR_4;
  return(0);
 }
 VAR_1->fow = VAR_4;
 VAR_1 = VAR_4;
 return(0);
}
