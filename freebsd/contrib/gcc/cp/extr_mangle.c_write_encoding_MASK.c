
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 scalar_t__ FUNC_6 (int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (char*,int const) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int const) ;
 int FUNC_9 (int const) ;
 scalar_t__ FUNC_10 (int const,int *) ;
 int FUNC_11 (int const) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int const,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17 (const tree VAR_2)
{
  FUNC_7 ("encoding", VAR_2);

  if (FUNC_4 (VAR_2) && FUNC_3 (VAR_2))
    {


      if (FUNC_6 (VAR_2))
 FUNC_15 (VAR_2, 0);
      else
 FUNC_16 (FUNC_5 (VAR_2));
      return;
    }

  FUNC_15 (VAR_2, 0);
  if (FUNC_8 (VAR_2) == VAR_0)
    {
      tree VAR_3;
      tree VAR_4;

      if (FUNC_10 (VAR_2, ((void*)0)))
 {
   FUNC_13 ();
   VAR_3 = FUNC_11 (VAR_2);
   FUNC_12 ();




   VAR_4 = VAR_1;
 }
      else
 {
   VAR_3 = FUNC_9 (VAR_2);
   VAR_4 = VAR_2;
 }

      FUNC_14 (VAR_3,
    (!FUNC_0 (VAR_2)
     && !FUNC_2 (VAR_2)
     && !FUNC_1 (VAR_2)
     && FUNC_10 (VAR_2, ((void*)0))),
    VAR_4);
    }
}
