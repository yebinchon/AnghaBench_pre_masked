
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_consumer {TYPE_1__* geom; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int provider; } ;


 int FUNC_0 (int,char*,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (struct g_consumer*) ;

__attribute__((used)) static void
FUNC_3(struct g_consumer *VAR_0)
{

 FUNC_0(1, "Label %s removed.",
     FUNC_1(&VAR_0->geom->provider)->name);
 FUNC_2(VAR_0);
}
