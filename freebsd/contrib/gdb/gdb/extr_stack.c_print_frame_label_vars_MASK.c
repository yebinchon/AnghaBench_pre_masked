
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct frame_info {int dummy; } ;
struct blockvector {int dummy; } ;
struct block {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 struct block* FUNC_0 (struct blockvector*,int) ;
 int FUNC_1 (struct blockvector*) ;
 scalar_t__ FUNC_2 (struct block*) ;
 scalar_t__ FUNC_3 (struct block*) ;
 struct block* FUNC_4 (struct block*) ;
 scalar_t__ FUNC_5 (int) ;
 struct blockvector* FUNC_6 (scalar_t__,int*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct ui_file*,char*) ;
 struct block* FUNC_9 (struct frame_info*,int ) ;
 scalar_t__ FUNC_10 (struct frame_info*) ;
 int FUNC_11 (char*,int ,int) ;
 scalar_t__ FUNC_12 (struct block*,int*,struct ui_file*) ;

__attribute__((used)) static void
FUNC_13 (struct frame_info *VAR_0, int VAR_1,
   struct ui_file *VAR_2)
{
  struct blockvector *VAR_3;
  struct block *VAR_4 = FUNC_9 (VAR_0, 0);
  int VAR_5 = 0;
  int VAR_6, VAR_7 = 0;
  char *VAR_8;
  CORE_ADDR VAR_9 = FUNC_10 (VAR_0);

  if (VAR_4 == 0)
    {
      FUNC_8 (VAR_2, "No symbol table info available.\n");
      return;
    }

  VAR_3 = FUNC_6 (FUNC_2 (VAR_4) - 4, &VAR_6);
  VAR_8 = (char *) FUNC_5 (FUNC_1 (VAR_3) * sizeof (char));
  FUNC_11 (VAR_8, 0, FUNC_1 (VAR_3) * sizeof (char));

  while (VAR_4 != 0)
    {
      CORE_ADDR VAR_10 = FUNC_2 (VAR_4) - 4;
      int VAR_11;

      if (VAR_3 != FUNC_6 (VAR_10, &VAR_6))
 FUNC_7 ("blockvector blotch");
      if (FUNC_0 (VAR_3, VAR_6) != VAR_4)
 FUNC_7 ("blockvector botch");
      VAR_11 = FUNC_1 (VAR_3);
      VAR_6 += 1;


      while (VAR_6 < VAR_11
      && FUNC_2 (FUNC_0 (VAR_3, VAR_6)) < VAR_9)
 VAR_6++;

      while (VAR_6 < VAR_11
      && FUNC_2 (FUNC_0 (VAR_3, VAR_6)) < VAR_10)
 {
   if (VAR_8[VAR_6] == 0)
     {
       if (FUNC_12 (FUNC_0 (VAR_3, VAR_6), &VAR_7, VAR_2))
  VAR_5 = 1;
       VAR_8[VAR_6] = 1;
     }
   VAR_6++;
 }
      if (VAR_7)
 return;
      if (VAR_5 && VAR_1)
 return;




      if (FUNC_3 (VAR_4))
 break;
      VAR_4 = FUNC_4 (VAR_4);
    }

  if (!VAR_5 && !VAR_1)
    {
      FUNC_8 (VAR_2, "No catches.\n");
    }
}
