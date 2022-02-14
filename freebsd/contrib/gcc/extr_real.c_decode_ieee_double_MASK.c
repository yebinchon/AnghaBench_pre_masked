
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct real_format {unsigned long qnan_msb_set; scalar_t__ has_inf; scalar_t__ has_nans; scalar_t__ has_signed_zero; scalar_t__ has_denorm; } ;
struct TYPE_6__ {int sign; unsigned long* sig; unsigned long signalling; void* cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void
FUNC_3 (const struct real_format *VAR_7, REAL_VALUE_TYPE *VAR_8,
      const long *VAR_9)
{
  unsigned long VAR_10, VAR_11;
  bool VAR_12;
  int VAR_13;

  if (VAR_0)
    VAR_10 = VAR_9[0], VAR_11 = VAR_9[1];
  else
    VAR_11 = VAR_9[0], VAR_10 = VAR_9[1];
  VAR_11 &= 0xffffffff;
  VAR_10 &= 0xffffffff;

  VAR_12 = (VAR_10 >> 31) & 1;
  VAR_13 = (VAR_10 >> 20) & 0x7ff;

  FUNC_1 (VAR_8, 0, sizeof (*VAR_8));

  VAR_10 <<= 32 - 21;
  VAR_10 |= VAR_11 >> 21;
  VAR_10 &= 0x7fffffff;
  VAR_11 <<= 32 - 21;

  if (VAR_13 == 0)
    {
      if ((VAR_10 || VAR_11) && VAR_7->has_denorm)
 {
   VAR_8->cl = VAR_6;
   VAR_8->sign = VAR_12;
   FUNC_0 (VAR_8, -1022);
   if (VAR_1 == 32)
     {
       VAR_10 = (VAR_10 << 1) | (VAR_11 >> 31);
       VAR_11 <<= 1;
       VAR_8->sig[VAR_2-1] = VAR_10;
       VAR_8->sig[VAR_2-2] = VAR_11;
     }
   else
     {
       VAR_10 = (VAR_10 << 31 << 2) | (VAR_11 << 1);
       VAR_8->sig[VAR_2-1] = VAR_10;
     }
   FUNC_2 (VAR_8);
 }
      else if (VAR_7->has_signed_zero)
 VAR_8->sign = VAR_12;
    }
  else if (VAR_13 == 2047 && (VAR_7->has_nans || VAR_7->has_inf))
    {
      if (VAR_10 || VAR_11)
 {
   VAR_8->cl = VAR_5;
   VAR_8->sign = VAR_12;
   VAR_8->signalling = ((VAR_10 >> 30) & 1) ^ VAR_7->qnan_msb_set;
   if (VAR_1 == 32)
     {
       VAR_8->sig[VAR_2-1] = VAR_10;
       VAR_8->sig[VAR_2-2] = VAR_11;
     }
   else
     VAR_8->sig[VAR_2-1] = (VAR_10 << 31 << 1) | VAR_11;
 }
      else
 {
   VAR_8->cl = VAR_4;
   VAR_8->sign = VAR_12;
 }
    }
  else
    {
      VAR_8->cl = VAR_6;
      VAR_8->sign = VAR_12;
      FUNC_0 (VAR_8, VAR_13 - 1023 + 1);
      if (VAR_1 == 32)
 {
   VAR_8->sig[VAR_2-1] = VAR_10 | VAR_3;
   VAR_8->sig[VAR_2-2] = VAR_11;
 }
      else
 VAR_8->sig[VAR_2-1] = (VAR_10 << 31 << 1) | VAR_11 | VAR_3;
    }
}
