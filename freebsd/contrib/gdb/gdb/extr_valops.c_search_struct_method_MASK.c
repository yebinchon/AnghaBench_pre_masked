
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct fn_field {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*) ;
 int VAR_0 ;
 struct type* FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 struct fn_field* FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*,int) ;
 char* FUNC_6 (struct type*,int) ;
 int FUNC_7 (struct fn_field*,int) ;
 scalar_t__ FUNC_8 (struct fn_field*,int) ;
 int FUNC_9 (struct fn_field*,int) ;
 scalar_t__ FUNC_10 (struct fn_field*,int) ;
 scalar_t__ FUNC_11 (struct type*) ;
 int FUNC_12 (struct type*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct type*) ;
 int FUNC_15 (struct type*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct value*) ;
 char* FUNC_18 (struct value*) ;
 int FUNC_19 (struct value*) ;
 scalar_t__ FUNC_20 (struct value*) ;
 scalar_t__ FUNC_21 (struct value*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (struct type*,int,char*,scalar_t__) ;
 int FUNC_24 (struct type*,int) ;
 struct type* FUNC_25 (struct type*) ;
 scalar_t__ FUNC_26 (char*,char*,int ) ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (struct type*,struct type*,int ,scalar_t__,int*,int*) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 scalar_t__ FUNC_30 (char*,char*,int) ;
 scalar_t__ FUNC_31 (scalar_t__,char*,int) ;
 int FUNC_32 (scalar_t__,int ,int ,int ,struct value**) ;
 struct value* FUNC_33 (struct value**,struct fn_field*,int,struct type*,int) ;
 struct value* FUNC_34 (struct value**,struct fn_field*,int,struct type*,int) ;

__attribute__((used)) static struct value *
FUNC_35 (char *VAR_1, struct value **VAR_2,
        struct value **VAR_3, int VAR_4,
        int *VAR_5, struct type *VAR_6)
{
  int VAR_7;
  struct value *VAR_8;
  int VAR_9 = 0;
  char VAR_10[64];

  FUNC_1 (VAR_6);
  for (VAR_7 = FUNC_14 (VAR_6) - 1; VAR_7 >= 0; VAR_7--)
    {
      char *VAR_11 = FUNC_6 (VAR_6, VAR_7);

      if (FUNC_30 (VAR_11, "__", 2) == 0 ||
   FUNC_30 (VAR_11, "op", 2) == 0 ||
   FUNC_30 (VAR_11, "type", 4) == 0)
 {
   if (FUNC_26 (VAR_11, VAR_10, VAR_0))
     VAR_11 = VAR_10;
   else if (FUNC_26 (VAR_11, VAR_10, 0))
     VAR_11 = VAR_10;
 }
      if (VAR_11 && (FUNC_29 (VAR_11, VAR_1) == 0))
 {
   int VAR_12 = FUNC_5 (VAR_6, VAR_7) - 1;
   struct fn_field *VAR_13 = FUNC_4 (VAR_6, VAR_7);
   VAR_9 = 1;

   FUNC_24 (VAR_6, VAR_7);
   if (VAR_12 > 0 && VAR_3 == 0)
     FUNC_27 ("cannot resolve overloaded method `%s': no arguments supplied", VAR_1);
   else if (VAR_12 == 0 && VAR_3 == 0)
     {
       VAR_8 = FUNC_33 (VAR_2, VAR_13, VAR_12, VAR_6, VAR_4);
       if (VAR_8 != ((void*)0))
  return VAR_8;
     }
   else
     while (VAR_12 >= 0)
       {
  if (!FUNC_32 (FUNC_8 (VAR_13, VAR_12),
         FUNC_16 (FUNC_9 (VAR_13, VAR_12)),
         FUNC_13 (FUNC_9 (VAR_13, VAR_12)),
         FUNC_7 (VAR_13, VAR_12), VAR_3))
    {
      if (FUNC_10 (VAR_13, VAR_12))
        return FUNC_34 (VAR_2, VAR_13, VAR_12, VAR_6, VAR_4);
      if (FUNC_8 (VAR_13, VAR_12) && VAR_5)
        *VAR_5 = 1;
      VAR_8 = FUNC_33 (VAR_2, VAR_13, VAR_12, VAR_6, VAR_4);
      if (VAR_8 != ((void*)0))
        return VAR_8;
    }
  VAR_12--;
       }
 }
    }

  for (VAR_7 = FUNC_15 (VAR_6) - 1; VAR_7 >= 0; VAR_7--)
    {
      int VAR_14;

      if (FUNC_0 (VAR_6, VAR_7))
 {
   if (FUNC_11 (VAR_6))
     {


       int VAR_15;
       FUNC_28 (VAR_6, FUNC_2 (VAR_6, VAR_7),
        FUNC_19 (*VAR_2),
        VAR_4 + FUNC_20 (*VAR_2),
        &VAR_14, &VAR_15);
       if (VAR_15 >= 0)
  FUNC_27 ("Virtual base class offset not found in vtable");
     }
   else
     {
       struct type *VAR_16 = FUNC_25 (FUNC_2 (VAR_6, VAR_7));
       char *VAR_17;





       if (VAR_4 < 0 || VAR_4 >= FUNC_12 (VAR_6))
  {
    VAR_17 = (char *) FUNC_22 (FUNC_12 (VAR_16));
    if (FUNC_31 (FUNC_17 (*VAR_2)
       + FUNC_21 (*VAR_2) + VAR_4,
       VAR_17,
       FUNC_12 (VAR_16)) != 0)
      FUNC_27 ("virtual baseclass botch");
  }
       else
  VAR_17 = FUNC_18 (*VAR_2) + VAR_4;

       VAR_14 =
  FUNC_23 (VAR_6, VAR_7, VAR_17,
      FUNC_17 (*VAR_2)
      + FUNC_21 (*VAR_2) + VAR_4);
       if (VAR_14 == -1)
  FUNC_27 ("virtual baseclass botch");
     }
 }
      else
 {
   VAR_14 = FUNC_3 (VAR_6, VAR_7) / 8;
 }
      VAR_8 = FUNC_35 (VAR_1, VAR_2, VAR_3, VAR_14 + VAR_4,
    VAR_5, FUNC_2 (VAR_6, VAR_7));
      if (VAR_8 == (struct value *) - 1)
 {
   VAR_9 = 1;
 }
      else if (VAR_8)
 {


   return VAR_8;
 }
    }
  if (VAR_9)
    return (struct value *) - 1;
  else
    return ((void*)0);
}
