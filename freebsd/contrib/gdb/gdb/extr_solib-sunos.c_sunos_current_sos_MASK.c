
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_list {char* so_name; struct so_list* next; int so_original_name; struct so_list* lm; struct so_list* lm_info; } ;
struct lm_info {int dummy; } ;
struct link_map {int dummy; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct so_list*) ;
 scalar_t__ FUNC_1 (struct so_list*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct cleanup*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct so_list*) ;
 scalar_t__ FUNC_5 () ;
 struct cleanup* FUNC_6 (int (*) (char*),struct so_list*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (struct so_list*,int ,int) ;
 int FUNC_9 (scalar_t__,struct so_list*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int ,char**,int,int*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*) ;
 void* FUNC_16 (int) ;

__attribute__((used)) static struct so_list *
FUNC_17 (void)
{
  CORE_ADDR VAR_2;
  struct so_list *VAR_3 = 0;
  struct so_list **VAR_4 = &VAR_3;
  int VAR_5;
  char *VAR_6;



  if (! VAR_1)
    {
      VAR_1 = FUNC_5 ();



      if (! VAR_1)
 return 0;
    }



  VAR_2 = FUNC_3 ();
  while (VAR_2)
    {
      struct so_list *VAR_7
 = (struct so_list *) FUNC_16 (sizeof (struct so_list));
      struct cleanup *VAR_8 = FUNC_6 (FUNC_15, VAR_7);

      FUNC_8 (VAR_7, 0, sizeof (*VAR_7));

      VAR_7->lm_info = FUNC_16 (sizeof (struct lm_info));
      FUNC_6 (FUNC_15, VAR_7->lm_info);

      VAR_7->lm_info->lm = FUNC_16 (sizeof (struct link_map));
      FUNC_6 (FUNC_15, VAR_7->lm_info->lm);
      FUNC_8 (VAR_7->lm_info->lm, 0, sizeof (struct link_map));

      FUNC_9 (VAR_2, VAR_7->lm_info->lm, sizeof (struct link_map));

      VAR_2 = FUNC_1 (VAR_7);


      FUNC_13 (FUNC_0 (VAR_7), &VAR_6,
     VAR_0 - 1, &VAR_5);
      if (VAR_5 != 0)
 {
   FUNC_14 ("current_sos: Can't read pathname for load map: %s\n",
     FUNC_10 (VAR_5));
 }
      else
 {
   FUNC_12 (VAR_7->so_name, VAR_6, VAR_0 - 1);
   VAR_7->so_name[VAR_0 - 1] = '\0';
   FUNC_15 (VAR_6);
   FUNC_11 (VAR_7->so_original_name, VAR_7->so_name);
 }



      if (! VAR_7->so_name[0]
   || FUNC_7 (VAR_7->so_name))
 FUNC_4 (VAR_7);
      else
 {
   VAR_7->next = 0;
   *VAR_4 = VAR_7;
   VAR_4 = &VAR_7->next;
 }

      FUNC_2 (VAR_8);
    }

  return VAR_3;
}
