
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct type*) ;
 char* FUNC_1 (struct value*) ;
 struct type* FUNC_2 (struct value*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct regcache*,int,char*) ;
 scalar_t__ FUNC_7 (struct type*) ;
 int FUNC_8 (struct type*) ;
 scalar_t__ FUNC_9 (struct type*) ;
 int FUNC_10 (char*,int,int) ;
 struct value* FUNC_11 (int ,struct value*) ;
 struct value* FUNC_12 (int ,int) ;
 int FUNC_13 (int,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_14 (struct regcache *VAR_2, int VAR_3,
    struct value **VAR_4, CORE_ADDR VAR_5,
    int VAR_6, CORE_ADDR VAR_7)
{

  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
    {
      struct type *VAR_11 = FUNC_2 (VAR_4[VAR_10]);
      int VAR_12 = FUNC_0 (VAR_11);

      if (FUNC_9 (VAR_11)
   || (FUNC_7 (VAR_11) && VAR_12 == 16))
 {

   VAR_5 -= VAR_12;



   VAR_5 &= ~0x7;

   FUNC_13 (VAR_5, FUNC_1 (VAR_4[VAR_10]), VAR_12);
   VAR_4[VAR_10] = FUNC_12 (FUNC_4 (VAR_11), VAR_5);
   VAR_8++;
 }
      else if (FUNC_7 (VAR_11))
 {

   FUNC_3 (VAR_12 == 4 || VAR_12 == 8);
   VAR_8 += (VAR_12 / 4);
 }
      else
 {

   FUNC_3 (FUNC_8 (VAR_11));

   if (VAR_12 < 4)
     VAR_4[VAR_10] = FUNC_11 (VAR_1, VAR_4[VAR_10]);
   VAR_8 += ((VAR_12 + 3) / 4);
 }
    }


  VAR_5 -= FUNC_5 (6, VAR_8) * 4;



  VAR_5 -= 4;




  VAR_5 &= ~0x7;

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
    {
      char *VAR_13 = FUNC_1 (VAR_4[VAR_10]);
      struct type *VAR_14 = FUNC_2 (VAR_4[VAR_10]);
      int VAR_15 = FUNC_0 (VAR_14);

      FUNC_3 (VAR_15 == 4 || VAR_15 == 8);

      if (VAR_9 < 6)
 {
   int VAR_16 = VAR_0 + VAR_9;

   FUNC_6 (VAR_2, VAR_16, VAR_13);
   if (VAR_15 > 4 && VAR_9 < 5)
     FUNC_6 (VAR_2, VAR_16 + 1, VAR_13 + 4);
 }


      FUNC_13 (VAR_5 + 4 + VAR_9 * 4, VAR_13, VAR_15);
      VAR_9 += VAR_15 / 4;
    }

  FUNC_3 (VAR_9 == VAR_8);

  if (VAR_6)
    {
      char VAR_17[4];

      FUNC_10 (VAR_17, 4, VAR_7);
      FUNC_13 (VAR_5, VAR_17, 4);
    }

  return VAR_5;
}
