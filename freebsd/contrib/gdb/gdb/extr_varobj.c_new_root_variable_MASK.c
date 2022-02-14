
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj_root {int * rootvar; scalar_t__ use_selected_frame; int frame; int * valid_block; int * exp; int * lang; } ;
struct varobj {struct varobj_root* root; } ;


 struct varobj* FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct varobj *
FUNC_2 (void)
{
  struct varobj *VAR_1 = FUNC_0 ();
  VAR_1->root = (struct varobj_root *) FUNC_1 (sizeof (struct varobj_root));;
  VAR_1->root->lang = ((void*)0);
  VAR_1->root->exp = ((void*)0);
  VAR_1->root->valid_block = ((void*)0);
  VAR_1->root->frame = VAR_0;
  VAR_1->root->use_selected_frame = 0;
  VAR_1->root->rootvar = ((void*)0);

  return VAR_1;
}
