
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_subseg {struct line_entry** ptail; struct line_entry* head; struct line_subseg* next; } ;
struct line_seg {struct line_seg* next; struct line_subseg* head; } ;
struct line_entry {int dummy; } ;
typedef int * segT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct line_seg* VAR_2 ;
 int FUNC_1 (struct line_seg*) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_12 (char*,int ) ;

void
FUNC_13 (void)
{
  segT VAR_5;
  struct line_seg *VAR_6;
  segT VAR_7;
  int VAR_8 = 0;

  VAR_7 = FUNC_2 (VAR_4, ".debug_info");
  VAR_8 = VAR_7 == ((void*)0) || !FUNC_11 (VAR_7);

  if (!VAR_2 && VAR_8)


    return;


  VAR_3 = FUNC_0 (VAR_4);


  VAR_5 = FUNC_12 (".debug_line", 0);
  FUNC_3 (VAR_4, VAR_5, VAR_1 | VAR_0);


  for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next)
    {
      struct line_subseg *VAR_9 = VAR_6->head;
      struct line_entry **VAR_10 = VAR_9->ptail;

      while ((VAR_9 = VAR_9->next) != ((void*)0))
 {
   *VAR_10 = VAR_9->head;
   VAR_10 = VAR_9->ptail;
 }
    }

  FUNC_8 (VAR_5);




  if (VAR_8)
    {
      segT VAR_11;
      segT VAR_12;
      segT VAR_13;

      FUNC_1 (VAR_2);

      VAR_7 = FUNC_12 (".debug_info", 0);
      VAR_11 = FUNC_12 (".debug_abbrev", 0);
      VAR_12 = FUNC_12 (".debug_aranges", 0);

      FUNC_3 (VAR_4, VAR_7,
        VAR_1 | VAR_0);
      FUNC_3 (VAR_4, VAR_11,
        VAR_1 | VAR_0);
      FUNC_3 (VAR_4, VAR_12,
        VAR_1 | VAR_0);

      FUNC_10 (VAR_12, FUNC_4 (2 * VAR_3) - 1);

      if (VAR_2->next == ((void*)0))
 VAR_13 = ((void*)0);
      else
 {
   VAR_13 = FUNC_12 (".debug_ranges", 0);
   FUNC_3 (VAR_4, VAR_13,
     VAR_1 | VAR_0);
   FUNC_10 (VAR_13, FUNC_4 (2 * VAR_3) - 1);
   FUNC_9 (VAR_13);
 }

      FUNC_6 (VAR_12, VAR_7);
      FUNC_5 (VAR_11);
      FUNC_7 (VAR_7, VAR_11, VAR_5, VAR_13);
    }
}
