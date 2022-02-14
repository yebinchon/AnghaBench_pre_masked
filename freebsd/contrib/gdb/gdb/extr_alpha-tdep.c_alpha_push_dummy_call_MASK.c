
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef int arg_reg_buffer ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct type*) ;







 int FUNC_1 (struct type*) ;
 char* FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 scalar_t__ FUNC_4 (int) ;
 struct type* VAR_7 ;
 struct type* VAR_8 ;
 struct type* VAR_9 ;
 struct type* FUNC_5 (int ) ;
 struct type* FUNC_6 (struct type*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (struct regcache*,scalar_t__,char*) ;
 int FUNC_9 (struct regcache*,int ,int) ;
 int FUNC_10 (char*,int,int) ;
 struct value* FUNC_11 (struct type*,struct value*) ;
 struct value* FUNC_12 (struct type*,int) ;
 int FUNC_13 (int,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_14 (struct gdbarch *VAR_10, CORE_ADDR VAR_11,
         struct regcache *VAR_12, CORE_ADDR VAR_13,
         int VAR_14, struct value **VAR_15, CORE_ADDR VAR_16,
         int VAR_17, CORE_ADDR VAR_18)
{
  int VAR_19;
  int VAR_20 = VAR_17 ? 8 : 0;
  struct alpha_arg
    {
      char *contents;
      int len;
      int offset;
    };
  struct alpha_arg *VAR_21
    = (struct alpha_arg *) FUNC_4 (VAR_14 * sizeof (struct alpha_arg));
  struct alpha_arg *VAR_22;
  char VAR_23[VAR_4 * VAR_2];
  int VAR_24;


  FUNC_9 (VAR_12, VAR_6, VAR_11);



  FUNC_9 (VAR_12, VAR_3, VAR_13);


  for (VAR_19 = 0, VAR_22 = VAR_21; VAR_19 < VAR_14; VAR_19++, VAR_22++)
    {
      struct value *VAR_25 = VAR_15[VAR_19];
      struct type *VAR_26 = FUNC_5 (FUNC_3 (VAR_25));


      switch (FUNC_0 (VAR_26))
 {
 case 129:
 case 134:
 case 133:
 case 128:
 case 131:
   if (FUNC_1 (VAR_26) == 4)
     {


       VAR_26 = VAR_8;
       VAR_25 = FUNC_11 (VAR_26, VAR_25);
     }
   if (FUNC_1 (VAR_26) < VAR_4)
     {
       VAR_26 = VAR_9;
       VAR_25 = FUNC_11 (VAR_26, VAR_25);
     }
   break;

 case 130:


   if (VAR_20 < sizeof (VAR_23)
       && FUNC_1 (VAR_26) == 4)
     {
       VAR_26 = VAR_7;
       VAR_25 = FUNC_11 (VAR_26, VAR_25);
     }


   else if (FUNC_1 (VAR_26) == 16)
     {

       VAR_16 = (VAR_16 & -16) - 16;


       FUNC_13 (VAR_16, FUNC_2 (VAR_25), 16);


       VAR_26 = FUNC_6 (VAR_26);
       VAR_25 = FUNC_12 (VAR_26, VAR_16);
     }
   break;

 case 132:






   if (FUNC_1 (VAR_26) == 32)
     {

       VAR_16 = (VAR_16 & -16) - 16;


       FUNC_13 (VAR_16, FUNC_2 (VAR_25), 32);


       VAR_26 = FUNC_6 (VAR_26);
       VAR_25 = FUNC_12 (VAR_26, VAR_16);
     }
   break;

 default:
   break;
 }
      VAR_22->len = FUNC_1 (VAR_26);
      VAR_22->offset = VAR_20;
      VAR_20 = (VAR_20 + VAR_22->len + 7) & ~7;
      VAR_22->contents = FUNC_2 (VAR_25);
    }



  VAR_24 = VAR_20 / 8;
  if (VAR_24 > VAR_2)
    VAR_24 = VAR_2;


  if (VAR_20 < sizeof(VAR_23))
    VAR_20 = 0;
  else
    VAR_20 -= sizeof(VAR_23);
  VAR_16 -= VAR_20;


  VAR_16 &= ~15;


  for (VAR_19 = VAR_14; VAR_22--, --VAR_19 >= 0;)
    {
      char *VAR_27 = VAR_22->contents;
      int VAR_28 = VAR_22->offset;
      int VAR_29 = VAR_22->len;


      if (VAR_28 < sizeof(VAR_23))
 {
   if (VAR_28 + VAR_29 <= sizeof(VAR_23))
     {
       FUNC_7 (VAR_23 + VAR_28, VAR_27, VAR_29);
       continue;
     }
   else
     {
       int VAR_30 = sizeof(VAR_23) - VAR_28;
       FUNC_7 (VAR_23 + VAR_28, VAR_27, VAR_30);
       VAR_28 += VAR_30;
       VAR_27 += VAR_30;
       VAR_29 -= VAR_30;
     }
 }


      FUNC_13 (VAR_16 + VAR_28 - sizeof(VAR_23), VAR_27, VAR_29);
    }
  if (VAR_17)
    FUNC_10 (VAR_23, VAR_4, VAR_18);


  for (VAR_19 = 0; VAR_19 < VAR_24; VAR_19++)
    {
      FUNC_8 (VAR_12, VAR_0 + VAR_19,
        VAR_23 + VAR_19*VAR_4);
      FUNC_8 (VAR_12, VAR_1 + VAR_19,
        VAR_23 + VAR_19*VAR_4);
    }


  FUNC_9 (VAR_12, VAR_5, VAR_16);

  return VAR_16;
}
