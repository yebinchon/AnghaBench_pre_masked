
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct frame_id {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct type*,int *,int *) ;
 int FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct type* FUNC_5 (int ) ;
 int * FUNC_6 (struct value*) ;
 scalar_t__ FUNC_7 (struct value*) ;
 struct type* FUNC_8 (struct value*) ;
 struct type* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct frame_id,struct frame_id) ;
 scalar_t__ FUNC_12 (struct frame_id,struct frame_id) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ,struct type*,int *,int *,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 struct symbol* FUNC_19 (int ) ;
 struct frame_id FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 () ;
 struct value* FUNC_23 (char*) ;
 int FUNC_24 (char*,char const*,...) ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 (char*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_28 (struct type*,int ) ;
 struct value* FUNC_29 (struct type*,struct value*) ;
 int FUNC_30 (struct value*) ;

void
FUNC_31 (char *VAR_9, int VAR_10)
{
  struct symbol *VAR_11;
  struct value *VAR_12 = ((void*)0);
  const char *VAR_13 = "";





  if (!VAR_8)
    FUNC_9 ("No selected frame.");
  VAR_11 = FUNC_19 (FUNC_22 ());





  if (VAR_9)
    {
      struct type *VAR_14 = ((void*)0);



      VAR_12 = FUNC_23 (VAR_9);



      if (VAR_11 != ((void*)0))
 VAR_14 = FUNC_5 (FUNC_3 (VAR_11));
      if (VAR_14 == ((void*)0))
 VAR_14 = VAR_5;
      VAR_12 = FUNC_29 (VAR_14, VAR_12);



      if (FUNC_7 (VAR_12))
 FUNC_30 (VAR_12);

      if (FUNC_4 (VAR_14) == VAR_4)





 VAR_12 = ((void*)0);



      else if (!FUNC_16 (VAR_6)
        && (FUNC_4 (VAR_14) == VAR_2
     || FUNC_4 (VAR_14) == VAR_3))
 {




   VAR_13 = "A structure or union return type is not supported by this architecture.\nIf you continue, the return value that you specified will be ignored.\n";


   VAR_12 = ((void*)0);
 }
      else if (FUNC_28 (VAR_14, 0))
 {
   VAR_13 = "The location at which to store the function's return value is unknown.\nIf you continue, the return value that you specified will be ignored.\n";


   VAR_12 = ((void*)0);
 }
    }




  if (VAR_10)
    {
      int VAR_15;
      if (VAR_11 == ((void*)0))
 VAR_15 = FUNC_24 ("%sMake selected stack frame return now? ",
      VAR_13);
      else
 VAR_15 = FUNC_24 ("%sMake %s return now? ", VAR_13,
      FUNC_2 (VAR_11));
      if (!VAR_15)
 FUNC_9 ("Not confirmed");
    }







  {
    struct frame_id VAR_16 = FUNC_20 (FUNC_22 ());
    while (!FUNC_11 (VAR_16, FUNC_20 (FUNC_17 ())))
      {
 if (FUNC_12 (VAR_16, FUNC_20 (FUNC_17 ())))


   FUNC_9 ("Problem while popping stack frames (corrupt stack?)");
 FUNC_13 (FUNC_17 ());
      }
  }



  FUNC_13 (FUNC_17 ());


  if (VAR_12 != ((void*)0))
    {
      struct type *VAR_17 = FUNC_8 (VAR_12);
      if (!FUNC_16 (VAR_6))
 {
   FUNC_1 (VAR_17, VAR_7,
         FUNC_6 (VAR_12));
 }




      else
 {
   FUNC_14 (FUNC_15 (VAR_6, VAR_17,
         ((void*)0), ((void*)0), ((void*)0))
        == VAR_1);
   FUNC_15 (VAR_6, VAR_17,
    VAR_7, ((void*)0) ,
    FUNC_6 (VAR_12) );
 }
    }
  if (FUNC_21 (FUNC_17 ()) == VAR_0)
    FUNC_13 (FUNC_17 ());



  if (VAR_10)
    FUNC_10 ("0", 1);
  else
    FUNC_27 ("0", 0);
}
