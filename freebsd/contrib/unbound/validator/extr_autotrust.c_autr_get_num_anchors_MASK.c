
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct val_anchors {int lock; TYPE_2__* autr; } ;
struct TYPE_3__ {size_t count; } ;
struct TYPE_4__ {TYPE_1__ probe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

size_t
FUNC_2(struct val_anchors* VAR_0)
{
 size_t VAR_1 = 0;
 if(!VAR_0)
  return 0;
 FUNC_0(&VAR_0->lock);
 if(VAR_0->autr)
  VAR_1 = VAR_0->autr->probe.count;
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
