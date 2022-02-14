
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_15__ ;


typedef scalar_t__ valueT ;
struct TYPE_33__ {scalar_t__ X_op; scalar_t__ X_add_number; TYPE_3__* X_op_symbol; TYPE_3__* X_add_symbol; } ;
struct TYPE_32__ {int sy_resolved; int sy_resolving; TYPE_2__* sy_frag; TYPE_8__ sy_value; int sy_mri_common; TYPE_1__* bsym; } ;
typedef TYPE_3__ symbolS ;
struct local_symbol {scalar_t__ lsy_value; } ;
typedef scalar_t__ segT ;
typedef int operatorT ;
typedef int offsetT ;
struct TYPE_31__ {scalar_t__ fr_address; } ;
struct TYPE_30__ {int flags; } ;
struct TYPE_29__ {scalar_t__ fr_address; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,unsigned int,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_16 (TYPE_3__*,char**,unsigned int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_17 (int ,char*,char*) ;
 TYPE_3__* FUNC_18 (struct local_symbol*) ;
 TYPE_15__* FUNC_19 (struct local_symbol*) ;
 int FUNC_20 (struct local_symbol*) ;
 scalar_t__ FUNC_21 (struct local_symbol*) ;
 int FUNC_22 (TYPE_8__*) ;
 int FUNC_23 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int VAR_6 ;
 TYPE_3__* FUNC_24 (char*,scalar_t__,int ,int *) ;
 char* FUNC_25 (TYPE_8__*) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_29 (TYPE_3__*) ;
 int VAR_8 ;

valueT
FUNC_30 (symbolS *VAR_9)
{
  int VAR_10;
  valueT VAR_11 = 0;
  segT VAR_12;

  if (FUNC_1 (VAR_9))
    {
      struct local_symbol *VAR_13 = (struct local_symbol *) VAR_9;

      VAR_11 = VAR_13->lsy_value;
      if (FUNC_21 (VAR_13))
 return VAR_11;

      VAR_11 += FUNC_19 (VAR_13)->fr_address / VAR_2;

      if (VAR_5)
 {
   VAR_13->lsy_value = VAR_11;
   FUNC_20 (VAR_13);
 }

      return VAR_11;
    }

  if (VAR_9->sy_resolved)
    {
      if (VAR_9->sy_value.X_op == 148)
 return (valueT) VAR_9->sy_value.X_add_number;
      else
 return 0;
    }

  VAR_10 = 0;
  VAR_12 = FUNC_3 (VAR_9);

  if (VAR_9->sy_resolving)
    {
      if (VAR_5)
 FUNC_12 (FUNC_10("symbol definition loop encountered at `%s'"),
  FUNC_2 (VAR_9));
      VAR_11 = 0;
      VAR_10 = 1;
    }
  else
    {
      symbolS *VAR_14, *VAR_15;
      offsetT VAR_16, VAR_17;
      segT VAR_18, VAR_19;
      operatorT VAR_20;
      int VAR_21;

      VAR_9->sy_resolving = 1;


      VAR_14 = VAR_9->sy_value.X_add_symbol;
      VAR_15 = VAR_9->sy_value.X_op_symbol;
      VAR_11 = VAR_9->sy_value.X_add_number;
      VAR_20 = VAR_9->sy_value.X_op;

      switch (VAR_20)
 {
 default:
   FUNC_0 (VAR_20);
   break;

 case 156:
   VAR_11 = 0;


 case 148:
   VAR_11 += VAR_9->sy_frag->fr_address / VAR_2;
   if (VAR_12 == VAR_4)
     VAR_12 = VAR_3;


 case 133:
   VAR_10 = 1;
   break;

 case 130:
 case 129:
   VAR_16 = FUNC_30 (VAR_14);
   VAR_18 = FUNC_3 (VAR_14);
   if (VAR_5)
     VAR_9->sy_value.X_op_symbol = ((void*)0);

 do_symbol:
   if (FUNC_7 (VAR_9))
     {
       FUNC_14 (VAR_11 == 0);
       if (FUNC_7 (VAR_14))
  {
    FUNC_14 (VAR_14->sy_value.X_op == 130
     && VAR_14->sy_value.X_add_number == 0);
    VAR_14 = VAR_14->sy_value.X_add_symbol;
    FUNC_14 (! FUNC_7 (VAR_14));
    VAR_9->sy_value.X_add_symbol = VAR_14;
  }
     }

   if (VAR_9->sy_mri_common)
     {



       VAR_10 = FUNC_26 (VAR_14);
       break;
     }

   if (VAR_5 && VAR_11 == 0)
     {
       if (FUNC_1 (VAR_14))
  VAR_14 = FUNC_18 ((struct local_symbol *)
         VAR_14);
       FUNC_15 (VAR_9, VAR_14);
     }







   if (! FUNC_5 (VAR_14)



       || FUNC_4 (VAR_14))
     {
       if (VAR_5)
  {
    VAR_9->sy_value.X_op = 130;
    VAR_9->sy_value.X_add_symbol = VAR_14;
    VAR_9->sy_value.X_add_number = VAR_11;

    VAR_9->sy_value.X_op_symbol = VAR_14;
    VAR_12 = VAR_18;
  }
       VAR_11 = 0;
       VAR_10 = FUNC_26 (VAR_14);
       VAR_9->sy_resolving = 0;
       goto exit_dont_set_value;
     }
   else if (VAR_5
     && ((VAR_12 == VAR_4 && VAR_18 != VAR_4)
         || FUNC_27 (VAR_9)))
     {





       VAR_9->sy_value.X_op = 130;
       VAR_9->sy_value.X_add_symbol = VAR_14;
       VAR_9->sy_value.X_add_number = VAR_11;
       VAR_9->sy_value.X_op_symbol = VAR_14;
       VAR_12 = VAR_18;
       VAR_11 += VAR_9->sy_frag->fr_address + VAR_16;
       VAR_10 = FUNC_26 (VAR_14);
       VAR_9->sy_resolving = 0;
       goto exit_dont_set_value;
     }
   else
     {
       VAR_11 += VAR_9->sy_frag->fr_address + VAR_16;
       if (VAR_12 == VAR_4 || VAR_12 == VAR_7)
  VAR_12 = VAR_18;
     }

   VAR_10 = FUNC_26 (VAR_14);
   if (FUNC_7 (VAR_9))
     goto exit_dont_set_value;
   break;

 case 128:
 case 150:
 case 139:
   VAR_16 = FUNC_30 (VAR_14);
   VAR_18 = FUNC_3 (VAR_14);





   if (VAR_20 != 139 && VAR_18 != VAR_3
       && VAR_5)
     FUNC_23 (VAR_9, VAR_14, ((void*)0));

   if (VAR_12 == VAR_4 || VAR_12 == VAR_7)
     VAR_12 = VAR_3;

   if (VAR_20 == 128)
     VAR_16 = -VAR_16;
   else if (VAR_20 == 139)
     VAR_16 = !VAR_16;
   else
     VAR_16 = ~VAR_16;

   VAR_11 += VAR_16 + VAR_9->sy_frag->fr_address;

   VAR_10 = FUNC_26 (VAR_14);
   break;

 case 135:
 case 147:
 case 136:
 case 141:
 case 132:
 case 151:
 case 149:
 case 152:
 case 153:
 case 155:
 case 131:
 case 146:
 case 134:
 case 137:
 case 142:
 case 145:
 case 144:
 case 140:
 case 138:
   VAR_16 = FUNC_30 (VAR_14);
   VAR_17 = FUNC_30 (VAR_15);
   VAR_18 = FUNC_3 (VAR_14);
   VAR_19 = FUNC_3 (VAR_15);



   if (VAR_20 == 155)
     {
       if (VAR_19 == VAR_3)
  {
    VAR_11 += VAR_17;
    goto do_symbol;
  }
       else if (VAR_18 == VAR_3)
  {
    VAR_11 += VAR_16;
    VAR_14 = VAR_15;
    VAR_16 = VAR_17;
    VAR_18 = VAR_19;
    goto do_symbol;
  }
     }
   else if (VAR_20 == 131)
     {
       if (VAR_19 == VAR_3)
  {
    VAR_11 -= VAR_17;
    goto do_symbol;
  }
     }

   VAR_21 = 1;







   if (!(VAR_18 == VAR_3
     && VAR_19 == VAR_3)
       && !(VAR_20 == 146 || VAR_20 == 134)
       && !((VAR_20 == 131
      || VAR_20 == 137 || VAR_20 == 142 || VAR_20 == 145 || VAR_20 == 144)
     && VAR_18 == VAR_19
     && (VAR_18 != VAR_7
         || VAR_14 == VAR_15)))
     {


       if (VAR_5)
  FUNC_23 (VAR_9, VAR_14, VAR_15);




       else
  VAR_21 = 0;
     }

   if (VAR_21
       && (VAR_12 == VAR_4 || VAR_12 == VAR_7))
     VAR_12 = VAR_3;


   if ((VAR_20 == 147 || VAR_20 == 136) && VAR_17 == 0)
     {


       if (VAR_19 == VAR_3 && VAR_5)
  {
    char *VAR_22;
    unsigned int VAR_23;

    if (FUNC_16 (VAR_9, &VAR_22, &VAR_23))
      FUNC_13 (VAR_22, VAR_23, FUNC_10("division by zero"));
    else
      FUNC_12 (FUNC_10("division by zero when setting `%s'"),
       FUNC_2 (VAR_9));
  }

       VAR_17 = 1;
     }

   switch (VAR_9->sy_value.X_op)
     {
     case 135: VAR_16 *= VAR_17; break;
     case 147: VAR_16 /= VAR_17; break;
     case 136: VAR_16 %= VAR_17; break;
     case 141: VAR_16 <<= VAR_17; break;
     case 132: VAR_16 >>= VAR_17; break;
     case 151: VAR_16 |= VAR_17; break;
     case 149: VAR_16 |= ~VAR_17; break;
     case 152: VAR_16 ^= VAR_17; break;
     case 153: VAR_16 &= VAR_17; break;
     case 155: VAR_16 += VAR_17; break;
     case 131: VAR_16 -= VAR_17; break;
     case 146:
     case 134:
       VAR_16 = (VAR_16 == VAR_17 && VAR_18 == VAR_19
        && (VAR_18 != VAR_7
     || VAR_14 == VAR_15)
        ? ~ (offsetT) 0 : 0);
       if (VAR_9->sy_value.X_op == 134)
  VAR_16 = ~VAR_16;
       break;
     case 137: VAR_16 = VAR_16 < VAR_17 ? ~ (offsetT) 0 : 0; break;
     case 142: VAR_16 = VAR_16 <= VAR_17 ? ~ (offsetT) 0 : 0; break;
     case 145: VAR_16 = VAR_16 >= VAR_17 ? ~ (offsetT) 0 : 0; break;
     case 144: VAR_16 = VAR_16 > VAR_17 ? ~ (offsetT) 0 : 0; break;
     case 140: VAR_16 = VAR_16 && VAR_17; break;
     case 138: VAR_16 = VAR_16 || VAR_17; break;
     default: FUNC_11 ();
     }

   VAR_11 += VAR_9->sy_frag->fr_address + VAR_16;
   if (VAR_12 == VAR_4 || VAR_12 == VAR_7)
     {
       if (VAR_18 == VAR_7
    || VAR_19 == VAR_7)
  VAR_12 = VAR_7;
       else if (VAR_18 == VAR_3)
  VAR_12 = VAR_19;
       else
  VAR_12 = VAR_18;
     }
   VAR_10 = (FUNC_26 (VAR_14)
        && FUNC_26 (VAR_15));
   break;

 case 154:
 case 143:





   break;
 }

      VAR_9->sy_resolving = 0;
    }

  if (VAR_5)
    FUNC_9 (VAR_9, VAR_11);

exit_dont_set_value:


    FUNC_8 (VAR_9, VAR_12);


  if (VAR_5)
    {
      if (VAR_10)
 VAR_9->sy_resolved = 1;
      else if (FUNC_3 (VAR_9) != VAR_4)
 {
   FUNC_12 (FUNC_10("can't resolve value for symbol `%s'"),
    FUNC_2 (VAR_9));
   VAR_9->sy_resolved = 1;
 }
    }

  return VAR_11;
}
