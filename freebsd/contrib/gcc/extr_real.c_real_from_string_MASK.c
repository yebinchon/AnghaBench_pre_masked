
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {unsigned long* sig; scalar_t__ cl; int sign; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char const) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int) ;

void
FUNC_12 (REAL_VALUE_TYPE *VAR_6, const char *VAR_7)
{
  int VAR_8 = 0;
  bool VAR_9 = 0;

  FUNC_6 (VAR_6, 0);

  if (*VAR_7 == '-')
    {
      VAR_9 = 1;
      VAR_7++;
    }
  else if (*VAR_7 == '+')
    VAR_7++;

  if (VAR_7[0] == '0' && (VAR_7[1] == 'x' || VAR_7[1] == 'X'))
    {

      int VAR_10 = VAR_2 - 4, VAR_11;

      VAR_7 += 2;

      while (*VAR_7 == '0')
 VAR_7++;
      while (1)
 {
   VAR_11 = FUNC_7 (*VAR_7);
   if (VAR_11 == VAR_3)
     break;
   if (VAR_10 >= 0)
     {
       VAR_6->sig[VAR_10 / VAR_0]
  |= (unsigned long) VAR_11 << (VAR_10 % VAR_0);
       VAR_10 -= 4;
     }
   else if (VAR_11)


     VAR_6->sig[0] |= 1;
   VAR_8 += 4;
   VAR_7++;
 }
      if (*VAR_7 == '.')
 {
   VAR_7++;
   if (VAR_10 == VAR_2 - 4)
     {
       while (*VAR_7 == '0')
  VAR_7++, VAR_8 -= 4;
     }
   while (1)
     {
       VAR_11 = FUNC_7 (*VAR_7);
       if (VAR_11 == VAR_3)
  break;
       if (VAR_10 >= 0)
  {
    VAR_6->sig[VAR_10 / VAR_0]
      |= (unsigned long) VAR_11 << (VAR_10 % VAR_0);
    VAR_10 -= 4;
  }
       else if (VAR_11)


  VAR_6->sig[0] |= 1;
       VAR_7++;
     }
 }


      if (!FUNC_2 (VAR_6))
 goto underflow;

      if (*VAR_7 == 'p' || *VAR_7 == 'P')
 {
   bool VAR_12 = 0;

   VAR_7++;
   if (*VAR_7 == '-')
     {
       VAR_12 = 1;
       VAR_7++;
     }
   else if (*VAR_7 == '+')
     VAR_7++;

   VAR_11 = 0;
   while (FUNC_0 (*VAR_7))
     {
       VAR_11 *= 10;
       VAR_11 += *VAR_7 - '0';
       if (VAR_11 > VAR_1)
  {

    if (VAR_12)
      goto underflow;
    else
      goto overflow;
  }
       VAR_7++;
     }
   if (VAR_12)
     VAR_11 = -VAR_11;

   VAR_8 += VAR_11;
 }

      VAR_6->cl = VAR_4;
      FUNC_1 (VAR_6, VAR_8);

      FUNC_8 (VAR_6);
    }
  else
    {

      const REAL_VALUE_TYPE *VAR_13 = FUNC_10 (0);
      int VAR_14;

      while (*VAR_7 == '0')
 VAR_7++;
      while (FUNC_0 (*VAR_7))
 {
   VAR_14 = *VAR_7++ - '0';
   FUNC_4 (VAR_6, VAR_6, VAR_13);
   if (VAR_14)
     FUNC_3 (VAR_6, VAR_6, FUNC_9 (VAR_14), 0);
 }
      if (*VAR_7 == '.')
 {
   VAR_7++;
   if (VAR_6->cl == VAR_5)
     {
       while (*VAR_7 == '0')
  VAR_7++, VAR_8--;
     }
   while (FUNC_0 (*VAR_7))
     {
       VAR_14 = *VAR_7++ - '0';
       FUNC_4 (VAR_6, VAR_6, VAR_13);
       if (VAR_14)
         FUNC_3 (VAR_6, VAR_6, FUNC_9 (VAR_14), 0);
       VAR_8--;
     }
 }


      if (VAR_6->cl == VAR_5)
 goto underflow;

      if (*VAR_7 == 'e' || *VAR_7 == 'E')
 {
   bool VAR_15 = 0;

   VAR_7++;
   if (*VAR_7 == '-')
     {
       VAR_15 = 1;
       VAR_7++;
     }
   else if (*VAR_7 == '+')
     VAR_7++;

   VAR_14 = 0;
   while (FUNC_0 (*VAR_7))
     {
       VAR_14 *= 10;
       VAR_14 += *VAR_7 - '0';
       if (VAR_14 > VAR_1)
  {

    if (VAR_15)
      goto underflow;
    else
      goto overflow;
  }
       VAR_7++;
     }
   if (VAR_15)
     VAR_14 = -VAR_14;
   VAR_8 += VAR_14;
 }

      if (VAR_8)
 FUNC_11 (VAR_6, VAR_8);
    }

  VAR_6->sign = VAR_9;
  return;

 underflow:
  FUNC_6 (VAR_6, VAR_9);
  return;

 overflow:
  FUNC_5 (VAR_6, VAR_9);
  return;
}
