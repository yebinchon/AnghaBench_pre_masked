
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vstack {int dummy; } ;
struct varobj_child {struct varobj* child; struct varobj_child* next; } ;
struct varobj {int error; struct value* value; scalar_t__ updated; int index; int parent; struct varobj_child* children; TYPE_1__* root; } ;
struct value {int dummy; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct TYPE_2__ {struct varobj* rootvar; } ;


 int VAR_0 ;
 struct frame_info* FUNC_0 (struct frame_id) ;
 struct frame_id FUNC_1 (int ) ;
 int FUNC_2 (struct value*,struct value*,int*) ;
 int FUNC_3 (struct frame_info*) ;
 scalar_t__ FUNC_4 (struct varobj*) ;
 int FUNC_5 (struct value*) ;
 struct value* FUNC_6 (int ,int ) ;
 struct value* FUNC_7 (struct varobj**,int*) ;
 struct varobj* FUNC_8 (struct vstack**) ;
 int FUNC_9 (struct vstack**,struct varobj*) ;
 int FUNC_10 (char*) ;
 struct varobj** FUNC_11 (int) ;

int
FUNC_12 (struct varobj **VAR_1, struct varobj ***VAR_2)
{
  int VAR_3 = 0;
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  struct varobj *VAR_8;
  struct varobj **VAR_9;
  struct varobj **VAR_10 = ((void*)0);
  struct value *VAR_11;
  struct vstack *VAR_12 = ((void*)0);
  struct vstack *VAR_13 = ((void*)0);
  struct frame_id VAR_14;
  struct frame_info *VAR_15;


  if (VAR_2 == ((void*)0))
    return -1;


  if ((*VAR_1)->root->rootvar != *VAR_1)

    return -1;



  VAR_14 = FUNC_1 (VAR_0);






  VAR_4 = 1;
  VAR_11 = FUNC_7 (VAR_1, &VAR_4);
  if (VAR_11 == ((void*)0))
    {
      (*VAR_1)->error = 1;
      return -1;
    }


  FUNC_9 (&VAR_13, ((void*)0));



  if (VAR_4)
    {
      FUNC_9 (&VAR_13, *VAR_1);
      VAR_3++;
    }



  else if (FUNC_4 (*VAR_1) &&
    ((*VAR_1)->updated || !FUNC_2 ((*VAR_1)->value, VAR_11, &VAR_7)))
    {
      FUNC_9 (&VAR_13, *VAR_1);
      (*VAR_1)->updated = 0;
      VAR_3++;


      (*VAR_1)->error = VAR_7;
    }



  FUNC_5 ((*VAR_1)->value);
  (*VAR_1)->value = VAR_11;


  FUNC_9 (&VAR_12, ((void*)0));


  if ((*VAR_1)->children != ((void*)0))
    {
      struct varobj_child *VAR_16;
      for (VAR_16 = (*VAR_1)->children; VAR_16 != ((void*)0); VAR_16 = VAR_16->next)
 FUNC_9 (&VAR_12, VAR_16->child);
    }


  VAR_8 = FUNC_8 (&VAR_12);
  while (VAR_8 != ((void*)0))
    {

      if (VAR_8->children != ((void*)0))
 {
   struct varobj_child *VAR_17;
   for (VAR_17 = VAR_8->children; VAR_17 != ((void*)0); VAR_17 = VAR_17->next)
     FUNC_9 (&VAR_12, VAR_17->child);
 }


      VAR_11 = FUNC_6 (VAR_8->parent, VAR_8->index);
      if (FUNC_4 (VAR_8) &&
          (VAR_8->updated || !FUNC_2 (VAR_8->value, VAR_11, &VAR_7)))
 {

   FUNC_9 (&VAR_13, VAR_8);
   VAR_8->updated = 0;
   VAR_3++;
 }


      VAR_8->error = VAR_7;


      if (VAR_8->value != ((void*)0))
 FUNC_5 (VAR_8->value);
      VAR_8->value = VAR_11;


      VAR_8 = FUNC_8 (&VAR_12);
    }




  *VAR_2 = FUNC_11 ((VAR_3 + 1) * sizeof (struct varobj *));
  if (VAR_3 > 1)
    {
      VAR_10 = FUNC_11 ((VAR_3 + 1) * sizeof (struct varobj *));
      VAR_9 = VAR_10;
    }
  else
    VAR_9 = *VAR_2;


  VAR_6 = VAR_3;
  *VAR_9 = FUNC_8 (&VAR_13);
  while ((*VAR_9 != ((void*)0)) && (VAR_6 > 0))
    {
      VAR_6--;
      VAR_9++;
      *VAR_9 = FUNC_8 (&VAR_13);
    }
  if (VAR_6)
    FUNC_10 ("varobj_update: assertion failed - vleft <> 0");

  if (VAR_3 > 1)
    {

      for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 *(*VAR_2 + VAR_5) = *(VAR_10 + VAR_3 - 1 - VAR_5);
      *(*VAR_2 + VAR_3) = ((void*)0);
    }


  VAR_15 = FUNC_0 (VAR_14);
  if (VAR_15)
    FUNC_3 (VAR_15);

  if (VAR_4)
    return -2;
  else
    return VAR_3;
}
