
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;
typedef enum amd64_reg_class { ____Placeholder_amd64_reg_class } amd64_reg_class ;
typedef int CORE_ADDR ;



 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct type*) ;
 char* FUNC_2 (struct value*) ;
 struct type* FUNC_3 (struct value*) ;
 struct value** FUNC_4 (int) ;
 int FUNC_5 (struct type*,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct regcache*,int,int,int,char*) ;
 int FUNC_11 (struct regcache*,int ,int) ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_13 (struct regcache *VAR_1, int VAR_2,
        struct value **VAR_3, CORE_ADDR VAR_4, int VAR_5)
{
  static int VAR_6[] =
  {
    134,
    132,
    133,
    135,
    8,
    9
  };
  static int VAR_7[] =
  {

    129 + 0, 128,
    129 + 2, 129 + 3,
    129 + 4, 129 + 5,
    129 + 6, 129 + 7,
  };
  struct value **VAR_8 = FUNC_4 (VAR_2 * sizeof (struct value *));
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14;


  if (VAR_5)
    VAR_12++;

  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
    {
      struct type *VAR_15 = FUNC_3 (VAR_3[VAR_14]);
      int VAR_16 = FUNC_1 (VAR_15);
      enum amd64_reg_class VAR_17[2];
      int VAR_18 = 0;
      int VAR_19 = 0;
      int VAR_20;


      FUNC_5 (VAR_15, VAR_17);



      for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
 {
   if (VAR_17[VAR_20] == 136)
     VAR_18++;
   else if (VAR_17[VAR_20] == 131)
     VAR_19++;
 }



      if (VAR_12 + VAR_18 > FUNC_0 (VAR_6)
   || VAR_13 + VAR_19 > FUNC_0 (VAR_7)
   || (VAR_18 == 0 && VAR_19 == 0))
 {

   VAR_10 += ((VAR_16 + 7) / 8);
   VAR_8[VAR_9++] = VAR_3[VAR_14];
 }
      else
 {

   char *VAR_21 = FUNC_2 (VAR_3[VAR_14]);
   char VAR_22[8];

   FUNC_6 (VAR_16 <= 16);

   for (VAR_20 = 0; VAR_16 > 0; VAR_20++, VAR_16 -= 8)
     {
       int VAR_23 = -1;
       int VAR_24 = 0;

       switch (VAR_17[VAR_20])
  {
  case 136:
    VAR_23 = VAR_6[VAR_12++];
    break;

  case 131:
    VAR_23 = VAR_7[VAR_13++];
    break;

  case 130:
    FUNC_6 (VAR_13 > 0);
    VAR_23 = VAR_7[VAR_13 - 1];
    VAR_24 = 8;
    break;

  default:
    FUNC_6 (!"Unexpected register class.");
  }

       FUNC_6 (VAR_23 != -1);
       FUNC_8 (VAR_22, 0, sizeof VAR_22);
       FUNC_7 (VAR_22, VAR_21 + VAR_20 * 8, FUNC_9 (VAR_16, 8));
       FUNC_10 (VAR_1, VAR_23, VAR_24, 8, VAR_22);
     }
 }
    }


  VAR_4 -= VAR_10 * 8;



  VAR_4 &= ~0xf;


  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
    {
      struct type *VAR_25 = FUNC_3 (VAR_8[VAR_14]);
      char *VAR_26 = FUNC_2 (VAR_8[VAR_14]);
      int VAR_27 = FUNC_1 (VAR_25);

      FUNC_12 (VAR_4 + VAR_11 * 8, VAR_26, VAR_27);
      VAR_11 += ((VAR_27 + 7) / 8);
    }





  FUNC_11 (VAR_1, VAR_0, VAR_13);
  return VAR_4;
}
