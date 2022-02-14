
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;

__attribute__((used)) static void
FUNC_15 (char *VAR_7, int VAR_8)
{
  BOOL VAR_9;
  DWORD VAR_10;

  if (!VAR_7)
    FUNC_5 ("process-id to attach");

  if (FUNC_11 (VAR_2, VAR_3) < 0)
    {
      FUNC_10 ("Warning: Failed to get SE_DEBUG_NAME privilege\n");
      FUNC_10 ("This can cause attach to fail on Windows NT/2K/XP\n");
    }

  VAR_10 = FUNC_12 (VAR_7, 0, 0);

  VAR_9 = FUNC_0 (VAR_10);
  VAR_6 = 0;

  if (!VAR_9)
    {

      VAR_10 = FUNC_2 (VAR_0, VAR_10);

      if (VAR_10 > 0)
 VAR_9 = FUNC_0 (VAR_10);

      if (!VAR_9)
 FUNC_4 ("Can't attach to process.");
    }

  if (FUNC_8 ())
    FUNC_1 (VAR_1);

  VAR_4 = 1;

  if (VAR_8)
    {
      char *VAR_11 = (char *) FUNC_7 (0);

      if (VAR_11)
 FUNC_10 ("Attaching to program `%s', %s\n", VAR_11,
      FUNC_13 (FUNC_9 (VAR_10)));
      else
 FUNC_10 ("Attaching to %s\n",
      FUNC_13 (FUNC_9 (VAR_10)));

      FUNC_6 (VAR_5);
    }

  FUNC_3 (VAR_10);
  FUNC_14 ();
}
