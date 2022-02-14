
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct varobj {void* obj_name; TYPE_2__* root; int value; int type; void* name; int format; } ;
struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;
struct block {int dummy; } ;
typedef enum varobj_type { ____Placeholder_varobj_type } varobj_type ;
typedef enum varobj_languages { ____Placeholder_varobj_languages } varobj_languages ;
struct TYPE_8__ {TYPE_1__* elts; } ;
struct TYPE_7__ {int use_selected_frame; struct varobj* rootvar; int lang; TYPE_3__* exp; int frame; int * valid_block; } ;
struct TYPE_6__ {scalar_t__ opcode; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct frame_info* VAR_3 ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct frame_info* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (char**,struct block*,int ,TYPE_3__**) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 struct block* FUNC_10 (struct frame_info*,int ) ;
 int FUNC_11 (struct frame_info*) ;
 int * VAR_5 ;
 int FUNC_12 (struct varobj*) ;
 int * VAR_6 ;
 struct cleanup* FUNC_13 (struct varobj*) ;
 struct varobj* FUNC_14 () ;
 int FUNC_15 (int ) ;
 void* FUNC_16 (char*,int ) ;
 int FUNC_17 (struct frame_info*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct varobj*) ;
 int FUNC_20 (struct varobj*) ;

struct varobj *
FUNC_21 (char *VAR_7,
        char *VAR_8, CORE_ADDR VAR_9, enum varobj_type VAR_10)
{
  struct varobj *VAR_11;
  struct frame_info *VAR_12;
  struct frame_info *VAR_13 = ((void*)0);
  struct block *VAR_14;
  struct cleanup *VAR_15;


  VAR_11 = FUNC_14 ();
  VAR_15 = FUNC_13 (VAR_11);

  if (VAR_8 != ((void*)0))
    {
      char *VAR_16;
      enum varobj_languages VAR_17;





      if ((VAR_10 == VAR_1) || (VAR_10 == VAR_2))
 VAR_12 = VAR_3;
      else






 VAR_12 = FUNC_5 (VAR_9);


      if (VAR_10 == VAR_2)
 VAR_11->root->use_selected_frame = 1;

      VAR_14 = ((void*)0);
      if (VAR_12 != ((void*)0))
 VAR_14 = FUNC_10 (VAR_12, 0);

      VAR_16 = VAR_8;
      VAR_5 = ((void*)0);


      if (!FUNC_8 (&VAR_16, VAR_14, 0, &VAR_11->root->exp))
 {
   return ((void*)0);
 }


      if (VAR_11->root->exp->elts[0].opcode == VAR_0)
 {
   FUNC_3 (VAR_15);
   FUNC_6 (VAR_4,
         "Attempt to use a type name as an expression.");
   return ((void*)0);
 }

      VAR_11->format = FUNC_19 (VAR_11);
      VAR_11->root->valid_block = VAR_5;
      VAR_11->name = FUNC_16 (VAR_8, FUNC_18 (VAR_8));





      if (VAR_12 != ((void*)0))
 {
   VAR_11->root->frame = FUNC_11 (VAR_12);
   VAR_13 = VAR_3;
   FUNC_17 (VAR_12);
 }




      if (FUNC_7 (VAR_11->root->exp, &VAR_11->value))
 {

   FUNC_15 (VAR_11->value);
   if (FUNC_0 (VAR_11->value))
     FUNC_9 (VAR_11->value);
 }
      else
 VAR_11->value = FUNC_4 (VAR_11->root->exp);

      VAR_11->type = FUNC_1 (VAR_11->value);


      VAR_17 = FUNC_20 (VAR_11);
      VAR_11->root->lang = VAR_6[VAR_17];


      VAR_11->root->rootvar = VAR_11;


      if (VAR_12 != ((void*)0))
 FUNC_17 (VAR_13);
    }




  if ((VAR_11 != ((void*)0)) && (VAR_7 != ((void*)0)))
    {
      VAR_11->obj_name = FUNC_16 (VAR_7, FUNC_18 (VAR_7));



      if (!FUNC_12 (VAR_11))
 {
   FUNC_3 (VAR_15);
   return ((void*)0);
 }
    }

  FUNC_2 (VAR_15);
  return VAR_11;
}
