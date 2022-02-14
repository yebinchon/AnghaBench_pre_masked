
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtx {int dummy; } ;
struct fw_xfer {int flag; TYPE_1__* fc; } ;
struct TYPE_2__ {struct mtx wait_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtx*) ;
 int FUNC_1 (struct mtx*) ;
 int FUNC_2 (struct fw_xfer*) ;

void
FUNC_3(struct fw_xfer *VAR_1)
{
 struct mtx *VAR_2 = &VAR_1->fc->wait_lock;

 FUNC_0(VAR_2);
 VAR_1->flag |= VAR_0;
 FUNC_1(VAR_2);

 FUNC_2(VAR_1);
 return;
}
