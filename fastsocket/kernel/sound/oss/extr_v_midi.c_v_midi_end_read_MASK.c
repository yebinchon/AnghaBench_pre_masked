
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ intr_active; } ;
typedef TYPE_1__ vmidi_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int FUNC_0 (int VAR_2)
{
 vmidi_devc *VAR_3 = VAR_1[VAR_2]->devc;
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_3->intr_active = 0;
 return 0;
}
