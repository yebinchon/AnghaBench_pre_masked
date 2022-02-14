
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ content_size; } ;
struct TYPE_4__ {TYPE_1__ generic; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void
FUNC_3 (void)
{
  FUNC_1 ((char *) ((void*)0));
  if (VAR_1->generic.content_size > 0)
    {
      int VAR_2 = FUNC_2 ();

      if (VAR_2 >= 0)
 FUNC_0 (VAR_2, VAR_0);
    }
}
