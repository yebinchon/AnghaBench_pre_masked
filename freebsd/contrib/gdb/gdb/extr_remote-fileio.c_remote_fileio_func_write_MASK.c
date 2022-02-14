
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char**,long*) ;
 scalar_t__ FUNC_3 (char**,scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__,char*,size_t) ;
 int FUNC_9 (int ,char*,size_t) ;
 int FUNC_10 (int,char*,size_t) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (size_t) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_7)
{
  long VAR_8, VAR_9;
  LONGEST VAR_10;
  CORE_ADDR VAR_11;
  int VAR_12, VAR_13, VAR_14;
  char *VAR_15;
  size_t VAR_16;


  if (FUNC_2 (&VAR_7, &VAR_8))
    {
      FUNC_4 ();
      return;
    }
  VAR_12 = FUNC_5 ((int) VAR_8);
  if (VAR_12 == VAR_2)
    {
      FUNC_1 ();
      return;
    }

  if (FUNC_3 (&VAR_7, &VAR_10))
    {
      FUNC_4 ();
      return;
    }
  VAR_11 = (CORE_ADDR) VAR_10;

  if (FUNC_2 (&VAR_7, &VAR_9))
    {
      FUNC_4 ();
      return;
    }
  VAR_16 = (size_t) VAR_9;

  VAR_15 = (char *) FUNC_12 (VAR_16);
  VAR_14 = FUNC_8 (VAR_11, VAR_15, VAR_16);
  if (VAR_14 != VAR_16)
    {
      FUNC_11 (VAR_15);
      FUNC_4 ();
      return;
    }

  VAR_6 = 1;
  switch (VAR_12)
    {
      case 129:
 FUNC_1 ();
 return;
      case 128:
 FUNC_9 (VAR_8 == 1 ? VAR_4 : VAR_5, VAR_15,
         VAR_16);
 FUNC_0 (VAR_8 == 1 ? VAR_4 : VAR_5);
 VAR_13 = VAR_16;
 break;
      default:
 VAR_13 = FUNC_10 (VAR_12, VAR_15, VAR_16);
 if (VAR_13 < 0 && VAR_3 == VAR_0)
   VAR_3 = VAR_1;
 break;
    }

  if (VAR_13 < 0)
    FUNC_6 (-1);
  else
    FUNC_7 (VAR_13);

  FUNC_11 (VAR_15);
}
