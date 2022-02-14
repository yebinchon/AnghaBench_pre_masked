
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* message; } ;
typedef TYPE_1__ list_info_type ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3 (list_info_type *VAR_7, unsigned int VAR_8,
      char *VAR_9, unsigned int VAR_10)
{
  unsigned int VAR_11;
  unsigned int VAR_12;
  unsigned int VAR_13;
  unsigned int VAR_14 = 0;
  char *VAR_15 = VAR_1;
  int VAR_16;


  FUNC_2 (VAR_7);
  VAR_12 = (VAR_0 * 2 + 1) * VAR_4;


  if (VAR_10 == ~(unsigned int) 0)
    {
      FUNC_0 (VAR_2, "% 4d     ", VAR_8);
      for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
 FUNC_0 (VAR_2, " ");

      FUNC_0 (VAR_2, "\t%s\n", VAR_9 ? VAR_9 : "");

      VAR_6++;

      FUNC_2 (0);

      return;
    }

  if (FUNC_1 ())
    FUNC_0 (VAR_2, "% 4d ???? ", VAR_8);
  else
    FUNC_0 (VAR_2, "% 4d %04x ", VAR_8, VAR_10);


  VAR_11 = 0;
  VAR_16 = 0;
  while (VAR_15[VAR_16] && VAR_11 < VAR_12)
    {
      int VAR_17;
      VAR_17 = VAR_16;
      FUNC_0 (VAR_2, "%c%c", VAR_15[VAR_17], VAR_15[VAR_17 + 1]);
      VAR_16 += 2;
      VAR_14++;

      if (VAR_14 == VAR_0)
 {
   FUNC_0 (VAR_2, " ");
   VAR_11++;
   VAR_14 = 0;
 }

      VAR_11 += 2;
    }

  for (; VAR_11 < VAR_12; VAR_11++)
    FUNC_0 (VAR_2, " ");

  FUNC_0 (VAR_2, "\t%s\n", VAR_9 ? VAR_9 : "");
  VAR_6++;
  FUNC_2 (VAR_7);

  if (VAR_7->message)
    {
      FUNC_0 (VAR_2, "****  %s\n", VAR_7->message);
      FUNC_2 (VAR_7);
      VAR_6++;
    }

  for (VAR_13 = 0;
       VAR_13 < (unsigned int) VAR_3
  && VAR_15[VAR_16];
       VAR_13++)
    {
      VAR_12 = ((VAR_0 * 2) + 1) * VAR_5 - 1;
      VAR_11 = 0;


      FUNC_0 (VAR_2, "% 4d      ", VAR_8);

      while (VAR_15[VAR_16] && VAR_11 < VAR_12)
 {
   int VAR_18;
   VAR_18 = VAR_16;
   FUNC_0 (VAR_2, "%c%c", VAR_15[VAR_18], VAR_15[VAR_18 + 1]);
   VAR_16 += 2;
   VAR_11 += 2;
   VAR_14++;

   if (VAR_14 == VAR_0)
     {
       FUNC_0 (VAR_2, " ");
       VAR_11++;
       VAR_14 = 0;
     }
 }

      FUNC_0 (VAR_2, "\n");
      VAR_6++;
      FUNC_2 (VAR_7);
    }
}
