
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int srcimap; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct TYPE_4__ {int srcaim; } ;
struct srcimp_mgr_ctrl_blk {TYPE_3__ dirty; TYPE_1__ srcimap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 struct srcimp_mgr_ctrl_blk *VAR_3 = VAR_1;

 FUNC_0(&VAR_3->srcimap.srcaim, VAR_0, VAR_2);
 VAR_3->dirty.bf.srcimap = 1;
 return 0;
}
