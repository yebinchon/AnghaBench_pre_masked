
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct real_format {unsigned long qnan_msb_set; scalar_t__ has_inf; scalar_t__ has_nans; scalar_t__ has_signed_zero; scalar_t__ has_denorm; } ;
struct TYPE_8__ {int sign; unsigned long* sig; unsigned long signalling; void* cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static void
FUNC_4 (const struct real_format *VAR_8, REAL_VALUE_TYPE *VAR_9,
    const long *VAR_10)
{
  unsigned long VAR_11, VAR_12, VAR_13, VAR_14;
  bool VAR_15;
  int VAR_16;

  if (VAR_0)
    {
      VAR_11 = VAR_10[0];
      VAR_12 = VAR_10[1];
      VAR_13 = VAR_10[2];
      VAR_14 = VAR_10[3];
    }
  else
    {
      VAR_14 = VAR_10[0];
      VAR_13 = VAR_10[1];
      VAR_12 = VAR_10[2];
      VAR_11 = VAR_10[3];
    }
  VAR_14 &= 0xffffffff;
  VAR_13 &= 0xffffffff;
  VAR_12 &= 0xffffffff;

  VAR_15 = (VAR_11 >> 31) & 1;
  VAR_16 = (VAR_11 >> 16) & 0x7fff;
  VAR_11 &= 0xffff;

  FUNC_2 (VAR_9, 0, sizeof (*VAR_9));

  if (VAR_16 == 0)
    {
      if ((VAR_11 | VAR_12 | VAR_13 | VAR_14) && VAR_8->has_denorm)
 {
   VAR_9->cl = VAR_7;
   VAR_9->sign = VAR_15;

   FUNC_0 (VAR_9, -16382 + (VAR_2 - 112));
   if (VAR_1 == 32)
     {
       VAR_9->sig[0] = VAR_14;
       VAR_9->sig[1] = VAR_13;
       VAR_9->sig[2] = VAR_12;
       VAR_9->sig[3] = VAR_11;
     }
   else
     {
       VAR_9->sig[0] = (VAR_13 << 31 << 1) | VAR_14;
       VAR_9->sig[1] = (VAR_11 << 31 << 1) | VAR_12;
     }

   FUNC_3 (VAR_9);
 }
      else if (VAR_8->has_signed_zero)
 VAR_9->sign = VAR_15;
    }
  else if (VAR_16 == 32767 && (VAR_8->has_nans || VAR_8->has_inf))
    {
      if (VAR_11 | VAR_12 | VAR_13 | VAR_14)
 {
   VAR_9->cl = VAR_6;
   VAR_9->sign = VAR_15;
   VAR_9->signalling = ((VAR_11 >> 15) & 1) ^ VAR_8->qnan_msb_set;

   if (VAR_1 == 32)
     {
       VAR_9->sig[0] = VAR_14;
       VAR_9->sig[1] = VAR_13;
       VAR_9->sig[2] = VAR_12;
       VAR_9->sig[3] = VAR_11;
     }
   else
     {
       VAR_9->sig[0] = (VAR_13 << 31 << 1) | VAR_14;
       VAR_9->sig[1] = (VAR_11 << 31 << 1) | VAR_12;
     }
   FUNC_1 (VAR_9, VAR_9, VAR_2 - 113);
 }
      else
 {
   VAR_9->cl = VAR_5;
   VAR_9->sign = VAR_15;
 }
    }
  else
    {
      VAR_9->cl = VAR_7;
      VAR_9->sign = VAR_15;
      FUNC_0 (VAR_9, VAR_16 - 16383 + 1);

      if (VAR_1 == 32)
 {
   VAR_9->sig[0] = VAR_14;
   VAR_9->sig[1] = VAR_13;
   VAR_9->sig[2] = VAR_12;
   VAR_9->sig[3] = VAR_11;
 }
      else
 {
   VAR_9->sig[0] = (VAR_13 << 31 << 1) | VAR_14;
   VAR_9->sig[1] = (VAR_11 << 31 << 1) | VAR_12;
 }
      FUNC_1 (VAR_9, VAR_9, VAR_2 - 113);
      VAR_9->sig[VAR_3-1] |= VAR_4;
    }
}
