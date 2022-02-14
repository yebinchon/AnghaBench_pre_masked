
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uInt ;
typedef void* uByte ;
struct TYPE_18__ {int* bytes; } ;
typedef TYPE_1__ decimal128 ;
struct TYPE_19__ {int bits; scalar_t__ exponent; int digits; scalar_t__* lsu; } ;
typedef TYPE_2__ decNumber ;
struct TYPE_20__ {int status; int round; } ;
typedef TYPE_3__ decContext ;
typedef scalar_t__ Int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__ const*,int*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;

decimal128 *
FUNC_8 (decimal128 * VAR_14, const decNumber * VAR_15, decContext * VAR_16)
{
  uInt VAR_17 = 0;
  Int VAR_18 = 0;
  decNumber VAR_19;
  decContext VAR_20;
  uByte VAR_21 = VAR_15->bits & VAR_10;
  uInt VAR_22, VAR_23;




  if (!(VAR_15->bits & VAR_11))
    {
      Int VAR_24 = VAR_15->exponent + VAR_15->digits - 1;
      if (VAR_15->digits > VAR_4
   || VAR_24 > VAR_2
   || VAR_24 < VAR_3)
 {
   FUNC_1 (&VAR_20, VAR_13);
   VAR_20.round = VAR_16->round;
   FUNC_5 (&VAR_19, VAR_15, &VAR_20);

   VAR_17 |= VAR_20.status;
   VAR_15 = &VAR_19;
 }


    }

  FUNC_0 (VAR_14);
  if (VAR_15->bits & VAR_11)
    {
      uByte VAR_25;
      if (VAR_15->bits & VAR_8)
 VAR_25 = VAR_5;
      else
 {
   if ((*VAR_15->lsu != 0 || VAR_15->digits > 1)
       && (VAR_15->digits < VAR_4))
     {
       FUNC_3 (VAR_15, VAR_14->bytes, sizeof (VAR_14->bytes), 0);
     }
   if (VAR_15->bits & VAR_9)
     VAR_25 = VAR_6;
   else
     VAR_25 = VAR_7;
 }
      VAR_14->bytes[0] = VAR_25;
    }
  else if (FUNC_4 (VAR_15))
    {

      if (VAR_15->exponent < -VAR_0)
 {
   VAR_23 = 0;
   VAR_17 |= VAR_12;
 }
      else
 {
   VAR_23 = VAR_15->exponent + VAR_0;
   if (VAR_23 > VAR_1)
     {
       VAR_23 = VAR_1;
       VAR_17 |= VAR_12;
     }
 }
      VAR_22 = (VAR_23 >> 9) & 0x18;
      VAR_14->bytes[0] = (uByte) (VAR_22 << 2);
      VAR_23 &= 0xfff;
      FUNC_6 (VAR_14, VAR_23);
    }
  else
    {
      uInt VAR_26;


      VAR_23 = (uInt) (VAR_15->exponent + VAR_0);

      if (VAR_23 > VAR_1)
 {
   VAR_18 = VAR_23 - VAR_1;
   VAR_23 = VAR_1;
   VAR_17 |= VAR_12;
 }

      FUNC_3 (VAR_15, VAR_14->bytes, sizeof (VAR_14->bytes), VAR_18);


      VAR_26 = ((unsigned) VAR_14->bytes[1] << 2) & 0x0c;
      VAR_26 |= ((unsigned) VAR_14->bytes[2] >> 6);
      VAR_14->bytes[1] &= 0xfc;
      VAR_14->bytes[2] &= 0x3f;


      if (VAR_26 >= 8)
 VAR_22 = 0x18 | (VAR_26 & 0x01) | ((VAR_23 >> 11) & 0x06);
      else
 VAR_22 = (VAR_26 & 0x07) | ((VAR_23 >> 9) & 0x18);
      VAR_14->bytes[0] = (uByte) (VAR_22 << 2);
      VAR_23 &= 0xfff;
      FUNC_6 (VAR_14, VAR_23);
    }

  if (VAR_21)
    FUNC_7 (VAR_14, 1);
  if (VAR_17 != 0)
    FUNC_2 (VAR_16, VAR_17);


  return VAR_14;
}
