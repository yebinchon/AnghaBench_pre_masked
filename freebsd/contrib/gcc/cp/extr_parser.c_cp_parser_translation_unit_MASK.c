
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int implicit_extern_c; int * lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int VAR_5 ;
 void* FUNC_9 (int *) ;
 int FUNC_10 () ;

__attribute__((used)) static bool
FUNC_11 (cp_parser* VAR_6)
{


  static void *VAR_7;

  bool VAR_8;


  if (!VAR_3)
    {
      FUNC_6 (&VAR_4);

      VAR_3 = FUNC_7 (VAR_2);

      VAR_5 = FUNC_8 (((void*)0), ((void*)0), VAR_1);

      VAR_7 = FUNC_9 (&VAR_4);
    }

  FUNC_2 (VAR_6);


  if (FUNC_1 (VAR_6->lexer, VAR_0))
    {

      FUNC_0 (VAR_6->lexer);
      VAR_6->lexer = ((void*)0);



      if (VAR_6->implicit_extern_c)
 {
   FUNC_10 ();
   VAR_6->implicit_extern_c = 0;
 }


      FUNC_4 ();

      VAR_8 = 1;
    }
  else
    {
      FUNC_3 (VAR_6, "expected declaration");
      VAR_8 = 0;
    }


  FUNC_5 (FUNC_9 (&VAR_4)
       == VAR_7);


  return VAR_8;
}
