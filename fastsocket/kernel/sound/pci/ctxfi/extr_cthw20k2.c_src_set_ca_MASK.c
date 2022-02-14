
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ca; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct src_rsc_ctrl_blk {TYPE_2__ dirty; int ca; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 struct src_rsc_ctrl_blk *VAR_3 = VAR_1;

 FUNC_0(&VAR_3->ca, VAR_0, VAR_2);
 VAR_3->dirty.bf.ca = 1;
 return 0;
}
