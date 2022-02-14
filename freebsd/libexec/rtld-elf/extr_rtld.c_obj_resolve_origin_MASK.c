
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * origin_path; int path; } ;
typedef TYPE_1__ Obj_Entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(Obj_Entry *VAR_1)
{

 if (VAR_1->origin_path != ((void*)0))
  return (1);
 VAR_1->origin_path = FUNC_1(VAR_0);
 return (FUNC_0(VAR_1->path, VAR_1->origin_path) != -1);
}
