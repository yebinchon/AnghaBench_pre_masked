
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (int *,char*,int,...) ;
 int FUNC_7 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char *VAR_4,
                  const char *VAR_5,
                  const char *VAR_6,
                  const char *VAR_7,
                  svn_revnum_t VAR_8,
                  svn_revnum_t VAR_9,
                  svn_revnum_t VAR_10,
                  svn_revnum_t VAR_11,
                  const char *VAR_12,
                  svn_boolean_t VAR_13,
                  svn_boolean_t VAR_14,
                  apr_pool_t *VAR_15)
{
  const char *VAR_16[8][4] = {{0}};
  int VAR_17[4];
  int VAR_18, VAR_19;



  VAR_16[0][0] = FUNC_2(VAR_15, "  %-8ld  ", VAR_8);
  VAR_16[1][0] = "  |         ";
  if (FUNC_3(VAR_4, VAR_6) == 0)
    {
      VAR_16[2][0] = "-------| |--";
      VAR_16[3][0] = "   \\        ";
      VAR_16[4][0] = "    \\       ";
      VAR_16[5][0] = "     --| |--";
    }
  else if (FUNC_3(VAR_4, VAR_7) == 0)
    {
      VAR_16[2][0] = "     --| |--";
      VAR_16[3][0] = "    /       ";
      VAR_16[4][0] = "   /        ";
      VAR_16[5][0] = "-------| |--";
    }
  else
    {
      VAR_16[2][0] = "     --| |--";
      VAR_16[3][0] = "... /       ";
      VAR_16[4][0] = "    \\       ";
      VAR_16[5][0] = "     --| |--";
    }


  if ((VAR_9 > VAR_8) && VAR_14)
    {
      VAR_16[2][2] = "---------";
      VAR_16[3][2] = "  /      ";
      VAR_16[4][2] = " /       ";
      VAR_16[5][2] = "---------";
      VAR_16[6][2] = "|        ";
      VAR_16[7][2] = FUNC_2(VAR_15, "%-8ld ", VAR_9);
    }
  else if (VAR_9 > VAR_8)
    {
      VAR_16[0][2] = FUNC_2(VAR_15, "%-8ld ", VAR_9);
      VAR_16[1][2] = "|        ";
      VAR_16[2][2] = "---------";
      VAR_16[3][2] = " \\       ";
      VAR_16[4][2] = "  \\      ";
      VAR_16[5][2] = "---------";
    }
  else
    {
      VAR_16[2][2] = "---------";
      VAR_16[3][2] = "         ";
      VAR_16[4][2] = "         ";
      VAR_16[5][2] = "---------";
    }


    {
      VAR_16[0][3] = FUNC_2(VAR_15, "%-8ld", VAR_10);
      VAR_16[1][3] = "|       ";
      VAR_16[2][3] = "-       ";
      VAR_16[3][3] = "        ";
      VAR_16[4][3] = "        ";
      VAR_16[5][3] = "-       ";
      VAR_16[6][3] = "|       ";
      VAR_16[7][3] = VAR_13 ? "WC      "
                             : FUNC_2(VAR_15, "%-8ld", VAR_11);
    }


  for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
    {
      VAR_17[VAR_19] = 0;
      for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
        {
          if (VAR_16[VAR_18][VAR_19] && ((int)FUNC_4(VAR_16[VAR_18][VAR_19]) > VAR_17[VAR_19]))
            VAR_17[VAR_19] = (int)FUNC_4(VAR_16[VAR_18][VAR_19]);
        }
    }


  FUNC_0(FUNC_6(VAR_15,
            "    %s\n"
            "    |         %s\n"
            "    |         |        %s\n"
            "    |         |        |         %s\n"
            "\n",
            FUNC_1("youngest common ancestor"), FUNC_1("last full merge"),
            FUNC_1("tip of branch"), FUNC_1("repository path")));


  for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
    {
      FUNC_0(FUNC_5("  ", VAR_3, VAR_15));
      for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
        {
          if (VAR_16[VAR_18][VAR_19])
            {
              FUNC_0(FUNC_5(VAR_16[VAR_18][VAR_19], VAR_3, VAR_15));
            }
          else
            {

              FUNC_0(FUNC_6(VAR_15, "%*s", VAR_17[VAR_19], ""));
            }
        }
      if (VAR_18 == 2)
        FUNC_0(FUNC_6(VAR_15, "  %s",
                FUNC_7(VAR_12, VAR_6, VAR_15)));
      if (VAR_18 == 5)
        FUNC_0(FUNC_6(VAR_15, "  %s",
                FUNC_7(VAR_12, VAR_7, VAR_15)));
      FUNC_0(FUNC_5("\n", VAR_3, VAR_15));
    }

  return VAR_2;
}
