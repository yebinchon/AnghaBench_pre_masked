
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ac97_codec {TYPE_1__* driver; int list; } ;
struct TYPE_2__ {int (* remove ) (struct ac97_codec*,TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ac97_codec*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ac97_codec*,TYPE_1__*) ;

void FUNC_5(struct ac97_codec *VAR_1)
{


 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->list);
 FUNC_3(&VAR_0);




 if(VAR_1->driver)
  VAR_1->driver->remove(VAR_1, VAR_1->driver);
 FUNC_0(VAR_1);
}
