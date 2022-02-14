
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_7__ {scalar_t__ exponent; scalar_t__* lsu; int digits; int bits; } ;
typedef TYPE_1__ decNumber ;
typedef scalar_t__ Unit ;
typedef scalar_t__ Int ;
typedef int Flag ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__ const*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7 (const decNumber * VAR_4, char *VAR_5, Flag VAR_6)
{
  Int VAR_7 = VAR_4->exponent;
  Int VAR_8;
  Int VAR_9;
  Int VAR_10;
  char *VAR_11 = VAR_5;
  const Unit *VAR_12 = VAR_4->lsu + FUNC_0 (VAR_4->digits) - 1;
  uInt VAR_13, VAR_14;
  if (FUNC_5 (VAR_4))
    {
      *VAR_11 = '-';
      VAR_11++;
    }
  if (VAR_4->bits & VAR_2)
    {
      if (FUNC_4 (VAR_4))
 {
   FUNC_6 (VAR_11, "Infinity");
   return;
 }

      if (VAR_4->bits & VAR_1)
 {
   *VAR_11 = 's';
   VAR_11++;
 }
      FUNC_6 (VAR_11, "NaN");
      VAR_11 += 3;


      if (VAR_7 != 0 || (*VAR_4->lsu == 0 && VAR_4->digits == 1))
 return;

    }


  VAR_10 = VAR_4->digits % VAR_0;
  if (VAR_10 == 0)
    VAR_10 = VAR_0;
  VAR_10--;

  if (VAR_7 == 0)
    {

      for (; VAR_12 >= VAR_4->lsu; VAR_12--)
 {
   VAR_13 = *VAR_12;
   for (; VAR_10 >= 0; VAR_11++, VAR_10--)
     FUNC_2 (VAR_13, VAR_10, VAR_11);
   VAR_10 = VAR_0 - 1;
 }
      *VAR_11 = '\0';
      return;
    }


  VAR_9 = VAR_4->digits + VAR_7;
  VAR_8 = 0;
  if ((VAR_7 > 0) || (VAR_9 < -5))
    {
      VAR_8 = VAR_7 + VAR_4->digits - 1;
      VAR_9 = 1;
      if (VAR_6 && (VAR_8 != 0))
 {
   Int VAR_15;


   if (VAR_8 < 0)
     {
       VAR_15 = (-VAR_8) % 3;
       if (VAR_15 != 0)
  VAR_15 = 3 - VAR_15;
     }
   else
     {
       VAR_15 = VAR_8 % 3;
     }
   VAR_8 = VAR_8 - VAR_15;



   if (!FUNC_1 (VAR_4))
     VAR_9 += VAR_15;
   else
     {
       if (VAR_15 != 0)
  {
    VAR_8 = VAR_8 + 3;
    VAR_9 = -(2 - VAR_15);
  }
     }
 }
    }


  VAR_13 = *VAR_12;
  if (VAR_9 > 0)
    {
      for (; VAR_9 > 0; VAR_9--, VAR_11++, VAR_10--)
 {
   if (VAR_10 < 0)
     {
       if (VAR_12 == VAR_4->lsu)
  break;
       VAR_12--;
       VAR_10 = VAR_0 - 1;
       VAR_13 = *VAR_12;
     }
   FUNC_2 (VAR_13, VAR_10, VAR_11);
 }
      if (VAR_12 > VAR_4->lsu || (VAR_12 == VAR_4->lsu && VAR_10 >= 0))
 {
   *VAR_11 = '.';
   VAR_11++;
   for (;; VAR_11++, VAR_10--)
     {
       if (VAR_10 < 0)
  {
    if (VAR_12 == VAR_4->lsu)
      break;
    VAR_12--;
    VAR_10 = VAR_0 - 1;
    VAR_13 = *VAR_12;
  }
       FUNC_2 (VAR_13, VAR_10, VAR_11);
     }
 }
      else
 for (; VAR_9 > 0; VAR_9--, VAR_11++)
   *VAR_11 = '0';
    }
  else
    {
      *VAR_11 = '0';
      VAR_11++;
      *VAR_11 = '.';
      VAR_11++;
      for (; VAR_9 < 0; VAR_9++, VAR_11++)
 *VAR_11 = '0';
      for (;; VAR_11++, VAR_10--)
 {
   if (VAR_10 < 0)
     {
       if (VAR_12 == VAR_4->lsu)
  break;
       VAR_12--;
       VAR_10 = VAR_0 - 1;
       VAR_13 = *VAR_12;
     }
   FUNC_2 (VAR_13, VAR_10, VAR_11);
 }
    }




  if (VAR_8 != 0)
    {
      Flag VAR_16 = 0;
      *VAR_11 = 'E';
      VAR_11++;
      *VAR_11 = '+';
      VAR_11++;
      VAR_13 = VAR_8;
      if (VAR_8 < 0)
 {
   *(VAR_11 - 1) = '-';
   VAR_13 = -VAR_8;
 }

      for (VAR_10 = 9; VAR_10 >= 0; VAR_10--)
 {
   FUNC_2 (VAR_13, VAR_10, VAR_11);
   if (*VAR_11 == '0' && !VAR_16)
     continue;
   VAR_16 = 1;
   VAR_11++;
 }
    }
  *VAR_11 = '\0';
  return;
}
