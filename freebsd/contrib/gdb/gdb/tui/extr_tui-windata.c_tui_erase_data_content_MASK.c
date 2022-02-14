
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int handle; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5 (char *VAR_1)
{
  FUNC_3 (VAR_0->generic.handle);
  FUNC_2 (VAR_0);
  if (VAR_1 != (char *) ((void*)0))
    {
      int VAR_2 = (VAR_0->generic.width - 2) / 2;
      int VAR_3;

      if (FUNC_1 (VAR_1) >= VAR_2)
 VAR_3 = 1;
      else
 VAR_3 = VAR_2 - FUNC_1 (VAR_1);
      FUNC_0 (VAR_0->generic.handle,
   (VAR_0->generic.height / 2),
   VAR_3,
   VAR_1);
    }
  FUNC_4 (VAR_0->generic.handle);
}
