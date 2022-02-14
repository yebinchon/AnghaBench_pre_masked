
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct c_binding {int decl; int id; struct c_binding* prev; } ;
struct TYPE_2__ {struct c_binding* bindings; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int VAR_0 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;


 TYPE_1__* VAR_1 ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;

tree
FUNC_5 (void)
{
  struct c_binding *VAR_3;
  tree VAR_4 = VAR_0;
  int VAR_5 = 0;


  if (!VAR_2)
    {



      FUNC_4 ("%<for%> loop initial declaration used outside C99 mode");
      return VAR_0;
    }
  for (VAR_3 = VAR_1->bindings; VAR_3; VAR_3 = VAR_3->prev)
    {
      tree VAR_6 = VAR_3->id;
      tree VAR_7 = VAR_3->decl;

      if (!VAR_6)
 continue;

      switch (FUNC_2 (VAR_7))
 {
 case 128:
   if (FUNC_3 (VAR_7))
     FUNC_4 ("declaration of static variable %q+D in %<for%> loop "
     "initial declaration", VAR_7);
   else if (FUNC_1 (VAR_7))
     FUNC_4 ("declaration of %<extern%> variable %q+D in %<for%> loop "
     "initial declaration", VAR_7);
   break;

 case 130:
   FUNC_4 ("%<struct %E%> declared in %<for%> loop initial declaration",
   VAR_6);
   break;
 case 129:
   FUNC_4 ("%<union %E%> declared in %<for%> loop initial declaration",
   VAR_6);
   break;
 case 132:
   FUNC_4 ("%<enum %E%> declared in %<for%> loop initial declaration",
   VAR_6);
   break;

  case 131:


 if (FUNC_0 (VAR_7))
  break;

 default:
   FUNC_4 ("declaration of non-variable %q+D in %<for%> loop "
   "initial declaration", VAR_7);
 }

      VAR_5++;
      VAR_4 = VAR_7;
    }

  return VAR_5 == 1 ? VAR_4 : VAR_0;
}
