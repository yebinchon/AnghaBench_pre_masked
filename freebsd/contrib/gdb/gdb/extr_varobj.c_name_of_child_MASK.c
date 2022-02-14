
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct varobj {TYPE_2__* root; } ;
struct TYPE_4__ {TYPE_1__* lang; } ;
struct TYPE_3__ {char* (* name_of_child ) (struct varobj*,int) ;} ;


 char* FUNC_0 (struct varobj*,int) ;

__attribute__((used)) static char *
FUNC_1 (struct varobj *VAR_0, int VAR_1)
{
  return (*VAR_0->root->lang->name_of_child) (VAR_0, VAR_1);
}
