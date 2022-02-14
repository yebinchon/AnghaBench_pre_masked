
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* sval; } ;
typedef TYPE_1__ Cell ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (char*,char*,double,int,scalar_t__) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ VAR_5 ;

void FUNC_5(char **VAR_6)
{
 Cell *VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_3("ENVIRON", "", 0.0, VAR_0, VAR_5);
 VAR_1 = FUNC_2(VAR_2);
 VAR_7->sval = (char *) VAR_1;
 for ( ; *VAR_6; VAR_6++) {
  if ((VAR_8 = FUNC_4(*VAR_6, '=')) == ((void*)0))
   continue;
  if( VAR_8 == *VAR_6 )
   continue;
  *VAR_8++ = 0;
  if (FUNC_1(VAR_8))
   FUNC_3(*VAR_6, VAR_8, FUNC_0(VAR_8), VAR_4|VAR_3, VAR_1);
  else
   FUNC_3(*VAR_6, VAR_8, 0.0, VAR_4, VAR_1);
  VAR_8[-1] = '=';
 }
}
