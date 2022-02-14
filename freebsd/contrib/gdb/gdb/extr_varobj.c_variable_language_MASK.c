
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct varobj {TYPE_3__* root; } ;
typedef enum varobj_languages { ____Placeholder_varobj_languages } varobj_languages ;
struct TYPE_6__ {TYPE_2__* exp; } ;
struct TYPE_5__ {TYPE_1__* language_defn; } ;
struct TYPE_4__ {int la_language; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum varobj_languages
FUNC_0 (struct varobj *VAR_3)
{
  enum varobj_languages VAR_4;

  switch (VAR_3->root->exp->language_defn->la_language)
    {
    default:
    case 130:
      VAR_4 = VAR_0;
      break;
    case 129:
      VAR_4 = VAR_1;
      break;
    case 128:
      VAR_4 = VAR_2;
      break;
    }

  return VAR_4;
}
