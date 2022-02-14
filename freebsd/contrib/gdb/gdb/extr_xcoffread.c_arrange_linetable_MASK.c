
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linetable_entry {int line; int pc; } ;
struct linetable {int nitems; TYPE_1__* item; } ;
struct TYPE_2__ {scalar_t__ line; int pc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct linetable_entry*,int,int,int ) ;
 int FUNC_1 (struct linetable_entry*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct linetable_entry*,int) ;

__attribute__((used)) static struct linetable *
FUNC_4 (struct linetable *VAR_2)
{
  int VAR_3, VAR_4, VAR_5,
    VAR_6;

  struct linetable_entry *VAR_7;
  int VAR_8;
  struct linetable *VAR_9;



  VAR_8 = 20;
  VAR_7 = (struct linetable_entry *)
    FUNC_2 (VAR_8 * sizeof (struct linetable_entry));

  for (VAR_6 = 0, VAR_3 = 0; VAR_3 < VAR_2->nitems; ++VAR_3)
    {

      if (VAR_2->item[VAR_3].line == 0)
 {

   if (VAR_6 >= VAR_8)
     {
       VAR_8 *= 2;
       VAR_7 = (struct linetable_entry *)
  FUNC_3 (VAR_7, VAR_8 * sizeof (struct linetable_entry));
     }
   VAR_7[VAR_6].line = VAR_3;
   VAR_7[VAR_6].pc = VAR_2->item[VAR_3].pc;
   ++VAR_6;
 }
    }

  if (VAR_6 == 0)
    {
      FUNC_1 (VAR_7);
      return VAR_2;
    }
  else if (VAR_6 > 1)
    FUNC_0 (VAR_7, VAR_6, sizeof (struct linetable_entry), VAR_1);


  VAR_9 = (struct linetable *)
    FUNC_2
    (sizeof (struct linetable) +
    (VAR_2->nitems - VAR_6) * sizeof (struct linetable_entry));




  VAR_5 = 0;
  if (VAR_2->item[0].line != 0)
    for (VAR_5 = 0;
    VAR_5 < VAR_2->nitems && VAR_2->item[VAR_5].line; ++VAR_5)
      VAR_9->item[VAR_5] = VAR_2->item[VAR_5];



  for (VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3)
    {
      for (VAR_4 = VAR_7[VAR_3].line + 1;
    VAR_4 < VAR_2->nitems && VAR_2->item[VAR_4].line != 0;
    ++VAR_4, ++VAR_5)
 VAR_9->item[VAR_5] = VAR_2->item[VAR_4];
    }
  FUNC_1 (VAR_7);
  VAR_9->nitems = VAR_2->nitems - VAR_6;
  return VAR_9;
}
