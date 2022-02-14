
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 () ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_8 (int VAR_12)
{
  int VAR_13;
  static int VAR_14 = 0;
  int VAR_15 = FUNC_6 (VAR_8);

  {
    int VAR_16;

    VAR_16 = VAR_12;
    if (VAR_16 == -1 && VAR_11 > 0)
      VAR_16 = VAR_11;
  }

  if (VAR_14 == VAR_15)
    VAR_12 = 1;
  VAR_13 = FUNC_5 (VAR_5, VAR_12);

  if (VAR_13 == VAR_2 && VAR_12 == -1)
    {
      FUNC_7 ();
      FUNC_0 ("Watchdog has expired.  Target detached.\n");
    }

  if (VAR_13 == VAR_0)
    FUNC_2 ("End of file from remote");
  if (VAR_13 == VAR_1)
    FUNC_2 ("Error reading from remote: %s", FUNC_4 (VAR_3));
  if (VAR_10 > 1)
    {


      if (VAR_13 != VAR_2)
 FUNC_1 (VAR_4, "Read '%c' %d 0x%x\n", VAR_13, VAR_13, VAR_13);
      else
 FUNC_1 (VAR_4, "Timed out in read\n");
    }






  if ((VAR_13 == VAR_2 || VAR_13 == '@')
      && VAR_14 == VAR_15
      && !VAR_7
      && !VAR_6)
    {
      if (VAR_10 > 0)


 FUNC_1 (VAR_4, "Reinitializing MIPS debugging mode\n");

      VAR_9 = 0;
      FUNC_3 ();

      VAR_14 = 0;




      FUNC_0 ("Remote board reset, debug protocol re-initialized.");
    }

  if (VAR_13 == VAR_8[VAR_14])
    ++VAR_14;
  else
    VAR_14 = 0;

  return VAR_13;
}
