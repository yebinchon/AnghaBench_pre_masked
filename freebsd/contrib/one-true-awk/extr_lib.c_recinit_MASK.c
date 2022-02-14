
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* sval; int nval; } ;
typedef TYPE_1__ Cell ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (char*) ;

void FUNC_4(unsigned int VAR_5)
{
 if ( (VAR_4 = (char *) FUNC_2(VAR_5)) == ((void*)0)
   || (VAR_1 = (char *) FUNC_2(VAR_5+1)) == ((void*)0)
   || (VAR_2 = (Cell **) FUNC_2((VAR_3+2) * sizeof(Cell *))) == ((void*)0)
   || (VAR_2[0] = (Cell *) FUNC_2(sizeof(Cell))) == ((void*)0) )
  FUNC_0("out of space for $0 and fields");
 *VAR_4 = '\0';
 *VAR_2[0] = VAR_0;
 VAR_2[0]->sval = VAR_4;
 VAR_2[0]->nval = FUNC_3("0");
 FUNC_1(1, VAR_3);
}
