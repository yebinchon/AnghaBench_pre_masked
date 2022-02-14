
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct overlay_list {struct overlay_list* next; int os; } ;
typedef int etree_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int *,int *) ;
 void* FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,void*,int ,int ,int ,int ,int ) ;
 struct overlay_list* VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 struct overlay_list* FUNC_3 (int) ;

void
FUNC_4 (const char *VAR_9)
{
  struct overlay_list *VAR_10;
  etree_type *VAR_11;

  FUNC_2 (VAR_9, VAR_8, VAR_6,
           0, VAR_7, 0, 0);




  if (VAR_4 == ((void*)0))
    VAR_8 = FUNC_1 (VAR_0, VAR_9);


  VAR_10 = FUNC_3 (sizeof *VAR_10);
  VAR_10->os = VAR_3;
  VAR_10->next = VAR_4;
  VAR_4 = VAR_10;

  VAR_11 = FUNC_1 (VAR_2, VAR_9);


  if (VAR_5 == ((void*)0))
    VAR_5 = VAR_11;
  else
    VAR_5 = FUNC_0 (VAR_1, VAR_5, VAR_11);
}
