
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 char* FUNC_13 () ;
 int FUNC_14 (int *,char*,char const*,...) ;
 int FUNC_15 (char*,int *) ;
 int VAR_0 ;

 int FUNC_16 (int *,int ) ;


__attribute__((used)) static void
FUNC_17 (FILE *VAR_1, rtx VAR_2)
{
  if (FUNC_11 (VAR_2) == 0)
    {


      switch (VAR_0)
 {
 case 128:
   FUNC_14 (VAR_1, "edge: { sourcename: \"%s.0\" targetname: \"%s.%d\" }\n",

     FUNC_13 (),
     FUNC_13 (), FUNC_12 (VAR_2, 0));
   break;
 case 129:
   break;
 }
    }

  switch (VAR_0)
    {
    case 128:
      FUNC_14 (VAR_1, "node: {\n  title: \"%s.%d\"\n  color: %s\n  label: \"%s %d\n",

        FUNC_13 (), FUNC_12 (VAR_2, 0),
        FUNC_9 (VAR_2) ? "lightgrey"
        : FUNC_7 (VAR_2) ? "green"
        : FUNC_5 (VAR_2) ? "darkgreen"
        : FUNC_0 (VAR_2) ? "darkgreen"
        : FUNC_6 (VAR_2) ? "darkgrey\n  shape: ellipse" : "white",

        FUNC_3 (FUNC_1 (VAR_2)), FUNC_12 (VAR_2, 0));
      break;
    case 129:
      break;
    }


  if (FUNC_9 (VAR_2))
    {
      const char *VAR_3 = "";
      if (FUNC_8 (VAR_2) < 0)
 VAR_3 = FUNC_2 (FUNC_8 (VAR_2));
      FUNC_14 (VAR_1, " %s", VAR_3);
    }
  else if (FUNC_4 (VAR_2))
    FUNC_16 (VAR_1, FUNC_10 (VAR_2));
  else
    FUNC_16 (VAR_1, VAR_2);

  switch (VAR_0)
    {
    case 128:
      FUNC_15 ("\"\n}\n", VAR_1);
      break;
    case 129:
      break;
    }
}
