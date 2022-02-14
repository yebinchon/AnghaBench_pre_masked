
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;
typedef int buf ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct type*) ;
 char* FUNC_1 (struct value*) ;
 struct type* FUNC_2 (struct value*) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct type*) ;
 char* FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct regcache*,int,char*) ;
 int FUNC_8 (struct regcache*,int,int) ;
 scalar_t__ FUNC_9 (struct type*) ;
 scalar_t__ FUNC_10 (struct type*) ;
 int FUNC_11 (struct type*) ;
 int FUNC_12 (struct regcache*,struct type*,char*,int,int ) ;
 scalar_t__ FUNC_13 (struct type*) ;
 struct value* FUNC_14 (int ,struct value*) ;
 struct value* FUNC_15 (int ,int) ;
 int FUNC_16 (int,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_17 (struct regcache *VAR_7, int VAR_8,
    struct value **VAR_9, CORE_ADDR VAR_10,
    int VAR_11, CORE_ADDR VAR_12)
{

  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15;


  VAR_10 += VAR_0;




  if (VAR_11)
    VAR_13++;

  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
    {
      struct type *VAR_16 = FUNC_2 (VAR_9[VAR_15]);
      int VAR_17 = FUNC_0 (VAR_16);

      if (FUNC_13 (VAR_16))
 {

   if (VAR_17 <= 16)
     {
       if (VAR_13 % 2 && FUNC_9 (VAR_16))
  VAR_13++;
       VAR_13 += ((VAR_17 + 7) / 8);
     }
   else
     {
       VAR_10 -= VAR_17;




       VAR_10 &= ~0xf;

       FUNC_16 (VAR_10, FUNC_1 (VAR_9[VAR_15]), VAR_17);
       VAR_9[VAR_15] = FUNC_15 (FUNC_4 (VAR_16), VAR_10);
       VAR_13++;
     }
 }
      else if (FUNC_10 (VAR_16))
 {


   if (VAR_17 == 16)
     {



       VAR_13 += 2;





       if (VAR_13 % 2)
  VAR_13++;
     }
   else
     VAR_13++;
 }
      else
 {

   FUNC_3 (FUNC_11 (VAR_16));





   if (VAR_17 < 8)
     VAR_9[VAR_15] = FUNC_14 (VAR_6, VAR_9[VAR_15]);
   VAR_13++;
 }
    }


  VAR_10 -= VAR_13 * 8;


  VAR_10 &= ~0xf;
  if (VAR_11)
    {
      FUNC_8 (VAR_7, VAR_5, VAR_12);
      VAR_14++;
    }

  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
    {
      char *VAR_18 = FUNC_1 (VAR_9[VAR_15]);
      struct type *VAR_19 = FUNC_2 (VAR_9[VAR_15]);
      int VAR_20 = FUNC_0 (VAR_19);
      int VAR_21 = -1;
      char VAR_22[16];

      if (FUNC_13 (VAR_19))
 {

   FUNC_3 (VAR_20 <= 16);
   FUNC_6 (VAR_22, 0, sizeof (VAR_22));
   VAR_18 = FUNC_5 (VAR_22, VAR_18, VAR_20);

   if (VAR_14 % 2 && FUNC_9 (VAR_19))
     VAR_14++;

   if (VAR_14 < 6)
     {
       VAR_21 = VAR_5 + VAR_14;
       if (VAR_20 > 8 && VAR_14 < 5)
  FUNC_7 (VAR_7, VAR_21 + 1, VAR_18 + 8);
     }

   if (VAR_14 < 16)
     FUNC_12 (VAR_7, VAR_19, VAR_18, VAR_14, 0);
 }
      else if (FUNC_10 (VAR_19))
 {

   if (VAR_20 == 16)
     {
       if (VAR_14 % 2)
  VAR_14++;
       if (VAR_14 < 16)
  VAR_21 = VAR_3 + VAR_14 / 2;
     }
   else if (VAR_20 == 8)
     {
       if (VAR_14 < 16)
  VAR_21 = VAR_1 + VAR_14;
     }
   else
     {






       FUNC_6 (VAR_22, 0, 4);
       FUNC_5 (VAR_22 + 4, VAR_18, 4);
       VAR_18 = VAR_22;
       VAR_20 = 8;
       if (VAR_14 < 16)
  VAR_21 = VAR_1 + VAR_14;
     }
 }
      else
 {

   FUNC_3 (VAR_20 == 8);
   if (VAR_14 < 6)
     VAR_21 = VAR_5 + VAR_14;
 }

      if (VAR_21 != -1)
 {
   FUNC_7 (VAR_7, VAR_21, VAR_18);



   if (VAR_21 >= VAR_1 && VAR_21 <= VAR_2)
     {
       FUNC_3 (VAR_14 < 6);
       VAR_21 = VAR_5 + VAR_14;
       FUNC_7 (VAR_7, VAR_21, VAR_18);
     }
   else if (VAR_21 >= VAR_3 && VAR_21 <= VAR_4)
     {
       FUNC_3 (VAR_14 < 6);
       VAR_21 = VAR_5 + VAR_14;
       FUNC_7 (VAR_7, VAR_21, VAR_18);
       FUNC_7 (VAR_7, VAR_21 + 1, VAR_18);
     }
 }


      FUNC_16 (VAR_10 + VAR_14 * 8, VAR_18, VAR_20);
      VAR_14 += ((VAR_20 + 7) / 8);
    }

  FUNC_3 (VAR_14 == VAR_13);


  VAR_10 -= VAR_0;
  return VAR_10;
}
