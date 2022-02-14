
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct real_format {int emin; unsigned long qnan_msb_set; scalar_t__ has_inf; scalar_t__ has_nans; scalar_t__ has_signed_zero; scalar_t__ has_denorm; } ;
struct TYPE_6__ {int sign; unsigned long* sig; unsigned long signalling; void* cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void
FUNC_3 (const struct real_format *VAR_5, REAL_VALUE_TYPE *VAR_6,
        const long *VAR_7)
{
  unsigned long VAR_8, VAR_9, VAR_10;
  bool VAR_11;
  int VAR_12;

  VAR_10 = VAR_7[0], VAR_9 = VAR_7[1], VAR_8 = VAR_7[2];
  VAR_10 &= 0xffffffff;
  VAR_9 &= 0xffffffff;
  VAR_8 &= 0xffffffff;

  VAR_11 = (VAR_8 >> 15) & 1;
  VAR_12 = VAR_8 & 0x7fff;

  FUNC_1 (VAR_6, 0, sizeof (*VAR_6));

  if (VAR_12 == 0)
    {
      if ((VAR_9 || VAR_10) && VAR_5->has_denorm)
 {
   VAR_6->cl = VAR_4;
   VAR_6->sign = VAR_11;






   FUNC_0 (VAR_6, VAR_5->emin);
   if (VAR_0 == 32)
     {
       VAR_6->sig[VAR_1-1] = VAR_9;
       VAR_6->sig[VAR_1-2] = VAR_10;
     }
   else
     VAR_6->sig[VAR_1-1] = (VAR_9 << 31 << 1) | VAR_10;

   FUNC_2 (VAR_6);
 }
      else if (VAR_5->has_signed_zero)
 VAR_6->sign = VAR_11;
    }
  else if (VAR_12 == 32767 && (VAR_5->has_nans || VAR_5->has_inf))
    {



      VAR_9 &= 0x7fffffff;

      if (VAR_9 || VAR_10)
 {
   VAR_6->cl = VAR_3;
   VAR_6->sign = VAR_11;
   VAR_6->signalling = ((VAR_9 >> 30) & 1) ^ VAR_5->qnan_msb_set;
   if (VAR_0 == 32)
     {
       VAR_6->sig[VAR_1-1] = VAR_9;
       VAR_6->sig[VAR_1-2] = VAR_10;
     }
   else
     VAR_6->sig[VAR_1-1] = (VAR_9 << 31 << 1) | VAR_10;
 }
      else
 {
   VAR_6->cl = VAR_2;
   VAR_6->sign = VAR_11;
 }
    }
  else
    {
      VAR_6->cl = VAR_4;
      VAR_6->sign = VAR_11;
      FUNC_0 (VAR_6, VAR_12 - 16383 + 1);
      if (VAR_0 == 32)
 {
   VAR_6->sig[VAR_1-1] = VAR_9;
   VAR_6->sig[VAR_1-2] = VAR_10;
 }
      else
 VAR_6->sig[VAR_1-1] = (VAR_9 << 31 << 1) | VAR_10;
    }
}
