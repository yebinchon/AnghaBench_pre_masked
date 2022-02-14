
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct real_format {int qnan_msb_set; int has_nans; int has_inf; } ;
struct TYPE_6__ {int* sig; int sign; int cl; int canonical; int signalling; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,scalar_t__) ;





__attribute__((used)) static void
FUNC_3 (const struct real_format *VAR_5, long *VAR_6,
    const REAL_VALUE_TYPE *VAR_7)
{
  unsigned long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  bool VAR_13 = (VAR_7->sig[VAR_3-1] & VAR_4) == 0;
  REAL_VALUE_TYPE VAR_14;

  VAR_8 = VAR_7->sign << 31;
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = 0;

  FUNC_2 (&VAR_14, VAR_7, VAR_2 - 113);

  switch (VAR_7->cl)
    {
    case 128:
      break;

    case 131:
      if (VAR_5->has_inf)
 VAR_8 |= 32767 << 16;
      else
 {
   VAR_8 |= 0x7fffffff;
   VAR_9 = 0xffffffff;
   VAR_10 = 0xffffffff;
   VAR_11 = 0xffffffff;
 }
      break;

    case 130:
      if (VAR_5->has_nans)
 {
   VAR_8 |= 32767 << 16;

   if (VAR_7->canonical)
     {


     }
   else if (VAR_1 == 32)
     {
       VAR_11 = VAR_14.sig[0];
       VAR_10 = VAR_14.sig[1];
       VAR_9 = VAR_14.sig[2];
       VAR_8 |= VAR_14.sig[3] & 0xffff;
     }
   else
     {
       VAR_11 = VAR_14.sig[0];
       VAR_10 = VAR_11 >> 31 >> 1;
       VAR_9 = VAR_14.sig[1];
       VAR_8 |= (VAR_9 >> 31 >> 1) & 0xffff;
       VAR_11 &= 0xffffffff;
       VAR_9 &= 0xffffffff;
     }
   if (VAR_7->signalling == VAR_5->qnan_msb_set)
     VAR_8 &= ~0x8000;
   else
     VAR_8 |= 0x8000;




   if (VAR_7->canonical && !VAR_5->qnan_msb_set)
     {
       VAR_8 |= 0x7fff;
       VAR_9 = VAR_10 = VAR_11 = 0xffffffff;
     }
   else if (((VAR_8 & 0xffff) | VAR_9 | VAR_10 | VAR_11) == 0)
     VAR_8 |= 0x4000;
 }
      else
 {
   VAR_8 |= 0x7fffffff;
   VAR_9 = 0xffffffff;
   VAR_10 = 0xffffffff;
   VAR_11 = 0xffffffff;
 }
      break;

    case 129:



      if (VAR_13)
 VAR_12 = 0;
      else
 VAR_12 = FUNC_0 (VAR_7) + 16383 - 1;
      VAR_8 |= VAR_12 << 16;

      if (VAR_1 == 32)
 {
   VAR_11 = VAR_14.sig[0];
   VAR_10 = VAR_14.sig[1];
   VAR_9 = VAR_14.sig[2];
   VAR_8 |= VAR_14.sig[3] & 0xffff;
 }
      else
 {
   VAR_11 = VAR_14.sig[0];
   VAR_10 = VAR_11 >> 31 >> 1;
   VAR_9 = VAR_14.sig[1];
   VAR_8 |= (VAR_9 >> 31 >> 1) & 0xffff;
   VAR_11 &= 0xffffffff;
   VAR_9 &= 0xffffffff;
 }
      break;

    default:
      FUNC_1 ();
    }

  if (VAR_0)
    {
      VAR_6[0] = VAR_8;
      VAR_6[1] = VAR_9;
      VAR_6[2] = VAR_10;
      VAR_6[3] = VAR_11;
    }
  else
    {
      VAR_6[0] = VAR_11;
      VAR_6[1] = VAR_10;
      VAR_6[2] = VAR_9;
      VAR_6[3] = VAR_8;
    }
}
