
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbase {struct vbase* next; struct type* vbasetype; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 struct vbase* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (struct type *VAR_2)
{
  struct vbase *VAR_3;
  int VAR_4;

  if (FUNC_1 (VAR_2) != VAR_0)
    return;

  for (VAR_4 = 0; VAR_4 < FUNC_3 (VAR_2); VAR_4++)
    {

      FUNC_5 (FUNC_2 (VAR_2, VAR_4));


      if (FUNC_0 (VAR_2, VAR_4))
 {
   struct type *VAR_5 = FUNC_2 (VAR_2, VAR_4);


   VAR_3 = VAR_1;
   while (VAR_3)
     {
       if (VAR_3->vbasetype == VAR_5)
  break;
       VAR_3 = VAR_3->next;
     }

   if (!VAR_3)
     {

       VAR_3 = (struct vbase *) FUNC_4 (sizeof (struct vbase));


       VAR_3->vbasetype = VAR_5;
       VAR_3->next = VAR_1;
       VAR_1 = VAR_3;
     }
 }
    }
}
