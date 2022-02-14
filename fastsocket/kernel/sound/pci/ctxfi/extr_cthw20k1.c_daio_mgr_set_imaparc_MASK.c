
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int daoimap; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct TYPE_4__ {int aim; } ;
struct daio_mgr_ctrl_blk {TYPE_3__ dirty; TYPE_1__ daoimap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 struct daio_mgr_ctrl_blk *VAR_3 = VAR_1;

 FUNC_0(&VAR_3->daoimap.aim, VAR_0, VAR_2);
 VAR_3->dirty.bf.daoimap = 1;
 return 0;
}
