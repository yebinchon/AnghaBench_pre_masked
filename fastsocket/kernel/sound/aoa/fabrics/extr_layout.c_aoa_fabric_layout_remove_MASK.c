
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct soundbus_dev {int pcmid; int * pcmname; TYPE_1__ ofdev; } ;
struct TYPE_8__ {TYPE_2__* methods; } ;
struct layout_dev {TYPE_3__ gpio; int sound; int list; int ** codecs; } ;
struct TYPE_7__ {int (* exit ) (TYPE_3__*) ;int (* set_notify ) (TYPE_3__*,int ,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct layout_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct layout_dev*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int *,int *) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct soundbus_dev *VAR_5)
{
 struct layout_dev *VAR_6 = FUNC_1(&VAR_5->ofdev.dev);
 int VAR_7;

 for (VAR_7=0; VAR_7<VAR_2; VAR_7++) {
  if (VAR_6->codecs[VAR_7]) {
   FUNC_0(VAR_6->codecs[VAR_7]);
  }
  VAR_6->codecs[VAR_7] = ((void*)0);
 }
 FUNC_3(&VAR_6->list);
 VAR_4--;
 FUNC_4(VAR_6->sound);

 VAR_6->gpio.methods->set_notify(&VAR_6->gpio,
           VAR_0,
           ((void*)0),
           ((void*)0));
 VAR_6->gpio.methods->set_notify(&VAR_6->gpio,
           VAR_1,
           ((void*)0),
           ((void*)0));

 VAR_6->gpio.methods->exit(&VAR_6->gpio);
 VAR_3 = ((void*)0);
 FUNC_2(VAR_6);
 VAR_5->pcmid = -1;
 VAR_5->pcmname = ((void*)0);
 return 0;
}
