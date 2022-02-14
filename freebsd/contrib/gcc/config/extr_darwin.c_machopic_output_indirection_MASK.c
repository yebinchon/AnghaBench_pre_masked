
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_2__ {char* ptr_name; scalar_t__ stub_p; int symbol; int used; } ;
typedef TYPE_1__ machopic_indirection ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 char* FUNC_7 (int ,int ) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int *,char const*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int ,char const*) ;
 int FUNC_15 (int ) ;
 size_t VAR_5 ;
 int FUNC_16 (int *,char*,char*) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char const*) ;
 int FUNC_19 (char*,char*,char*,char const*) ;
 int FUNC_20 (char*,char const*) ;
 scalar_t__ FUNC_21 (char const*) ;
 int FUNC_22 (int ) ;
 char* VAR_6 ;

__attribute__((used)) static int
FUNC_23 (void **VAR_7, void *VAR_8)
{
  machopic_indirection *VAR_9 = *((machopic_indirection **) VAR_7);
  FILE *VAR_10 = (FILE *) VAR_8;
  rtx VAR_11;
  const char *VAR_12;
  const char *VAR_13;

  if (!VAR_9->used)
    return 1;

  VAR_11 = VAR_9->symbol;
  VAR_12 = FUNC_7 (VAR_11, 0);
  VAR_13 = VAR_9->ptr_name;

  if (VAR_9->stub_p)
    {
      char *VAR_14;
      char *VAR_15;
      tree VAR_16;

      VAR_16 = FUNC_18 (VAR_12);
      if (VAR_16)
 {
   tree VAR_17 = VAR_16;

   while (FUNC_3 (VAR_16))
     VAR_16 = FUNC_6 (VAR_16);
   if (VAR_16 != VAR_17)
     VAR_12 = FUNC_2 (VAR_16);
 }

      VAR_14 = FUNC_8 (FUNC_21 (VAR_12) + 2);
      if (VAR_12[0] == '*' || VAR_12[0] == '&')
 FUNC_20 (VAR_14, VAR_12 + 1);
      else if (VAR_12[0] == '-' || VAR_12[0] == '+')
 FUNC_20 (VAR_14, VAR_12);
      else
 FUNC_19 (VAR_14, "%s%s", VAR_6, VAR_12);

      VAR_15 = FUNC_8 (FUNC_21 (VAR_13) + 2);
      if (VAR_13[0] == '*' || VAR_13[0] == '&')
 FUNC_20 (VAR_15, VAR_13 + 1);
      else
 FUNC_19 (VAR_15, "%s%s", VAR_6, VAR_13);

      FUNC_16 (VAR_10, VAR_14, VAR_15);
    }
  else if (! FUNC_15 (VAR_11)
    && (FUNC_17 (VAR_11)
        || FUNC_5 (VAR_11)))
    {
      FUNC_22 (VAR_4);
      FUNC_9 (FUNC_0 (VAR_1));
      FUNC_11 (VAR_13);
      FUNC_10 (FUNC_14 (VAR_1, VAR_12),
   FUNC_1 (VAR_1),
   FUNC_0 (VAR_1), 1);
    }
  else
    {
      rtx VAR_18 = VAR_2;

      FUNC_22 (VAR_3[VAR_5]);
      FUNC_12 (VAR_10, VAR_13);
      FUNC_13 (VAR_10, ":\n");

      FUNC_13 (VAR_10, "\t.indirect_symbol ");
      FUNC_12 (VAR_10, VAR_12);
      FUNC_13 (VAR_10, "\n");
      if ((FUNC_4 (VAR_11) & VAR_0)
   && FUNC_17 (VAR_11))
 VAR_18 = FUNC_14 (VAR_1, VAR_12);

      FUNC_10 (VAR_18, FUNC_1 (VAR_1),
   FUNC_0 (VAR_1), 1);
    }

  return 1;
}
