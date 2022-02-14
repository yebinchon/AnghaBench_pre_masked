
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char*,size_t) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char**,long*) ;
 scalar_t__ FUNC_6 (char**,scalar_t__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__,char*,int) ;
 int VAR_5 ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (size_t) ;

__attribute__((used)) static void
FUNC_15 (char *VAR_6)
{
  long VAR_7, VAR_8;
  LONGEST VAR_9;
  CORE_ADDR VAR_10;
  int VAR_11, VAR_12, VAR_13;
  char *VAR_14;
  size_t VAR_15;
  off_t VAR_16, VAR_17;


  if (FUNC_5 (&VAR_6, &VAR_7))
    {
      FUNC_7 ();
      return;
    }
  VAR_11 = FUNC_8 ((int) VAR_7);
  if (VAR_11 == VAR_1)
    {
      FUNC_4 ();
      return;
    }

  if (FUNC_6 (&VAR_6, &VAR_9))
    {
      FUNC_7 ();
      return;
    }
  VAR_10 = (CORE_ADDR) VAR_9;

  if (FUNC_5 (&VAR_6, &VAR_8))
    {
      FUNC_7 ();
      return;
    }
  VAR_15 = (size_t) VAR_8;

  switch (VAR_11)
    {
      case 128:
 FUNC_4 ();
 return;
      case 129:
 {
   static char *VAR_18 = ((void*)0);
   static int VAR_19 = 0;

   VAR_14 = (char *) FUNC_14 (32768);
   if (VAR_18)
     {
       VAR_5 = 1;
       if (VAR_19 > VAR_15)
  {
    FUNC_1 (VAR_14, VAR_18, VAR_15);
    FUNC_2 (VAR_18, VAR_18 + VAR_15,
      VAR_19 - VAR_15);
    VAR_19 -= VAR_15;
    VAR_12 = VAR_15;
  }
       else
  {
    FUNC_1 (VAR_14, VAR_18, VAR_19);
    FUNC_13 (VAR_18);
    VAR_18 = ((void*)0);
    VAR_12 = VAR_19;
  }
     }
   else
     {
       VAR_12 = FUNC_12 (VAR_4, VAR_14, 32767);
       VAR_5 = 1;
       if (VAR_12 > 0 && (size_t)VAR_12 > VAR_15)
  {
    VAR_18 = (char *) FUNC_14 (VAR_12 - VAR_15);
    VAR_19 = VAR_12 - VAR_15;
    FUNC_1 (VAR_18, VAR_14 + VAR_15, VAR_19);
    VAR_12 = VAR_15;
  }
     }
 }
 break;
      default:
 VAR_14 = (char *) FUNC_14 (VAR_15);





 VAR_16 = FUNC_0 (VAR_11, 0, VAR_2);
 VAR_5 = 1;
 VAR_12 = FUNC_3 (VAR_11, VAR_14, VAR_15);
 if (VAR_12 < 0 && VAR_3 == VAR_0)
   {
     VAR_17 = FUNC_0 (VAR_11, 0, VAR_2);


     if (VAR_16 != VAR_17)
       VAR_12 = VAR_17 - VAR_16;
   }
 break;
    }

  if (VAR_12 > 0)
    {
      VAR_13 = FUNC_11 (VAR_10, VAR_14, VAR_12);
      if (VAR_13 != VAR_12)
 VAR_12 = -1;
    }

  if (VAR_12 < 0)
    FUNC_9 (-1);
  else
    FUNC_10 (VAR_12);

  FUNC_13 (VAR_14);
}
