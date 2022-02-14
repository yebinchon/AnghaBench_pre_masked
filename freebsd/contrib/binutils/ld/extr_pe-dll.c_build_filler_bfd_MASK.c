
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * the_bfd; } ;
typedef TYPE_1__ lang_input_statement_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*) ;
 int * VAR_7 ;
 TYPE_1__* FUNC_8 (char*,int ,int *) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static void
FUNC_10 (int VAR_11)
{
  lang_input_statement_type *VAR_12;
  VAR_12 = FUNC_8 ("dll stuff",
         VAR_8,
         ((void*)0));
  VAR_12->the_bfd = VAR_7 = FUNC_0 ("dll stuff", VAR_9);
  if (VAR_7 == ((void*)0)
      || !FUNC_4 (VAR_7,
        FUNC_1 (VAR_9),
        FUNC_2 (VAR_9)))
    {
      FUNC_7 ("%X%P: can not create BFD: %E\n");
      return;
    }

  if (VAR_11)
    {
      VAR_5 = FUNC_3 (VAR_7, ".edata");
      if (VAR_5 == ((void*)0)
   || !FUNC_5 (VAR_7, VAR_5,
         (VAR_1
          | VAR_0
          | VAR_4
          | VAR_3
          | VAR_2)))
 {
   FUNC_7 ("%X%P: can not create .edata section: %E\n");
   return;
 }
      FUNC_6 (VAR_7, VAR_5, VAR_6);
    }

  VAR_10 = FUNC_3 (VAR_7, ".reloc");
  if (VAR_10 == ((void*)0)
      || !FUNC_5 (VAR_7, VAR_10,
     (VAR_1
      | VAR_0
      | VAR_4
      | VAR_3
      | VAR_2)))
    {
      FUNC_7 ("%X%P: can not create .reloc section: %E\n");
      return;
    }

  FUNC_6 (VAR_7, VAR_10, 0);

  FUNC_9 (VAR_12);
}
