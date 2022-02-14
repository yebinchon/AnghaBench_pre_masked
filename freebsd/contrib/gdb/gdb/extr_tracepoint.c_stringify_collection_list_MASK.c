
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct collection_list {int next_memrange; int next_aexpr_elt; scalar_t__* regs_mask; TYPE_2__** aexpr_list; TYPE_1__* list; } ;
struct TYPE_4__ {int len; int buf; } ;
struct TYPE_3__ {int type; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,scalar_t__,...) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static char **
FUNC_7 (struct collection_list *VAR_3, char *VAR_4)
{
  char VAR_5[2048];
  char VAR_6[40];
  int VAR_7;
  int VAR_8 = 0;
  char *(*VAR_9)[];
  char *VAR_10;
  long VAR_11;

  VAR_7 = 1 + VAR_3->next_memrange + VAR_3->next_aexpr_elt + 1;
  VAR_9 = (char *(*)[]) FUNC_6 (VAR_7 * sizeof (char *));

  for (VAR_11 = sizeof (VAR_3->regs_mask) - 1; VAR_11 > 0; VAR_11--)
    if (VAR_3->regs_mask[VAR_11] != 0)
      break;
  if (VAR_3->regs_mask[VAR_11] != 0)
    {
      if (VAR_2)
 FUNC_1 ("\nCollecting registers (mask): 0x");
      VAR_10 = VAR_5;
      *VAR_10++ = 'R';
      for (; VAR_11 >= 0; VAR_11--)
 {
   VAR_1;
   if (VAR_2)
     FUNC_1 ("%02X", VAR_3->regs_mask[VAR_11]);
   FUNC_3 (VAR_10, "%02X", VAR_3->regs_mask[VAR_11]);
   VAR_10 += 2;
 }
      (*VAR_9)[VAR_8] = FUNC_2 (VAR_5, VAR_10 - VAR_5);
      VAR_8++;
    }
  if (VAR_2)
    FUNC_1 ("\n");
  if (VAR_3->next_memrange > 0 && VAR_2)
    FUNC_1 ("Collecting memranges: \n");
  for (VAR_11 = 0, VAR_7 = 0, VAR_10 = VAR_5; VAR_11 < VAR_3->next_memrange; VAR_11++)
    {
      VAR_1;
      FUNC_4 (VAR_6, VAR_3->list[VAR_11].start);
      if (VAR_2)
 {
   FUNC_1 ("(%d, %s, %ld)\n",
      VAR_3->list[VAR_11].type,
      VAR_6,
      (long) (VAR_3->list[VAR_11].end - VAR_3->list[VAR_11].start));
 }
      if (VAR_7 + 27 > VAR_0)
 {
   (*VAR_9)[VAR_8] = FUNC_2 (VAR_5, VAR_7);
   VAR_8++;
   VAR_7 = 0;
   VAR_10 = VAR_5;
 }

      FUNC_3 (VAR_10, "M%X,%s,%lX",
        VAR_3->list[VAR_11].type,
        VAR_6,
        (long) (VAR_3->list[VAR_11].end - VAR_3->list[VAR_11].start));

      VAR_7 += FUNC_5 (VAR_10);
      VAR_10 += VAR_7;
    }

  for (VAR_11 = 0; VAR_11 < VAR_3->next_aexpr_elt; VAR_11++)
    {
      VAR_1;
      if ((VAR_7 + 10 + 2 * VAR_3->aexpr_list[VAR_11]->len) > VAR_0)
 {
   (*VAR_9)[VAR_8] = FUNC_2 (VAR_5, VAR_7);
   VAR_8++;
   VAR_7 = 0;
   VAR_10 = VAR_5;
 }
      FUNC_3 (VAR_10, "X%08X,", VAR_3->aexpr_list[VAR_11]->len);
      VAR_10 += 10;
      VAR_7 += 10;

      VAR_10 = FUNC_0 (VAR_3->aexpr_list[VAR_11]->buf, VAR_10, VAR_3->aexpr_list[VAR_11]->len);
      VAR_7 += 2 * VAR_3->aexpr_list[VAR_11]->len;
    }

  if (VAR_7 != 0)
    {
      (*VAR_9)[VAR_8] = FUNC_2 (VAR_5, VAR_7);
      VAR_8++;
      VAR_7 = 0;
      VAR_10 = VAR_5;
    }
  (*VAR_9)[VAR_8] = ((void*)0);

  if (VAR_8 == 0)
    return ((void*)0);
  else
    return *VAR_9;
}
