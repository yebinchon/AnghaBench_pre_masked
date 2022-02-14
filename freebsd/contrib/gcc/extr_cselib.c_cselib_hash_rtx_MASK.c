
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_3__ {unsigned int value; } ;
typedef TYPE_1__ cselib_val ;





 int FUNC_0 (int ) ;

 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;


 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;


 int FUNC_11 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_12 (int ,int) ;
 unsigned int FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int) ;
 TYPE_1__* FUNC_17 (int ,scalar_t__,int) ;
 int FUNC_18 () ;
 unsigned int FUNC_19 (int ) ;

__attribute__((used)) static unsigned int
FUNC_20 (rtx VAR_1, int VAR_2)
{
  cselib_val *VAR_3;
  int VAR_4, VAR_5;
  enum rtx_code VAR_6;
  const char *VAR_7;
  unsigned int VAR_8 = 0;

  VAR_6 = FUNC_6 (VAR_1);
  VAR_8 += (unsigned) VAR_6 + (unsigned) FUNC_7 (VAR_1);

  switch (VAR_6)
    {
    case 138:
    case 130:
      VAR_3 = FUNC_17 (VAR_1, FUNC_7 (VAR_1), VAR_2);
      if (! VAR_3)
 return 0;

      return VAR_3->value;

    case 141:
      VAR_8 += ((unsigned) 141 << 7) + FUNC_10 (VAR_1);
      return VAR_8 ? VAR_8 : (unsigned int) 141;

    case 142:


      VAR_8 += (unsigned) VAR_6 + (unsigned) FUNC_7 (VAR_1);
      if (FUNC_7 (VAR_1) != VAR_0)
 VAR_8 += FUNC_19 (FUNC_3 (VAR_1));
      else
 VAR_8 += ((unsigned) FUNC_2 (VAR_1)
   + (unsigned) FUNC_1 (VAR_1));
      return VAR_8 ? VAR_8 : (unsigned int) 142;

    case 140:
      {
 int VAR_9;
 rtx VAR_10;

 VAR_9 = FUNC_5 (VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_9; ++VAR_4)
   {
     VAR_10 = FUNC_4 (VAR_1, VAR_4);
     VAR_8 += FUNC_20 (VAR_10, 0);
   }

 return VAR_8;
      }


    case 139:


      VAR_8 += (((unsigned int) 139 << 7)
        + FUNC_0 (FUNC_12 (VAR_1, 0)));
      return VAR_8 ? VAR_8 : (unsigned int) 139;

    case 129:
      {





 unsigned int VAR_11 = 0;
 const unsigned char *VAR_12 = (const unsigned char *) FUNC_14 (VAR_1, 0);

 while (*VAR_12)
   VAR_11 += (VAR_11 << 7) + *VAR_12++;

 VAR_8 += ((unsigned int) 129 << 7) + VAR_11;
 return VAR_8 ? VAR_8 : (unsigned int) 129;
      }

    case 133:
    case 132:
    case 136:
    case 135:
    case 134:
    case 131:
    case 137:
    case 143:
    case 144:
    case 128:
      return 0;

    case 145:
      if (FUNC_11 (VAR_1))
 return 0;

      break;

    default:
      break;
    }

  VAR_4 = FUNC_9 (VAR_6) - 1;
  VAR_7 = FUNC_8 (VAR_6);
  for (; VAR_4 >= 0; VAR_4--)
    {
      switch (VAR_7[VAR_4])
 {
 case 'e':
   {
     rtx VAR_13 = FUNC_12 (VAR_1, VAR_4);
     unsigned int VAR_14 = FUNC_20 (VAR_13, VAR_2);

     if (VAR_14 == 0)
       return 0;

     VAR_8 += VAR_14;
   }
   break;
 case 'E':
   for (VAR_5 = 0; VAR_5 < FUNC_16 (VAR_1, VAR_4); VAR_5++)
     {
       unsigned int VAR_15
  = FUNC_20 (FUNC_15 (VAR_1, VAR_4, VAR_5), VAR_2);

       if (VAR_15 == 0)
  return 0;

       VAR_8 += VAR_15;
     }
   break;

 case 's':
   {
     const unsigned char *VAR_16 = (const unsigned char *) FUNC_14 (VAR_1, VAR_4);

     if (VAR_16)
       while (*VAR_16)
  VAR_8 += *VAR_16++;
     break;
   }

 case 'i':
   VAR_8 += FUNC_13 (VAR_1, VAR_4);
   break;

 case '0':
 case 't':

   break;

 default:
   FUNC_18 ();
 }
    }

  return VAR_8 ? VAR_8 : 1 + (unsigned int) FUNC_6 (VAR_1);
}
