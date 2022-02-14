
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * rtx ;
struct TYPE_3__ {int saved_args; int frame; int outgoing_args; int saved_regs; } ;
typedef TYPE_1__ arm_stack_offsets ;
typedef int FILE ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned long FUNC_5 () ;
 unsigned long FUNC_6 () ;
 scalar_t__ VAR_24 ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int,int,int) ;
 int FUNC_10 (int *,char*,int,...) ;
 int * VAR_25 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned long) ;
 scalar_t__* VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_13 (unsigned long) ;
 int * FUNC_14 (int ,char*) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (char*,int **) ;
 int FUNC_17 (int *,char*,int,unsigned long) ;
 scalar_t__* VAR_31 ;
 scalar_t__ VAR_32 ;
 int * VAR_33 ;
 scalar_t__ FUNC_18 (int ,int *) ;

const char *
FUNC_19 (rtx VAR_34)
{
  int VAR_35;
  unsigned long VAR_36;
  unsigned long VAR_37;


  int VAR_38 = 0;
  rtx VAR_39[3];
  FILE * VAR_40 = VAR_25;
  unsigned int VAR_41 = 0;
  int VAR_42 = (VAR_34 == ((void*)0));
  int VAR_43;
  arm_stack_offsets *VAR_44;



  if (FUNC_18 (VAR_2, VAR_34) && VAR_32)
    return "";

  VAR_37 = FUNC_6 ();

  if (FUNC_3 (VAR_37))

    return "";

  if (FUNC_4 (VAR_37) && VAR_18)
    {
      rtx VAR_45;


      VAR_45 = FUNC_14 (VAR_16, VAR_14 ? "abort(PLT)" : "abort");
      FUNC_11 (VAR_45);
      FUNC_16 ("bl\t%a0", &VAR_45);

      return "";
    }



  FUNC_13 (!VAR_28 || VAR_42);

  VAR_44 = FUNC_7 ();
  VAR_36 = FUNC_5 ();

  if (VAR_20)
    VAR_41 = FUNC_12 (VAR_36);

  VAR_38 = VAR_44->saved_args;

  for (VAR_35 = 0; VAR_35 <= VAR_9; VAR_35++)
    if (VAR_36 & (1 << VAR_35))
      VAR_38 += 4;

  if (VAR_30)
    {

      int VAR_46 = VAR_44->frame;

      if (VAR_24 == VAR_6)
 {
   for (VAR_35 = VAR_10; VAR_35 >= VAR_3; VAR_35--)
     if (VAR_31[VAR_35] && !VAR_26[VAR_35])
       {
  VAR_38 += 12;
  FUNC_10 (VAR_40, "\tldfe\t%r, [%r, #-%d]\n",
        VAR_35, VAR_7, VAR_38 - VAR_46);
       }
 }
      else
 {
   VAR_43 = VAR_10;

   for (VAR_35 = VAR_10; VAR_35 >= VAR_3; VAR_35--)
     {
       if (VAR_31[VAR_35] && !VAR_26[VAR_35])
  {
    VAR_38 += 12;


    if (VAR_43 - VAR_35 == 3)
      {
        FUNC_10 (VAR_40, "\tlfm\t%r, 4, [%r, #-%d]\n",
              VAR_35, VAR_7, VAR_38 - VAR_46);
        VAR_43 = VAR_35 - 1;
      }
  }
       else
  {
    if (VAR_35 != VAR_43)
      FUNC_10 (VAR_40, "\tlfm\t%r, %d, [%r, #-%d]\n",
     VAR_35 + 1, VAR_43 - VAR_35,
     VAR_7, VAR_38 - VAR_46);
    VAR_43 = VAR_35 - 1;
  }
     }


   if (VAR_35 != VAR_43)
     FUNC_10 (VAR_40, "\tlfm\t%r, %d, [%r, #-%d]\n",
    VAR_35 + 1, VAR_43 - VAR_35,
    VAR_7, VAR_38 - VAR_46);
 }

      if (VAR_19 && VAR_21)
 {
   int VAR_47;



   VAR_47 = FUNC_8 ();

   if (VAR_47 > 0)
     {
       VAR_38 += VAR_47;
       FUNC_10 (VAR_40, "\tsub\t%r, %r, #%d\n", VAR_8,
      VAR_7, VAR_38 - VAR_46);
     }
   VAR_43 = VAR_5;
   for (VAR_35 = VAR_5; VAR_35 < VAR_12; VAR_35 += 2)
     {
       if ((!VAR_31[VAR_35] || VAR_26[VAR_35])
    && (!VAR_31[VAR_35 + 1] || VAR_26[VAR_35 + 1]))
  {
    if (VAR_43 != VAR_35)
      FUNC_9 (VAR_40, VAR_8,
          (VAR_43 - VAR_5) / 2,
          (VAR_35 - VAR_43) / 2);
    VAR_43 = VAR_35 + 2;
  }
     }
   if (VAR_43 != VAR_35)
     FUNC_9 (VAR_40, VAR_8,
         (VAR_43 - VAR_5) / 2,
         (VAR_35 - VAR_43) / 2);
 }

      if (VAR_20)
 {







   VAR_41 += (VAR_41 % 2 ? 2 : 1);

   for (VAR_35 = VAR_11; VAR_35 >= VAR_4; VAR_35--)
     if (VAR_31[VAR_35] && !VAR_26[VAR_35])
       {
  FUNC_10 (VAR_40, "\twldrd\t%r, [%r, #-%d]\n",
        VAR_35, VAR_7, VAR_41 * 4);
  VAR_41 += 2;
       }
 }





      FUNC_13 (VAR_36 & (1 << VAR_8));
      VAR_36 &= ~ (1 << VAR_8);
      VAR_36 |= (1 << VAR_17);





      if (VAR_42
   && FUNC_0 (VAR_37) == VAR_1
   && !VAR_28)


 VAR_36 &= ~ (1 << VAR_13);
      else
 VAR_36 &= ~ (1 << VAR_15);
      if (VAR_44->outgoing_args != (1 + (int) FUNC_12 (VAR_36))
   || VAR_27)
 FUNC_10 (VAR_40, "\tsub\t%r, %r, #%d\n", VAR_17, VAR_7,
       4 * FUNC_12 (VAR_36));
      FUNC_17 (VAR_40, "ldmfd\t%r", VAR_17, VAR_36);

      if (FUNC_2 (VAR_37))


 FUNC_17 (VAR_40, "ldmfd\t%r!", VAR_17, 1 << VAR_8);
    }
  else
    {

      if (VAR_44->outgoing_args != VAR_44->saved_regs)
 {
   VAR_39[0] = VAR_39[1] = VAR_33;
   VAR_39[2] = FUNC_1 (VAR_44->outgoing_args - VAR_44->saved_regs);
   FUNC_15 (VAR_39);
 }

      if (VAR_24 == VAR_6)
 {
   for (VAR_35 = VAR_3; VAR_35 <= VAR_10; VAR_35++)
     if (VAR_31[VAR_35] && !VAR_26[VAR_35])
       FUNC_10 (VAR_40, "\tldfe\t%r, [%r], #12\n",
      VAR_35, VAR_17);
 }
      else
 {
   VAR_43 = VAR_3;

   for (VAR_35 = VAR_3; VAR_35 <= VAR_10; VAR_35++)
     {
       if (VAR_31[VAR_35] && !VAR_26[VAR_35])
  {
    if (VAR_35 - VAR_43 == 3)
      {
        FUNC_10 (VAR_40, "\tlfmfd\t%r, 4, [%r]!\n",
       VAR_43, VAR_17);
        VAR_43 = VAR_35 + 1;
      }
  }
       else
  {
    if (VAR_35 != VAR_43)
      FUNC_10 (VAR_40, "\tlfmfd\t%r, %d, [%r]!\n",
     VAR_43, VAR_35 - VAR_43,
     VAR_17);

    VAR_43 = VAR_35 + 1;
  }
     }


   if (VAR_35 != VAR_43)
     FUNC_10 (VAR_40, "\tlfmfd\t%r, %d, [%r]!\n",
    VAR_43, VAR_35 - VAR_43, VAR_17);
 }

      if (VAR_19 && VAR_21)
 {
   VAR_43 = VAR_5;
   for (VAR_35 = VAR_5; VAR_35 < VAR_12; VAR_35 += 2)
     {
       if ((!VAR_31[VAR_35] || VAR_26[VAR_35])
    && (!VAR_31[VAR_35 + 1] || VAR_26[VAR_35 + 1]))
  {
    if (VAR_43 != VAR_35)
      FUNC_9 (VAR_40, VAR_17,
          (VAR_43 - VAR_5) / 2,
          (VAR_35 - VAR_43) / 2);
    VAR_43 = VAR_35 + 2;
  }
     }
   if (VAR_43 != VAR_35)
     FUNC_9 (VAR_40, VAR_17,
         (VAR_43 - VAR_5) / 2,
         (VAR_35 - VAR_43) / 2);
 }
      if (VAR_20)
 for (VAR_35 = VAR_4; VAR_35 <= VAR_11; VAR_35++)
   if (VAR_31[VAR_35] && !VAR_26[VAR_35])
     FUNC_10 (VAR_40, "\twldrd\t%r, [%r], #8\n", VAR_35, VAR_17);


      if (FUNC_0 (VAR_37) == VAR_1
   && VAR_42
   && VAR_29 == 0
   && VAR_36 & (1 << VAR_13)
   && !VAR_28)
 {
   VAR_36 &= ~ (1 << VAR_13);
   VAR_36 |= (1 << VAR_15);
 }



      if (VAR_36 == (1 << VAR_13))
 {
   FUNC_10 (VAR_40, "\tldr\t%r, [%r], #4\n", VAR_13, VAR_17);
 }
      else if (VAR_36)
 {
   if (VAR_36 & (1 << VAR_17))




     FUNC_17 (VAR_40, "ldmfd\t%r", VAR_17, VAR_36);
   else
     FUNC_17 (VAR_40, "ldmfd\t%r!", VAR_17, VAR_36);
 }

      if (VAR_29)
 {

   VAR_39[0] = VAR_39[1] = VAR_33;
   VAR_39[2] = FUNC_1 (VAR_29);
   FUNC_15 (VAR_39);
 }
    }


  if (!VAR_42 || VAR_36 & (1 << VAR_15))
    return "";


  if (VAR_28)
    FUNC_10 (VAR_40, "\tadd\t%r, %r, %r\n", VAR_17, VAR_17,
   VAR_0);


  switch ((int) FUNC_0 (VAR_37))
    {
    case 128:
    case 130:
      FUNC_10 (VAR_40, "\tsubs\t%r, %r, #4\n", VAR_15, VAR_13);
      break;

    case 131:
      FUNC_10 (VAR_40, "\tmovs\t%r, %r\n", VAR_15, VAR_13);
      break;

    case 129:
      FUNC_10 (VAR_40, "\tbx\t%r\n", VAR_13);
      break;

    default:
      if (VAR_23 || VAR_22)
 FUNC_10 (VAR_40, "\tbx\t%r\n", VAR_13);
      else
 FUNC_10 (VAR_40, "\tmov\t%r, %r\n", VAR_15, VAR_13);
      break;
    }

  return "";
}
