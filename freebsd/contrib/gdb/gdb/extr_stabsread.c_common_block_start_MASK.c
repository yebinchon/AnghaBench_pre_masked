
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct objfile {int objfile_obstack; } ;
struct TYPE_3__ {int nsyms; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* VAR_3 ;
 int * FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;

void
FUNC_3 (char *VAR_5, struct objfile *VAR_6)
{
  if (VAR_2 != ((void*)0))
    {
      FUNC_0 (&VAR_4,
   "Invalid symbol data: common block within common block");
    }
  VAR_0 = VAR_3;
  VAR_1 = VAR_3 ? VAR_3->nsyms : 0;
  VAR_2 = FUNC_1 (VAR_5, FUNC_2 (VAR_5),
        &VAR_6->objfile_obstack);
}
