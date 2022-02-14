
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap {int loaded; int objfile; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct vmap*) ;

int
FUNC_2 (struct vmap *VAR_2)
{
  if (FUNC_0 (VAR_1, VAR_2->objfile,
      "Error while reading shared library symbols:\n",
      VAR_0))
    {

      VAR_2->loaded = 1;
      FUNC_1 (VAR_2);
      return 1;
    }
  return 0;
}
