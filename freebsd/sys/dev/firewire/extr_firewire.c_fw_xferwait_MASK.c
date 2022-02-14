
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtx {int dummy; } ;
struct fw_xfer {int flag; TYPE_1__* fc; } ;
struct TYPE_2__ {struct mtx wait_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_xfer*,struct mtx*,int,char*,int ) ;
 int FUNC_1 (struct mtx*) ;
 int FUNC_2 (struct mtx*) ;

int
FUNC_3(struct fw_xfer *VAR_3)
{
 struct mtx *VAR_4 = &VAR_3->fc->wait_lock;
 int VAR_5 = 0;

 FUNC_1(VAR_4);
 while ((VAR_3->flag & VAR_0) == 0)
  VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2|VAR_1, "fw_xferwait", 0);
 FUNC_2(VAR_4);

 return (VAR_5);
}
