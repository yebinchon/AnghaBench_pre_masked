
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dfamust {int must; scalar_t__ exact; struct dfamust* next; } ;
struct TYPE_2__ {struct dfamust* musts; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct dfamust const *VAR_3;
  char const *VAR_4;

  if (VAR_0.musts)
    {
      FUNC_2 ();



      for (VAR_3 = VAR_0.musts; VAR_3; VAR_3 = VAR_3->next)
 {
   if (!VAR_3->exact)
     continue;
   ++VAR_2;
   if ((VAR_4 = FUNC_1 (VAR_1, VAR_3->must, FUNC_4 (VAR_3->must))) != 0)
     FUNC_0 (2, 0, VAR_4);
 }


      for (VAR_3 = VAR_0.musts; VAR_3; VAR_3 = VAR_3->next)
 {
   if (VAR_3->exact)
     continue;
   if ((VAR_4 = FUNC_1 (VAR_1, VAR_3->must, FUNC_4 (VAR_3->must))) != 0)
     FUNC_0 (2, 0, VAR_4);
 }
      if ((VAR_4 = FUNC_3 (VAR_1)) != 0)
 FUNC_0 (2, 0, VAR_4);
    }
}
