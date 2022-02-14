
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_elem {int lineno; int filename; int data; struct queue_elem* next; } ;
typedef int rtx ;







 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 struct queue_elem* VAR_1 ;
 struct queue_elem* VAR_2 ;
 struct queue_elem* VAR_3 ;
 int FUNC_2 (struct queue_elem*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct queue_elem* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int ) ;
 int VAR_7 ;

rtx
FUNC_5 (int *VAR_8, int *VAR_9)
{
  struct queue_elem **VAR_10, *VAR_11;
  rtx VAR_12;

 discard:


  if (VAR_1 != ((void*)0))
    VAR_10 = &VAR_1;
  else if (VAR_3 != ((void*)0))
    VAR_10 = &VAR_3;
  else if (VAR_2 != ((void*)0))
    VAR_10 = &VAR_2;
  else if (VAR_5 != ((void*)0))
    VAR_10 = &VAR_5;
  else
    return VAR_0;

  VAR_11 = *VAR_10;
  *VAR_10 = VAR_11->next;
  VAR_12 = VAR_11->data;
  VAR_6 = VAR_11->filename;
  *VAR_8 = VAR_11->lineno;
  *VAR_9 = VAR_7;

  FUNC_2 (VAR_11);







  switch (FUNC_0 (VAR_12))
    {
    case 131:
    case 132:
      if (FUNC_3 (FUNC_1 (VAR_12, 2)) != 0)
 VAR_7++;
      else if (VAR_4)
 goto discard;



      FUNC_4 (*VAR_9, FUNC_1 (VAR_12, 0));
      break;

    case 128:
    case 130:
    case 129:
      if (FUNC_3 (FUNC_1 (VAR_12, 1)) != 0)
 VAR_7++;
      else if (VAR_4)
     goto discard;
      break;

    default:
      break;
    }

  return VAR_12;
}
