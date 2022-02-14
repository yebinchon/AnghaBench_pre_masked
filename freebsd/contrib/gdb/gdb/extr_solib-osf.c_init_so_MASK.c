
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct so_list {char* so_original_name; char* so_name; TYPE_2__* lm_info; } ;
struct lm_info {int secs; } ;
struct TYPE_4__ {int isloader; int nsecs; TYPE_1__* secs; } ;
struct TYPE_3__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct so_list*,int ,int) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (unsigned int) ;

__attribute__((used)) static void
FUNC_4 (struct so_list *VAR_1, char *VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5, VAR_6;


  FUNC_1 (VAR_1, 0, sizeof *VAR_1);


  VAR_5 = FUNC_2 (VAR_2);
  if (VAR_5 >= VAR_0)
    VAR_5 = VAR_0 - 1;

  FUNC_0 (VAR_1->so_original_name, VAR_2, VAR_5);
  VAR_1->so_original_name[VAR_5] = '\0';
  FUNC_0 (VAR_1->so_name, VAR_1->so_original_name, VAR_5 + 1);


  VAR_1->lm_info = FUNC_3 ((unsigned) &(((struct lm_info *)0)->secs) +
    VAR_4 * sizeof *VAR_1->lm_info);
  VAR_1->lm_info->isloader = VAR_3;
  VAR_1->lm_info->nsecs = VAR_4;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    VAR_1->lm_info->secs[VAR_6].name = ((void*)0);
}
