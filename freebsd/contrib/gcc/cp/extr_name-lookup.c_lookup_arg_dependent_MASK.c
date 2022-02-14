
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct arg_lookup {void* functions; void* namespaces; void* classes; void* args; void* name; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct arg_lookup*,void*) ;
 int FUNC_3 (char*,void*) ;
 void* VAR_3 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int ) ;

tree
FUNC_7 (tree VAR_4, tree VAR_5, tree VAR_6)
{
  struct arg_lookup VAR_7;

  FUNC_6 (VAR_1);




  VAR_5 = FUNC_5 (VAR_5);

  VAR_7.name = VAR_4;
  VAR_7.args = VAR_6;
  VAR_7.functions = VAR_5;
  VAR_7.classes = VAR_0;






  VAR_7.namespaces = VAR_0;

  FUNC_2 (&VAR_7, VAR_6);

  VAR_5 = VAR_7.functions;

  if (VAR_5
      && FUNC_1 (VAR_5) != VAR_2
      && !FUNC_4 (VAR_5))
    {
      FUNC_3 ("argument dependent lookup finds %q+D", VAR_5);
      FUNC_3 ("  in call to %qD", VAR_4);
      VAR_5 = VAR_3;
    }

  FUNC_0 (VAR_1, VAR_5);
}
