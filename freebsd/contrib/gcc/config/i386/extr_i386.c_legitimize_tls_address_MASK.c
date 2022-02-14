
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum tls_model { ____Placeholder_tls_model } tls_model ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 () ;
 int VAR_15 ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int,int *) ;
 int * FUNC_9 (int ,int *) ;
 int * FUNC_10 (int ,int ,int *) ;
 int * FUNC_11 (int ,int *,int *) ;
 int * FUNC_12 (int ,int *,int *) ;
 int * FUNC_13 (int ,int ) ;
 int * FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 () ;
 int FUNC_22 () ;
 int * FUNC_23 (int) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int * FUNC_26 () ;
 int * VAR_16 ;
 int* VAR_17 ;
 int VAR_18 ;
 int FUNC_27 (int *,int ) ;
 int FUNC_28 (int ,int ,int *) ;
 int FUNC_29 () ;

__attribute__((used)) static rtx
FUNC_30 (rtx VAR_19, enum tls_model VAR_20, int VAR_21)
{
  rtx VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
  int VAR_27;

  switch (VAR_20)
    {
    case 131:
      VAR_22 = FUNC_7 (VAR_1);
      VAR_26 = VAR_5 ? FUNC_23 (1) : 0;

      if (VAR_3 && ! VAR_5)
 {
   rtx VAR_28 = FUNC_13 (VAR_1, 0), VAR_29;

   FUNC_29 ();
   FUNC_0 (FUNC_18 (VAR_28, VAR_19));
   VAR_29 = FUNC_21 ();
   FUNC_3 ();

   FUNC_2 (VAR_29, VAR_22, VAR_28, VAR_19);
 }
      else if (VAR_3 && VAR_5)
 FUNC_1 (FUNC_18 (VAR_22, VAR_19));
      else
 FUNC_1 (FUNC_17 (VAR_22, VAR_19));

      if (VAR_5)
 {
   VAR_22 = FUNC_4 (VAR_1, FUNC_12 (VAR_1, VAR_26, VAR_22));

   FUNC_28 (FUNC_22 (), VAR_2, VAR_19);
 }
      break;

    case 129:
      VAR_23 = FUNC_7 (VAR_1);
      VAR_26 = VAR_5 ? FUNC_23 (1) : 0;

      if (VAR_3 && ! VAR_5)
 {
   rtx VAR_30 = FUNC_13 (VAR_1, 0), VAR_31, VAR_32;

   FUNC_29 ();
   FUNC_0 (FUNC_20 (VAR_30));
   VAR_31 = FUNC_21 ();
   FUNC_3 ();

   VAR_32 = FUNC_10 (VAR_13, VAR_14, ((void*)0));
   VAR_32 = FUNC_10 (VAR_13, FUNC_25 (), VAR_32);
   FUNC_2 (VAR_31, VAR_23, VAR_30, VAR_32);
 }
      else if (VAR_3 && VAR_5)
 FUNC_1 (FUNC_20 (VAR_23));
      else
 FUNC_1 (FUNC_19 (VAR_23));

      if (VAR_5)
 {
   rtx VAR_33 = FUNC_26 ();

   FUNC_28 (FUNC_22 (), VAR_2,
          FUNC_11 (VAR_1, VAR_33, VAR_26));
 }

      VAR_24 = FUNC_14 (VAR_1, FUNC_8 (1, VAR_19), VAR_7);
      VAR_24 = FUNC_9 (VAR_1, VAR_24);

      VAR_22 = FUNC_4 (VAR_1, FUNC_12 (VAR_1, VAR_23, VAR_24));

      if (VAR_5)
 {
   VAR_22 = FUNC_4 (VAR_1, FUNC_12 (VAR_1, VAR_22, VAR_26));

   FUNC_28 (FUNC_22 (), VAR_2, VAR_19);
 }

      break;

    case 130:
      if (VAR_3)
 {
   VAR_25 = ((void*)0);
   VAR_27 = VAR_8;
 }
      else if (VAR_15)
 {
   if (VAR_18)
     VAR_17[VAR_0] = 1;
   VAR_25 = VAR_16;
   VAR_27 = VAR_4 ? VAR_8 : VAR_9;
 }
      else if (!VAR_4)
 {
   VAR_25 = FUNC_7 (VAR_1);
   FUNC_1 (FUNC_15 (VAR_25));
   VAR_27 = VAR_9;
 }
      else
 {
   VAR_25 = ((void*)0);
   VAR_27 = VAR_10;
 }

      VAR_24 = FUNC_14 (VAR_1, FUNC_8 (1, VAR_19), VAR_27);
      VAR_24 = FUNC_9 (VAR_1, VAR_24);
      if (VAR_25)
 VAR_24 = FUNC_12 (VAR_1, VAR_25, VAR_24);
      VAR_24 = FUNC_6 (VAR_1, VAR_24);
      FUNC_27 (VAR_24, FUNC_24 ());

      if (VAR_3 || VAR_4)
 {
          VAR_23 = FUNC_23 (VAR_21 || !VAR_6);
   VAR_24 = FUNC_4 (VAR_1, VAR_24);
   return FUNC_12 (VAR_1, VAR_23, VAR_24);
 }
      else
 {
   VAR_23 = FUNC_23 (1);
   VAR_22 = FUNC_7 (VAR_1);
   FUNC_1 (FUNC_16 (VAR_22, VAR_23, VAR_24));
 }
      break;

    case 128:
      VAR_24 = FUNC_14 (VAR_1, FUNC_8 (1, VAR_19),
       (VAR_3 || VAR_4)
       ? VAR_11 : VAR_12);
      VAR_24 = FUNC_9 (VAR_1, VAR_24);

      if (VAR_3 || VAR_4)
 {
   VAR_23 = FUNC_23 (VAR_21 || !VAR_6);
   return FUNC_12 (VAR_1, VAR_23, VAR_24);
 }
      else
 {
   VAR_23 = FUNC_23 (1);
   VAR_22 = FUNC_7 (VAR_1);
   FUNC_1 (FUNC_16 (VAR_22, VAR_23, VAR_24));
 }
      break;

    default:
      FUNC_5 ();
    }

  return VAR_22;
}
