
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* link; int * name; } ;
typedef int Char ;
typedef TYPE_1__ Cell ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static
Cell *FUNC_4 ( Cell *VAR_0, Char *VAR_1 )
{
   if (VAR_0 == ((void*)0)) {
      Cell *VAR_2 = FUNC_0();
      VAR_2->name = (Char*) FUNC_1 ( 5 + FUNC_3(VAR_1) );
      FUNC_2 ( VAR_2->name, VAR_1 );
      return VAR_2;
   } else {
      Cell *VAR_3 = VAR_0;
      while (VAR_3->link != ((void*)0)) VAR_3 = VAR_3->link;
      VAR_3->link = FUNC_4 ( VAR_3->link, VAR_1 );
      return VAR_0;
   }
}
