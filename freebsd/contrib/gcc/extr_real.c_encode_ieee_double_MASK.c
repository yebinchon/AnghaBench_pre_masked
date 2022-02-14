
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct real_format {int qnan_msb_set; int has_nans; int has_inf; } ;
struct TYPE_4__ {int* sig; int sign; int cl; int canonical; int signalling; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;





__attribute__((used)) static void
FUNC_2 (const struct real_format *VAR_4, long *VAR_5,
      const REAL_VALUE_TYPE *VAR_6)
{
  unsigned long VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  bool VAR_12 = (VAR_6->sig[VAR_2-1] & VAR_3) == 0;

  VAR_8 = VAR_6->sign << 31;
  VAR_7 = 0;

  if (VAR_1 == 64)
    {
      VAR_10 = VAR_6->sig[VAR_2-1];
      VAR_9 = (VAR_10 >> (64 - 53)) & 0xffffffff;
      VAR_10 = (VAR_10 >> (64 - 53 + 1) >> 31) & 0xfffff;
    }
  else
    {
      VAR_10 = VAR_6->sig[VAR_2-1];
      VAR_9 = VAR_6->sig[VAR_2-2];
      VAR_9 = (VAR_10 << 21) | (VAR_9 >> 11);
      VAR_10 = (VAR_10 >> 11) & 0xfffff;
    }

  switch (VAR_6->cl)
    {
    case 128:
      break;

    case 131:
      if (VAR_4->has_inf)
 VAR_8 |= 2047 << 20;
      else
 {
   VAR_8 |= 0x7fffffff;
   VAR_7 = 0xffffffff;
 }
      break;

    case 130:
      if (VAR_4->has_nans)
 {
   if (VAR_6->canonical)
     VAR_10 = VAR_9 = 0;
   if (VAR_6->signalling == VAR_4->qnan_msb_set)
     VAR_10 &= ~(1 << 19);
   else
     VAR_10 |= 1 << 19;




   if (VAR_6->canonical && !VAR_4->qnan_msb_set)
     {
       VAR_10 |= (1 << 19) - 1;
       VAR_9 = 0xffffffff;
     }
   else if (VAR_10 == 0 && VAR_9 == 0)
     VAR_10 = 1 << 18;

   VAR_8 |= 2047 << 20;
   VAR_8 |= VAR_10;
   VAR_7 = VAR_9;
 }
      else
 {
   VAR_8 |= 0x7fffffff;
   VAR_7 = 0xffffffff;
 }
      break;

    case 129:



      if (VAR_12)
 VAR_11 = 0;
      else
 VAR_11 = FUNC_0 (VAR_6) + 1023 - 1;
      VAR_8 |= VAR_11 << 20;
      VAR_8 |= VAR_10;
      VAR_7 = VAR_9;
      break;

    default:
      FUNC_1 ();
    }

  if (VAR_0)
    VAR_5[0] = VAR_8, VAR_5[1] = VAR_7;
  else
    VAR_5[0] = VAR_7, VAR_5[1] = VAR_8;
}
