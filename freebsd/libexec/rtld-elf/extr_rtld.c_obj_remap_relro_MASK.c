
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ relro_size; int path; int relro_page; } ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (char*,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(Obj_Entry *VAR_1, int VAR_2)
{

 if (VAR_1->relro_size > 0 && FUNC_1(VAR_1->relro_page, VAR_1->relro_size,
     VAR_2) == -1) {
  FUNC_0("%s: Cannot set relro protection to %#x: %s",
      VAR_1->path, VAR_2, FUNC_2(VAR_0));
  return (-1);
 }
 return (0);
}
