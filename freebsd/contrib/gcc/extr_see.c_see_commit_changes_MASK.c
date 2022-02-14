
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_pre_extension_expr {int dummy; } ;
typedef int * PTR ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (struct see_pre_extension_expr**) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct see_pre_extension_expr**) ;
 int FUNC_7 (scalar_t__,int ,int *) ;
 struct see_pre_extension_expr** FUNC_8 (size_t,int) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  struct see_pre_extension_expr **VAR_8;
  size_t VAR_9 = FUNC_4 (VAR_7);
  bool VAR_10 = 0;
  int VAR_11;

  VAR_8 = FUNC_8 (VAR_9,
           sizeof (struct see_pre_extension_expr *));

  if (VAR_1)
    FUNC_2 (VAR_1,
      "* Phase 4: Commit changes to the insn stream.  *\n");


  FUNC_5 (VAR_7, VAR_5, (PTR) VAR_8);



  FUNC_5 (VAR_7, VAR_6, ((void*)0));



  FUNC_1 (VAR_0);
  VAR_0 = ((void*)0);


  VAR_10 = FUNC_6 (VAR_8);

  if (VAR_10)
    FUNC_0 ();


  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
    {
      if (VAR_3[VAR_11])
 {


   FUNC_7 (VAR_3[VAR_11],
         VAR_4, ((void*)0));
 }
    }

  FUNC_3 (VAR_8);
}
