
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* value; } ;
typedef TYPE_1__ OPLIST ;


 int FUNC_0 (int ,char*,char*,char*) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;

int
FUNC_4(void)
{
 OPLIST *VAR_2;

 if (VAR_0 == ((void*)0))
  return(0);



 FUNC_3(1,"These format options are not supported");
 while ((VAR_2 = FUNC_1()) != ((void*)0))
  (void)FUNC_0(VAR_1, "\t%s = %s\n", VAR_2->name, VAR_2->value);
 FUNC_2();
 return(0);
}
