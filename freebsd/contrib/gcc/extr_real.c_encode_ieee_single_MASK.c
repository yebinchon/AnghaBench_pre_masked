
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct real_format {int qnan_msb_set; int has_nans; int has_inf; } ;
struct TYPE_4__ {unsigned long sign; int* sig; int cl; int canonical; int signalling; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;





__attribute__((used)) static void
FUNC_2 (const struct real_format *VAR_3, long *VAR_4,
      const REAL_VALUE_TYPE *VAR_5)
{
  unsigned long VAR_6, VAR_7, VAR_8;
  unsigned long VAR_9 = VAR_5->sign;
  bool VAR_10 = (VAR_5->sig[VAR_1-1] & VAR_2) == 0;

  VAR_6 = VAR_9 << 31;
  VAR_7 = (VAR_5->sig[VAR_1-1] >> (VAR_0 - 24)) & 0x7fffff;

  switch (VAR_5->cl)
    {
    case 128:
      break;

    case 131:
      if (VAR_3->has_inf)
 VAR_6 |= 255 << 23;
      else
 VAR_6 |= 0x7fffffff;
      break;

    case 130:
      if (VAR_3->has_nans)
 {
   if (VAR_5->canonical)
     VAR_7 = 0;
   if (VAR_5->signalling == VAR_3->qnan_msb_set)
     VAR_7 &= ~(1 << 22);
   else
     VAR_7 |= 1 << 22;




   if (VAR_5->canonical && !VAR_3->qnan_msb_set)
     VAR_7 |= (1 << 22) - 1;
   else if (VAR_7 == 0)
     VAR_7 = 1 << 21;

   VAR_6 |= 255 << 23;
   VAR_6 |= VAR_7;
 }
      else
 VAR_6 |= 0x7fffffff;
      break;

    case 129:



      if (VAR_10)
 VAR_8 = 0;
      else
      VAR_8 = FUNC_0 (VAR_5) + 127 - 1;
      VAR_6 |= VAR_8 << 23;
      VAR_6 |= VAR_7;
      break;

    default:
      FUNC_1 ();
    }

  VAR_4[0] = VAR_6;
}
