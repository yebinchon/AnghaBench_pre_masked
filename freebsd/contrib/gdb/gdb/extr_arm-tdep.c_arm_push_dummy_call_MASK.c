
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct stack_item {scalar_t__ len; int data; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 char* FUNC_5 (struct value*) ;
 int FUNC_6 (struct value*) ;
 char* FUNC_7 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int) ;
 struct type* FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ,char*,int,int,...) ;
 int VAR_8 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;
 struct stack_item* FUNC_14 (struct stack_item*) ;
 struct stack_item* FUNC_15 (struct stack_item*,char*,int) ;
 int FUNC_16 (struct regcache*,int,int) ;
 int FUNC_17 (char*,int,int ) ;
 int FUNC_18 (int,int ,scalar_t__) ;

__attribute__((used)) static CORE_ADDR
FUNC_19 (struct gdbarch *VAR_9, CORE_ADDR VAR_10,
       struct regcache *VAR_11, CORE_ADDR VAR_12, int VAR_13,
       struct value **VAR_14, CORE_ADDR VAR_15, int VAR_16,
       CORE_ADDR VAR_17)
{
  int VAR_18;
  int VAR_19;
  int VAR_20;
  struct stack_item *VAR_21 = ((void*)0);




  FUNC_16 (VAR_11, VAR_2, VAR_12);




  VAR_20 = 0;

  VAR_19 = VAR_0;
  VAR_20 = 0;




  VAR_15 &= ~(CORE_ADDR)(2 * VAR_4 - 1);



  if (VAR_16)
    {
      if (VAR_7)
 FUNC_11 (VAR_8, "struct return in %s = 0x%s\n",
       FUNC_1 (VAR_19), FUNC_12 (VAR_17));
      FUNC_16 (VAR_11, VAR_19, VAR_17);
      VAR_19++;
    }

  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
    {
      int VAR_22;
      struct type *VAR_23;
      struct type *VAR_24;
      enum type_code VAR_25;
      char *VAR_26;

      VAR_23 = FUNC_9 (FUNC_6 (VAR_14[VAR_18]));
      VAR_22 = FUNC_3 (VAR_23);
      VAR_24 = FUNC_4 (VAR_23);
      VAR_25 = FUNC_2 (VAR_23);
      VAR_26 = FUNC_5 (VAR_14[VAR_18]);




      if (VAR_6 == VAR_25
   && VAR_24 != ((void*)0)
   && VAR_5 == FUNC_2 (VAR_24))
 {
   CORE_ADDR VAR_27 = FUNC_10 (VAR_26, VAR_22);
   if (FUNC_8 (VAR_27))
     {
       VAR_26 = FUNC_7 (VAR_22);
       FUNC_17 (VAR_26, VAR_22, FUNC_0 (VAR_27));
     }
 }




      while (VAR_22 > 0)
 {
   int VAR_28 = VAR_22 < VAR_4 ? VAR_22 : VAR_4;

   if (VAR_19 <= VAR_1)
     {


       CORE_ADDR VAR_29 = FUNC_10 (VAR_26, VAR_28);
       if (VAR_7)
  FUNC_11 (VAR_8, "arg %d in %s = 0x%s\n",
        VAR_18, FUNC_1 (VAR_19),
        FUNC_13 (VAR_29, VAR_4));
       FUNC_16 (VAR_11, VAR_19, VAR_29);
       VAR_19++;
     }
   else
     {

       if (VAR_7)
  FUNC_11 (VAR_8, "arg %d @ sp + %d\n",
        VAR_18, VAR_20);
       VAR_21 = FUNC_15 (VAR_21, VAR_26, VAR_4);
       VAR_20 += VAR_4;
     }

   VAR_22 -= VAR_28;
   VAR_26 += VAR_28;
 }
    }


  if (VAR_20 & 4)
    VAR_15 -= 4;

  while (VAR_21)
    {
      VAR_15 -= VAR_21->len;
      FUNC_18 (VAR_15, VAR_21->data, VAR_21->len);
      VAR_21 = FUNC_14 (VAR_21);
    }


  FUNC_16 (VAR_11, VAR_3, VAR_15);

  return VAR_15;
}
