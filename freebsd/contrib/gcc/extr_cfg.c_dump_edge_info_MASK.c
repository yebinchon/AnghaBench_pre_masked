
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int probability; double count; int flags; TYPE_2__* src; TYPE_2__* dest; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char const* const*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 char* VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char const* const,int *) ;

void
FUNC_4 (FILE *VAR_4, edge VAR_5, int VAR_6)
{
  basic_block VAR_7 = (VAR_6 ? VAR_5->dest : VAR_5->src);

  if (VAR_7 == VAR_0)
    FUNC_3 (" ENTRY", VAR_4);
  else if (VAR_7 == VAR_1)
    FUNC_3 (" EXIT", VAR_4);
  else
    FUNC_1 (VAR_4, " %d", VAR_7->index);

  if (VAR_5->probability)
    FUNC_1 (VAR_4, " [%.1f%%] ", VAR_5->probability * 100.0 / VAR_3);

  if (VAR_5->count)
    {
      FUNC_1 (VAR_4, " count:");
      FUNC_1 (VAR_4, VAR_2, VAR_5->count);
    }

  if (VAR_5->flags)
    {
      static const char * const VAR_8[] = {
 "fallthru", "ab", "abcall", "eh", "fake", "dfs_back",
 "can_fallthru", "irreducible", "sibcall", "loop_exit",
 "true", "false", "exec"
      };
      int VAR_9 = 0;
      int VAR_10, VAR_11 = VAR_5->flags;

      FUNC_3 (" (", VAR_4);
      for (VAR_10 = 0; VAR_11; VAR_10++)
 if (VAR_11 & (1 << VAR_10))
   {
     VAR_11 &= ~(1 << VAR_10);

     if (VAR_9)
       FUNC_2 (',', VAR_4);
     if (VAR_10 < (int) FUNC_0 (VAR_8))
       FUNC_3 (VAR_8[VAR_10], VAR_4);
     else
       FUNC_1 (VAR_4, "%d", VAR_10);
     VAR_9 = 1;
   }

      FUNC_2 (')', VAR_4);
    }
}
