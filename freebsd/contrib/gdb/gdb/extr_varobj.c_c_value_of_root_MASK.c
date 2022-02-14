
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct varobj {int error; TYPE_1__* root; } ;
struct value {int dummy; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {int exp; int frame; int * valid_block; struct varobj* rootvar; } ;


 scalar_t__ FUNC_0 (struct value*) ;
 struct frame_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct value**) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct value*) ;
 int FUNC_6 (struct frame_info*) ;

__attribute__((used)) static struct value *
FUNC_7 (struct varobj **VAR_0)
{
  struct value *VAR_1;
  struct varobj *VAR_2 = *VAR_0;
  struct frame_info *VAR_3;
  int VAR_4;


  if (VAR_2->root->rootvar != VAR_2)

    return ((void*)0);



  if (VAR_2->root->valid_block == ((void*)0))
    VAR_4 = 1;
  else
    {
      FUNC_4 ();
      VAR_3 = FUNC_1 (VAR_2->root->frame);
      VAR_4 = VAR_3 != ((void*)0);

      if (VAR_4)
 FUNC_6 (VAR_3);
    }

  if (VAR_4)
    {



      if (FUNC_2 (VAR_2->root->exp, &VAR_1))
 {
   if (FUNC_0 (VAR_1))
     {






       if (!FUNC_3 (VAR_1))
  VAR_2->error = 1;
       else
  VAR_2->error = 0;
     }
 }
      else
 VAR_2->error = 1;

      FUNC_5 (VAR_1);
      return VAR_1;
    }

  return ((void*)0);
}
