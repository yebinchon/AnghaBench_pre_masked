
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_25 ;
 unsigned int VAR_26 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_27 ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__,int ,int) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (unsigned int) ;
 int VAR_28 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;

__attribute__((used)) static void
FUNC_20 (unsigned int VAR_29)
{





  if (VAR_19 & VAR_1)
    VAR_29 |= VAR_17;
  VAR_29 &= ~VAR_26;
  if (!VAR_29)
    return;


  if (VAR_29 & VAR_11)
    FUNC_13 ();


  if (VAR_29 & VAR_6)
    {

      VAR_28 = 1;

      if (VAR_21)
 FUNC_1 ();
      else
 FUNC_0 ();


      FUNC_13 ();







      if (!(VAR_29 & VAR_13) && FUNC_8 ())
 VAR_29 |= VAR_12;
    }

  if (VAR_29 & VAR_13)
    {
      unsigned VAR_30 = VAR_29 & VAR_13;
      FUNC_15 (VAR_30);
      VAR_26 &= ~VAR_17;
    }

  if (VAR_29 & VAR_10)
    FUNC_14 ();

  if ((VAR_29 & VAR_8)
      && VAR_22 && VAR_20)
    {
      if (VAR_19 & VAR_2)
        FUNC_3 (VAR_20,
                               VAR_22, VAR_24);
      else
 {
   if (VAR_24 & VAR_5)
     FUNC_11 (VAR_22, FUNC_6 (), VAR_24);
   else if ((VAR_19 & VAR_0) && (VAR_24 & VAR_3))
     FUNC_12 (VAR_22, FUNC_6 ());
          else
     FUNC_9 (VAR_22, FUNC_6 ());

   if (VAR_19 & VAR_0
       && VAR_25 != VAR_27
       && (VAR_24 & VAR_4))
     FUNC_10 (VAR_23, FUNC_6 ());
 }



      FUNC_4 (VAR_22);
    }
  if ((VAR_29 & VAR_7)
      && VAR_22 && !VAR_20)
    {
      FUNC_2 (VAR_22);


      FUNC_4 (VAR_22);
    }

  if (VAR_29 & VAR_9)
    {
      FUNC_7 ();
    }
  VAR_26 = VAR_29 & VAR_14;
}
