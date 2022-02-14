
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_11__ {int bus; } ;
struct TYPE_10__ {void (* release ) (struct device*) ;TYPE_3__* driver; int parent; int bus; } ;
struct TYPE_9__ {int (* iucv_register ) (int *,int ) ;int (* iucv_unregister ) (int *,int ) ;int root; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_4 (int,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_7;

 VAR_7 = VAR_6->iucv_register(&VAR_4, 0);
 if (VAR_7)
  goto out;

 VAR_3.bus = VAR_6->bus;
 VAR_7 = FUNC_2(&VAR_3);
 if (VAR_7)
  goto out_iucv;
 VAR_2 = FUNC_4(sizeof(struct device), VAR_1);
 if (!VAR_2) {
  VAR_7 = -VAR_0;
  goto out_driver;
 }
 FUNC_0(VAR_2, "af_iucv");
 VAR_2->bus = VAR_6->bus;
 VAR_2->parent = VAR_6->root;
 VAR_2->release = (void (*)(struct device *))VAR_5;
 VAR_2->driver = &VAR_3;
 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7)
  goto out_driver;
 return 0;

out_driver:
 FUNC_3(&VAR_3);
out_iucv:
 VAR_6->iucv_unregister(&VAR_4, 0);
out:
 return VAR_7;
}
