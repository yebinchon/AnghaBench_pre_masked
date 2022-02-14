
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_stream {int stream; } ;
struct type {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct type*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct value*) ;
 int VAR_1 ;
 struct value* FUNC_6 (struct type*) ;
 int VAR_2 ;
 int FUNC_7 (struct cleanup*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,struct type*,int *,int *,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 struct cleanup* FUNC_12 (struct ui_stream*) ;
 int FUNC_13 (struct value*) ;
 struct value* FUNC_14 (struct type*,int ) ;
 int VAR_3 ;
 int FUNC_15 (int ,char*,char*,int ) ;
 int FUNC_16 (int ,char*,struct ui_stream*) ;
 int FUNC_17 (int ,char*,int ) ;
 struct ui_stream* FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int VAR_4 ;
 struct value* FUNC_20 (struct type*,int ,int *) ;
 int FUNC_21 (struct value*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_22 (int VAR_5, struct type *VAR_6)
{
  struct cleanup *VAR_7;
  struct ui_stream *VAR_8;
  struct value *VAR_9;

  if (!VAR_5)
    {

      VAR_9 = FUNC_14 (VAR_6, VAR_3);
    }
  else if (FUNC_11 (VAR_2))




    {
      FUNC_9 (FUNC_10 (VAR_2, VAR_6,
     ((void*)0), ((void*)0), ((void*)0))
    == VAR_0);
      FUNC_19 (VAR_4, "Value returned has type: ");
      FUNC_17 (VAR_4, "return-type", FUNC_4 (VAR_6));
      FUNC_19 (VAR_4, ".");
      FUNC_19 (VAR_4, " Cannot determine contents\n");
      return;
    }
  else
    {
      if (FUNC_2 ())
 {
   CORE_ADDR VAR_10 = FUNC_1 (VAR_3);
   if (!VAR_10)
     FUNC_8 ("Function return value unknown.");
   VAR_9 = FUNC_20 (VAR_6, VAR_10, ((void*)0));
 }
      else
 {




   VAR_9 = FUNC_6 (VAR_6);
   FUNC_0 (VAR_6);


   FUNC_3 (VAR_6, VAR_3,
    FUNC_5 (VAR_9));
 }
    }


  VAR_8 = FUNC_18 (VAR_4);
  VAR_7 = FUNC_12 (VAR_8);
  FUNC_19 (VAR_4, "Value returned is ");
  FUNC_15 (VAR_4, "gdb-result-var", "$%d",
      FUNC_13 (VAR_9));
  FUNC_19 (VAR_4, " = ");
  FUNC_21 (VAR_9, VAR_8->stream, 0, VAR_1);
  FUNC_16 (VAR_4, "return-value", VAR_8);
  FUNC_19 (VAR_4, "\n");
  FUNC_7 (VAR_7);
}
