
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct real_format {int qnan_msb_set; int has_nans; int has_inf; } ;
struct TYPE_4__ {int* sig; int sign; int cl; int signalling; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;





__attribute__((used)) static void
FUNC_3 (const struct real_format *VAR_3, long *VAR_4,
        const REAL_VALUE_TYPE *VAR_5)
{
  unsigned long VAR_6, VAR_7, VAR_8;
  bool VAR_9 = (VAR_5->sig[VAR_1-1] & VAR_2) == 0;

  VAR_6 = VAR_5->sign << 15;
  VAR_7 = VAR_8 = 0;

  switch (VAR_5->cl)
    {
    case 128:
      break;

    case 131:
      if (VAR_3->has_inf)
 {
   VAR_6 |= 32767;




   VAR_7 = 0x80000000;
 }
      else
 {
   VAR_6 |= 32767;
   VAR_8 = VAR_7 = 0xffffffff;
 }
      break;

    case 130:
      if (VAR_3->has_nans)
 {
   VAR_6 |= 32767;
   if (VAR_0 == 32)
     {
       VAR_7 = VAR_5->sig[VAR_1-1];
       VAR_8 = VAR_5->sig[VAR_1-2];
     }
   else
     {
       VAR_8 = VAR_5->sig[VAR_1-1];
       VAR_7 = VAR_8 >> 31 >> 1;
       VAR_8 &= 0xffffffff;
     }
   if (VAR_5->signalling == VAR_3->qnan_msb_set)
     VAR_7 &= ~(1 << 30);
   else
     VAR_7 |= 1 << 30;
   if ((VAR_7 & 0x7fffffff) == 0 && VAR_8 == 0)
     VAR_7 = 1 << 29;




   VAR_7 |= 0x80000000;
 }
      else
 {
   VAR_6 |= 32767;
   VAR_8 = VAR_7 = 0xffffffff;
 }
      break;

    case 129:
      {
 int VAR_10 = FUNC_0 (VAR_5);
 if (VAR_9)
   VAR_10 = 0;
 else
   {
     VAR_10 += 16383 - 1;
     FUNC_1 (VAR_10 >= 0);
   }
 VAR_6 |= VAR_10;

 if (VAR_0 == 32)
   {
     VAR_7 = VAR_5->sig[VAR_1-1];
     VAR_8 = VAR_5->sig[VAR_1-2];
   }
 else
   {
     VAR_8 = VAR_5->sig[VAR_1-1];
     VAR_7 = VAR_8 >> 31 >> 1;
     VAR_8 &= 0xffffffff;
   }
      }
      break;

    default:
      FUNC_2 ();
    }

  VAR_4[0] = VAR_8, VAR_4[1] = VAR_7, VAR_4[2] = VAR_6;
}
