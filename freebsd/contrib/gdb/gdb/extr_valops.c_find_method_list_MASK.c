
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct fn_field {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 struct fn_field* FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*,int) ;
 char* FUNC_6 (struct type*,int) ;
 scalar_t__ FUNC_7 (struct type*) ;
 int FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*) ;
 scalar_t__ FUNC_10 (struct value*) ;
 scalar_t__ FUNC_11 (struct value*) ;
 int FUNC_12 (struct value*) ;
 scalar_t__ FUNC_13 (struct value*) ;
 int FUNC_14 (struct value*) ;
 int FUNC_15 (struct type*,int,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct type*,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct type*,struct type*,int ,scalar_t__,int*,int*) ;
 scalar_t__ FUNC_19 (char*,char*) ;

__attribute__((used)) static struct fn_field *
FUNC_20 (struct value **VAR_0, char *VAR_1, int VAR_2,
    struct type *VAR_3, int *VAR_4,
    struct type **VAR_5, int *VAR_6)
{
  int VAR_7;
  struct fn_field *VAR_8;
  FUNC_1 (VAR_3);

  *VAR_4 = 0;


  for (VAR_7 = FUNC_8 (VAR_3) - 1; VAR_7 >= 0; VAR_7--)
    {

      char *VAR_9 = FUNC_6 (VAR_3, VAR_7);
      if (VAR_9 && (FUNC_19 (VAR_9, VAR_1) == 0))
 {
   int VAR_10 = FUNC_5 (VAR_3, VAR_7);
   struct fn_field *VAR_11 = FUNC_4 (VAR_3, VAR_7);

   *VAR_4 = VAR_10;
   *VAR_5 = VAR_3;
   *VAR_6 = VAR_2;


   FUNC_16 (VAR_3, VAR_7);

   return VAR_11;
 }
    }


  for (VAR_7 = FUNC_9 (VAR_3) - 1; VAR_7 >= 0; VAR_7--)
    {
      int VAR_12;
      if (FUNC_0 (VAR_3, VAR_7))
 {
   if (FUNC_7 (VAR_3))
     {


       int VAR_13;
       FUNC_18 (VAR_3, FUNC_2 (VAR_3, VAR_7),
        FUNC_12 (*VAR_0),
        VAR_2 + FUNC_13 (*VAR_0),
        &VAR_12, &VAR_13);
       if (VAR_13 >= 0)
  FUNC_17 ("Virtual base class offset not found in vtable");
     }
   else
     {

       VAR_12 = FUNC_14 (*VAR_0) + VAR_2;
       VAR_12 =
  FUNC_15 (VAR_3, VAR_7,
      FUNC_11 (*VAR_0) + VAR_12,
      FUNC_10 (*VAR_0) + VAR_12);
       if (VAR_12 == -1)
  FUNC_17 ("virtual baseclass botch");
     }
 }
      else

 {
   VAR_12 = FUNC_3 (VAR_3, VAR_7) / 8;
 }
      VAR_8 = FUNC_20 (VAR_0, VAR_1, VAR_12 + VAR_2,
       FUNC_2 (VAR_3, VAR_7), VAR_4, VAR_5,
       VAR_6);
      if (VAR_8)
 return VAR_8;
    }
  return ((void*)0);
}
