
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int type_info ;
typedef int _uw ;
struct TYPE_15__ {int data; int* next; int words_left; int bytes_left; } ;
typedef TYPE_4__ __gnu_unwind_state ;
typedef int _Unwind_State ;
typedef int _Unwind_Reason_Code ;
struct TYPE_14__ {int sp; int* bitpattern; } ;
struct TYPE_13__ {int* bitpattern; } ;
struct TYPE_12__ {int additional; int fnstart; scalar_t__ ehtp; } ;
struct TYPE_16__ {TYPE_3__ barrier_cache; TYPE_2__ cleanup_cache; TYPE_1__ pr_cache; } ;
typedef TYPE_5__ _Unwind_Control_Block ;
typedef int _Unwind_Context ;
struct TYPE_18__ {int length; int offset; } ;
struct TYPE_17__ {int length; int offset; } ;
typedef TYPE_6__ EHT32 ;
typedef TYPE_7__ EHT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_12 ;
 int FUNC_4 (TYPE_5__*,int *,void**) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int*) ;
 int VAR_13 ;

__attribute__((used)) static _Unwind_Reason_Code
FUNC_7 (_Unwind_State VAR_14,
   _Unwind_Control_Block *VAR_15,
   _Unwind_Context *VAR_16,
   int VAR_17)
{
  __gnu_unwind_state VAR_18;
  _uw *VAR_19;
  _uw VAR_20;
  _uw VAR_21;
  _uw VAR_22;
  int VAR_23 = 0;
  int VAR_24 = 0;
  int VAR_25 = VAR_14 & VAR_9;

  VAR_14 &= VAR_8;

  VAR_19 = (_uw *) VAR_15->pr_cache.ehtp;
  VAR_18.data = *(VAR_19++);
  VAR_18.next = VAR_19;
  if (VAR_17 == 0)
    {
      VAR_18.data <<= 8;
      VAR_18.words_left = 0;
      VAR_18.bytes_left = 3;
    }
  else
    {
      VAR_18.words_left = (VAR_18.data >> 16) & 0xff;
      VAR_18.data <<= 16;
      VAR_18.bytes_left = 2;
      VAR_19 += VAR_18.words_left;
    }


  if (VAR_14 == VAR_10)
    VAR_19 = (_uw *) VAR_15->cleanup_cache.bitpattern[0];

  if ((VAR_15->pr_cache.additional & 1) == 0)
    {

      while (*VAR_19)
 {
   _uw VAR_26;
   _uw VAR_27;

   if (VAR_17 == 2)
     {
       VAR_21 = ((EHT32 *) VAR_19)->length;
       VAR_20 = ((EHT32 *) VAR_19)->offset;
       VAR_19 += 2;
     }
   else
     {
       VAR_21 = ((EHT16 *) VAR_19)->length;
       VAR_20 = ((EHT16 *) VAR_19)->offset;
       VAR_19++;
     }

   VAR_27 = VAR_15->pr_cache.fnstart + (VAR_20 & ~1);
   VAR_26 = FUNC_0 (VAR_16, VAR_1);
   VAR_24 = (VAR_27 <= VAR_26 && VAR_26 < VAR_27 + (VAR_21 & ~1));

   switch (((VAR_20 & 1) << 1) | (VAR_21 & 1))
     {
     case 0:

       if (VAR_14 != VAR_11
    && VAR_24)
  {

    _uw VAR_28;


    VAR_28 = FUNC_6 (VAR_19);
    VAR_19++;

    VAR_15->cleanup_cache.bitpattern[0] = (_uw) VAR_19;
    if (!FUNC_3 (VAR_15))
      return VAR_4;

    FUNC_1 (VAR_16, VAR_1, VAR_28);
    return VAR_6;
  }

       VAR_19++;
       break;

     case 1:

       if (VAR_14 == VAR_11)
  {
    if (VAR_24)
      {

        _uw VAR_29;
        void *VAR_30;


        if (VAR_19[1] == (_uw) -2)
   return VAR_4;


        VAR_30 = (void *)(VAR_15 + 1);
        if (VAR_19[1] != (_uw) -1)
   {

     VAR_29 = FUNC_2 ((_uw) &VAR_19[1]);
     if (!FUNC_4 (VAR_15, (type_info *) VAR_29,
       &VAR_30))
       VAR_30 = (void *)0;
   }

        if (VAR_30)
   {
     VAR_15->barrier_cache.sp =
       FUNC_0 (VAR_16, VAR_2);
     VAR_15->barrier_cache.bitpattern[0] = (_uw) VAR_30;
     VAR_15->barrier_cache.bitpattern[1] = (_uw) VAR_19;
     return VAR_5;
   }
      }

  }
       else if (VAR_15->barrier_cache.sp == FUNC_0 (VAR_16, VAR_2)
         && VAR_15->barrier_cache.bitpattern[1] == (_uw) VAR_19)
  {

    _uw VAR_31;


    VAR_31 = FUNC_6 (VAR_19);
    FUNC_1 (VAR_16, VAR_1, VAR_31);
    FUNC_1 (VAR_16, 0, (_uw) VAR_15);
    return VAR_6;
  }

       VAR_19 += 2;
       break;

     case 2:
       VAR_22 = VAR_19[0] & 0x7fffffff;

       if (VAR_14 == VAR_11)
  {
    if (VAR_24 && (!VAR_25 || !VAR_22))
      {

        _uw VAR_32;
        _uw VAR_33;
        void *VAR_34;

        for (VAR_32 = 0; VAR_32 < VAR_22; VAR_32++)
   {
     VAR_34 = (void *)(VAR_15 + 1);
     VAR_33 = FUNC_2 ((_uw) &VAR_19[VAR_32 + 1]);
     if (FUNC_4 (VAR_15, (type_info *) VAR_33,
      &VAR_34))
       break;
   }

        if (VAR_32 == VAR_22)
   {

     VAR_15->barrier_cache.sp =
       FUNC_0 (VAR_16, VAR_2);
     VAR_15->barrier_cache.bitpattern[0] = (_uw) VAR_34;
     VAR_15->barrier_cache.bitpattern[1] = (_uw) VAR_19;
     return VAR_5;
   }
      }

  }
       else if (VAR_15->barrier_cache.sp == FUNC_0 (VAR_16, VAR_2)
         && VAR_15->barrier_cache.bitpattern[1] == (_uw) VAR_19)
  {

    _uw VAR_35;

    VAR_15->barrier_cache.bitpattern[1] = VAR_22;
    VAR_15->barrier_cache.bitpattern[2] = 0;
    VAR_15->barrier_cache.bitpattern[3] = 4;
    VAR_15->barrier_cache.bitpattern[4] = (_uw) &VAR_19[1];

    if (VAR_19[0] & VAR_13)
      VAR_23 = 1;
    else
      {
        VAR_19 += VAR_22 + 1;

        VAR_35 = FUNC_6 (VAR_19);
        VAR_19++;
        FUNC_1 (VAR_16, VAR_1, VAR_35);
        FUNC_1 (VAR_16, 0, (_uw) VAR_15);
        return VAR_6;
      }
  }
       if (VAR_19[0] & VAR_13)
  VAR_19++;
       VAR_19 += VAR_22 + 1;
       break;

     default:

       return VAR_4;
     }

 }
    }

  if (FUNC_5 (VAR_16, &VAR_18) != VAR_7)
    return VAR_4;

  if (VAR_23)
    {

      FUNC_1 (VAR_16, VAR_0, FUNC_0 (VAR_16, VAR_1));
      FUNC_1 (VAR_16, VAR_1, (_uw) &VAR_12);
      return VAR_6;
    }

  return VAR_3;
}
