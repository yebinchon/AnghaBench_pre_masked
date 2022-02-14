
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long lowaddr; scalar_t__ name; } ;
struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_4__ {scalar_t__ kind; } ;
union dnttentry {TYPE_3__ dfunc; TYPE_2__ ddocfunc; TYPE_1__ dblock; } ;
struct objfile {int dummy; } ;
struct minimal_symbol {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (struct minimal_symbol*) ;
 scalar_t__ FUNC_1 (struct objfile*) ;
 int FUNC_2 (int ) ;
 union dnttentry* FUNC_3 (int ,struct objfile*) ;
 union dnttentry* FUNC_4 (int ,struct objfile*) ;
 struct minimal_symbol* FUNC_5 (scalar_t__,int *,struct objfile*) ;

__attribute__((used)) static unsigned long
FUNC_6 (int VAR_3, int VAR_4, struct objfile *VAR_5,
      int VAR_6)
{
  union dnttentry *VAR_7 = ((void*)0);
  struct minimal_symbol *VAR_8;


  if (VAR_4 < VAR_6)
    {
      do
 {
   if (VAR_3)
     VAR_7 = FUNC_3 (VAR_4++, VAR_5);
   else
     VAR_7 = FUNC_4 (VAR_4++, VAR_5);
 }
      while (VAR_7->dblock.kind != VAR_2
      && VAR_7->dblock.kind != VAR_0
      && VAR_7->dblock.kind != VAR_1
      && VAR_4 < VAR_6);
    }




  FUNC_2 (VAR_7 != ((void*)0));



  if (VAR_7->dblock.kind == VAR_1)
    return 0;


  if (VAR_4 == VAR_6)
    return 0;


  if (VAR_7->dblock.kind == VAR_2)
    VAR_8 = FUNC_5 (VAR_7->dfunc.name + FUNC_1 (VAR_5), ((void*)0),
         VAR_5);
  else
    VAR_8 = FUNC_5 (VAR_7->ddocfunc.name + FUNC_1 (VAR_5), ((void*)0),
         VAR_5);

  if (VAR_8)
    return FUNC_0 (VAR_8);
  else
    return VAR_7->dfunc.lowaddr;
}
