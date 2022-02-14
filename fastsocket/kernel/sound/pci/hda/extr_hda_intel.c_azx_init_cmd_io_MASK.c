
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ addr; int cmds; scalar_t__ rp; scalar_t__ wp; int * buf; } ;
struct TYPE_5__ {scalar_t__ area; scalar_t__ addr; } ;
struct TYPE_4__ {scalar_t__ addr; int * buf; } ;
struct azx {int driver_caps; int reg_lock; TYPE_3__ rirb; TYPE_2__ rb; TYPE_1__ corb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct azx*,int ,int) ;
 int FUNC_1 (struct azx*,int ,int ) ;
 int FUNC_2 (struct azx*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct azx *VAR_18)
{
 FUNC_4(&VAR_18->reg_lock);

 VAR_18->corb.addr = VAR_18->rb.addr;
 VAR_18->corb.buf = (u32 *)VAR_18->rb.area;
 FUNC_1(VAR_18, VAR_2, (u32)VAR_18->corb.addr);
 FUNC_1(VAR_18, VAR_5, FUNC_6(VAR_18->corb.addr));


 FUNC_0(VAR_18, VAR_4, 0x02);

 FUNC_2(VAR_18, VAR_6, 0);

 FUNC_2(VAR_18, VAR_3, VAR_8);

 FUNC_0(VAR_18, VAR_1, VAR_7);


 VAR_18->rirb.addr = VAR_18->rb.addr + 2048;
 VAR_18->rirb.buf = (u32 *)(VAR_18->rb.area + 2048);
 VAR_18->rirb.wp = VAR_18->rirb.rp = 0;
 FUNC_3(VAR_18->rirb.cmds, 0, sizeof(VAR_18->rirb.cmds));
 FUNC_1(VAR_18, VAR_14, (u32)VAR_18->rirb.addr);
 FUNC_1(VAR_18, VAR_16, FUNC_6(VAR_18->rirb.addr));


 FUNC_0(VAR_18, VAR_15, 0x02);

 FUNC_2(VAR_18, VAR_17, VAR_11);

 if (VAR_18->driver_caps & VAR_0)
  FUNC_2(VAR_18, VAR_12, 0xc0);
 else
  FUNC_2(VAR_18, VAR_12, 1);

 FUNC_0(VAR_18, VAR_13, VAR_9 | VAR_10);
 FUNC_5(&VAR_18->reg_lock);
}
