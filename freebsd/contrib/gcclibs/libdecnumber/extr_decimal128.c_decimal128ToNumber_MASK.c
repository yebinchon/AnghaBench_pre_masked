
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_10__ {int* bytes; } ;
typedef TYPE_1__ decimal128 ;
struct TYPE_11__ {int bits; scalar_t__ exponent; } ;
typedef TYPE_2__ decNumber ;
typedef int Int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int,TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;

decNumber *
FUNC_4 (const decimal128 * VAR_8, decNumber * VAR_9)
{
  uInt VAR_10;
  decimal128 VAR_11;
  uInt VAR_12 = VAR_8->bytes[0] & 0x7f;
  FUNC_1 (VAR_9);

  if (FUNC_3 (VAR_8))
    VAR_9->bits = VAR_6;

  if (VAR_12 >= 0x78)
    {
      if ((VAR_12 & 0x7c) == (VAR_2 & 0x7c))
 VAR_9->bits |= VAR_4;
      else if ((VAR_12 & 0x7e) == (VAR_3 & 0x7e))
 VAR_9->bits |= VAR_5;
      else
 VAR_9->bits |= VAR_7;
      VAR_10 = 0;
    }
  else
    {
      uInt VAR_13 = VAR_12 >> 2;
      uInt VAR_14;

      if (VAR_13 >= 0x18)
 {
   VAR_10 = 8 + (VAR_13 & 0x01);
   VAR_14 = (VAR_13 & 0x06) << 11;
 }
      else
 {
   VAR_10 = VAR_13 & 0x07;
   VAR_14 = (VAR_13 & 0x18) << 9;
 }
      VAR_9->exponent = VAR_14 + FUNC_2 (VAR_8) - VAR_0;
    }


  if (!(VAR_9->bits & VAR_4))
    {
      Int VAR_15 = VAR_1 / 3;
      Int VAR_16 = 0;
      if (VAR_10 != 0)
 {


   VAR_11 = *VAR_8;
   VAR_11.bytes[0] = 0;
   VAR_11.bytes[1] = 0;
   VAR_11.bytes[2] &= 0x3f;
   VAR_11.bytes[1] |= (VAR_10 >> 2);
   VAR_11.bytes[2] |= (VAR_10 << 6);
   VAR_16++;
   VAR_8 = &VAR_11;
 }
      FUNC_0 (VAR_8->bytes, sizeof (VAR_8->bytes), VAR_9, VAR_15,
      VAR_16);
    }


  return VAR_9;
}
