
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_list {char* so_name; struct so_list* next; int so_original_name; struct so_list* lm; struct so_list* lm_info; } ;
struct lm_info {int dummy; } ;
struct link_map_offsets {int link_map_size; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct so_list*) ;
 int FUNC_1 (struct so_list*) ;
 scalar_t__ FUNC_2 (struct so_list*) ;
 int VAR_0 ;
 struct link_map_offsets* FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct cleanup*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct so_list*) ;
 scalar_t__ FUNC_7 () ;
 struct cleanup* FUNC_8 (int (*) (char*),struct so_list*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (struct so_list*,int ,int) ;
 int FUNC_11 (scalar_t__,struct so_list*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int ,char**,int,int*) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (char*) ;
 void* FUNC_18 (int) ;

__attribute__((used)) static struct so_list *
FUNC_19 (void)
{
  CORE_ADDR VAR_2;
  struct so_list *VAR_3 = 0;
  struct so_list **VAR_4 = &VAR_3;



  if (! VAR_1)
    {
      VAR_1 = FUNC_7 ();



      if (! VAR_1)
 return 0;
    }



  VAR_2 = FUNC_5 ();
  while (VAR_2)
    {
      struct link_map_offsets *VAR_5 = FUNC_3 ();
      struct so_list *VAR_6
 = (struct so_list *) FUNC_18 (sizeof (struct so_list));
      struct cleanup *VAR_7 = FUNC_8 (FUNC_17, VAR_6);

      FUNC_10 (VAR_6, 0, sizeof (*VAR_6));

      VAR_6->lm_info = FUNC_18 (sizeof (struct lm_info));
      FUNC_8 (FUNC_17, VAR_6->lm_info);

      VAR_6->lm_info->lm = FUNC_18 (VAR_5->link_map_size);
      FUNC_8 (FUNC_17, VAR_6->lm_info->lm);
      FUNC_10 (VAR_6->lm_info->lm, 0, VAR_5->link_map_size);

      FUNC_11 (VAR_2, VAR_6->lm_info->lm, VAR_5->link_map_size);

      VAR_2 = FUNC_2 (VAR_6);






      if (FUNC_0 (VAR_6))
 FUNC_6 (VAR_6);
      else
 {
   int VAR_8;
   char *VAR_9;


   FUNC_15 (FUNC_1 (VAR_6), &VAR_9,
         VAR_0 - 1, &VAR_8);
   if (VAR_8 != 0)
     {
       FUNC_16 ("current_sos: Can't read pathname for load map: %s\n",
         FUNC_12 (VAR_8));
     }
   else
     {
       FUNC_14 (VAR_6->so_name, VAR_9, VAR_0 - 1);
       VAR_6->so_name[VAR_0 - 1] = '\0';
       FUNC_17 (VAR_9);
       FUNC_13 (VAR_6->so_original_name, VAR_6->so_name);
     }



   if (! VAR_6->so_name[0]
       || FUNC_9 (VAR_6->so_name))
     FUNC_6 (VAR_6);
   else
     {
       VAR_6->next = 0;
       *VAR_4 = VAR_6;
       VAR_4 = &VAR_6->next;
     }
 }

      FUNC_4 (VAR_7);
    }

  return VAR_3;
}
