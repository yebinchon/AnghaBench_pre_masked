
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


struct real_format {int b; int p; int log2_b; int emin; int emax; int has_denorm; int has_signed_zero; } ;
struct TYPE_20__ {int cl; unsigned long* sig; int sign; scalar_t__ decimal; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_5 (struct real_format const*,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int) ;




 int FUNC_11 (TYPE_1__*,int) ;
 unsigned long FUNC_12 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_14 (const struct real_format *VAR_5, REAL_VALUE_TYPE *VAR_6)
{
  int VAR_7, VAR_8, VAR_9, VAR_10;
  unsigned long VAR_11;
  bool VAR_12, VAR_13;
  int VAR_14, VAR_15;

  if (VAR_6->decimal)
    {
      if (VAR_5->b == 10)
 {
   FUNC_5 (VAR_5, VAR_6);
   return;
 }




      FUNC_4 (VAR_6, VAR_0, VAR_6);
    }

  VAR_7 = VAR_5->p * VAR_5->log2_b;
  VAR_14 = (VAR_5->emin - 1) * VAR_5->log2_b;
  VAR_15 = VAR_5->emax * VAR_5->log2_b;

  VAR_8 = VAR_2 - VAR_7;
  switch (VAR_6->cl)
    {
    underflow:
      FUNC_9 (VAR_6, VAR_6->sign);
    case 128:
      if (!VAR_5->has_signed_zero)
 VAR_6->sign = 0;
      return;

    overflow:
      FUNC_8 (VAR_6, VAR_6->sign);
    case 131:
      return;

    case 130:
      FUNC_3 (VAR_6, VAR_8);
      return;

    case 129:
      break;

    default:
      FUNC_7 ();
    }



  if (VAR_5->log2_b != 1)
    {
      int VAR_16;

      FUNC_6 (VAR_5->b != 10);
      VAR_16 = FUNC_0 (VAR_6) & (VAR_5->log2_b - 1);
      if (VAR_16)
 {
   VAR_16 = VAR_5->log2_b - VAR_16;
   VAR_6->sig[0] |= FUNC_12 (VAR_6, VAR_6, VAR_16);
   FUNC_1 (VAR_6, FUNC_0 (VAR_6) + VAR_16);
 }
    }



  if (FUNC_0 (VAR_6) > VAR_15)
    goto overflow;
  else if (FUNC_0 (VAR_6) <= VAR_14)
    {
      int VAR_17;

      if (!VAR_5->has_denorm)
 {

   if (FUNC_0 (VAR_6) < VAR_14)
     goto underflow;
 }
      else
 {
   VAR_17 = VAR_14 - FUNC_0 (VAR_6) + 1;
   if (VAR_17 > VAR_7)
     goto underflow;


   VAR_6->sig[0] |= FUNC_12 (VAR_6, VAR_6, VAR_17);
   FUNC_1 (VAR_6, FUNC_0 (VAR_6) + VAR_17);
 }
    }





  VAR_11 = 0;
  for (VAR_9 = 0, VAR_10 = (VAR_8 - 1) / VAR_1; VAR_9 < VAR_10; ++VAR_9)
    VAR_11 |= VAR_6->sig[VAR_9];
  VAR_11 |=
    VAR_6->sig[VAR_10] & (((unsigned long)1 << ((VAR_8 - 1) % VAR_1)) - 1);

  VAR_12 = FUNC_13 (VAR_6, VAR_8 - 1);
  VAR_13 = FUNC_13 (VAR_6, VAR_8);


  if (VAR_12 && (VAR_11 || VAR_13))
    {
      REAL_VALUE_TYPE VAR_18;
      FUNC_9 (&VAR_18, 0);
      FUNC_11 (&VAR_18, VAR_8);

      if (FUNC_2 (VAR_6, VAR_6, &VAR_18))
 {



   FUNC_1 (VAR_6, FUNC_0 (VAR_6) + 1);
   if (FUNC_0 (VAR_6) > VAR_15)
     goto overflow;
   VAR_6->sig[VAR_3-1] = VAR_4;

   if (VAR_5->log2_b != 1)
     {
       int VAR_19 = FUNC_0 (VAR_6) & (VAR_5->log2_b - 1);
       if (VAR_19)
  {
    VAR_19 = VAR_5->log2_b - VAR_19;
    FUNC_10 (VAR_6, VAR_6, VAR_19);
    FUNC_1 (VAR_6, FUNC_0 (VAR_6) + VAR_19);
    if (FUNC_0 (VAR_6) > VAR_15)
      goto overflow;
  }
     }
 }
    }


  if (FUNC_0 (VAR_6) <= VAR_14)
    goto underflow;


  FUNC_3 (VAR_6, VAR_8);
}
