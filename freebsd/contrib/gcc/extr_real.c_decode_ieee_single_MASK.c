
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct real_format {unsigned long qnan_msb_set; scalar_t__ has_inf; scalar_t__ has_nans; scalar_t__ has_signed_zero; scalar_t__ has_denorm; } ;
struct TYPE_6__ {int sign; unsigned long* sig; unsigned long signalling; void* cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void
FUNC_3 (const struct real_format *VAR_6, REAL_VALUE_TYPE *VAR_7,
      const long *VAR_8)
{
  unsigned long VAR_9 = VAR_8[0] & 0xffffffff;
  bool VAR_10 = (VAR_9 >> 31) & 1;
  int VAR_11 = (VAR_9 >> 23) & 0xff;

  FUNC_1 (VAR_7, 0, sizeof (*VAR_7));
  VAR_9 <<= VAR_0 - 24;
  VAR_9 &= ~VAR_2;

  if (VAR_11 == 0)
    {
      if (VAR_9 && VAR_6->has_denorm)
 {
   VAR_7->cl = VAR_5;
   VAR_7->sign = VAR_10;
   FUNC_0 (VAR_7, -126);
   VAR_7->sig[VAR_1-1] = VAR_9 << 1;
   FUNC_2 (VAR_7);
 }
      else if (VAR_6->has_signed_zero)
 VAR_7->sign = VAR_10;
    }
  else if (VAR_11 == 255 && (VAR_6->has_nans || VAR_6->has_inf))
    {
      if (VAR_9)
 {
   VAR_7->cl = VAR_4;
   VAR_7->sign = VAR_10;
   VAR_7->signalling = (((VAR_9 >> (VAR_0 - 2)) & 1)
      ^ VAR_6->qnan_msb_set);
   VAR_7->sig[VAR_1-1] = VAR_9;
 }
      else
 {
   VAR_7->cl = VAR_3;
   VAR_7->sign = VAR_10;
 }
    }
  else
    {
      VAR_7->cl = VAR_5;
      VAR_7->sign = VAR_10;
      FUNC_0 (VAR_7, VAR_11 - 127 + 1);
      VAR_7->sig[VAR_1-1] = VAR_9 | VAR_2;
    }
}
