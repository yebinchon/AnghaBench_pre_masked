
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char**,int) ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static void FUNC_10(FICL_VM *VAR_4)
{
 int VAR_5 = FUNC_3(VAR_4->pStack);
 char *VAR_6 = (char *)FUNC_4(VAR_4->pStack);
 char *VAR_7 = VAR_6;

 int VAR_8 = FUNC_3(VAR_4->pStack);
 char *VAR_9 = (char *)FUNC_4(VAR_4->pStack);
 char *VAR_10 = VAR_9 + VAR_8;

 int VAR_11 = 10;
 int VAR_12 = VAR_0;

 FICL_INT VAR_13 = VAR_2;

 while (VAR_9 < VAR_10)
 {
  char VAR_14[64];
  char *VAR_15;
  int VAR_16;
  int VAR_17;
  int VAR_18;


  if (*VAR_9 != '%')
  {
   VAR_15 = VAR_9;
   VAR_16 = VAR_17 = 1;
   VAR_18 = 0;
  }
  else
  {
   VAR_9++;
   if (VAR_9 == VAR_10)
    break;

   VAR_18 = (*VAR_9 == '0');
   if (VAR_18)
    {
    VAR_9++;
    if (VAR_9 == VAR_10)
     break;
    }

   VAR_17 = FUNC_0(*VAR_9);
   if (VAR_17)
    {
    VAR_17 = FUNC_8(VAR_9, &VAR_9, 10);
    if (VAR_9 == VAR_10)
     break;
    }
   else if (*VAR_9 == '*')
    {
    VAR_17 = FUNC_3(VAR_4->pStack);
    VAR_9++;
    if (VAR_9 == VAR_10)
     break;
    }


   switch (*VAR_9)
   {
    case 's':
    case 'S':
    {
     VAR_16 = FUNC_3(VAR_4->pStack);
     VAR_15 = (char *)FUNC_4(VAR_4->pStack);
     break;
    }
    case 'x':
    case 'X':
     VAR_11 = 16;
    case 'u':
    case 'U':
     VAR_12 = VAR_3;
    case 'd':
    case 'D':
    {
     int VAR_19 = FUNC_3(VAR_4->pStack);
     if (VAR_12)
      FUNC_9(VAR_19, VAR_14, VAR_11);
     else
      FUNC_1(VAR_19, VAR_14, VAR_11);
     VAR_11 = 10;
     VAR_12 = VAR_0;
     VAR_15 = VAR_14;
     VAR_16 = FUNC_7(VAR_14);
     break;
    }
    case '%':
     VAR_15 = VAR_9;
     VAR_16 = 1;
    default:
     continue;
   }
  }

  if (VAR_13 != VAR_1)
  {
   if (!VAR_17)
    VAR_17 = VAR_16;
   if (VAR_17 > VAR_5)
   {
    VAR_13 = VAR_1;
    VAR_17 = VAR_5;
   }
   while (VAR_17 > VAR_16)
    {
    *VAR_6++ = (char)((VAR_18) ? '0' : ' ');
    VAR_5--;
    VAR_17--;
    }
   FUNC_2(VAR_6, VAR_15, VAR_16);
   VAR_6 += VAR_16;
   VAR_5 -= VAR_16;
  }

  VAR_9++;
 }

 FUNC_6(VAR_4->pStack, VAR_7);
 FUNC_5(VAR_4->pStack, VAR_6 - VAR_7);
 FUNC_5(VAR_4->pStack, VAR_13);
}
