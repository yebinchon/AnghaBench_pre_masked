
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct struct_hw_sched {int * ipg; int * kbps; int pace_tab; int mode; int map; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_4 (struct adapter*,int,int *,int *,int) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_8(struct cudbg_init *VAR_4,
       struct cudbg_buffer *VAR_5,
       struct cudbg_error *VAR_6)
{
 struct adapter *VAR_7 = VAR_4->adap;
 struct cudbg_buffer VAR_8;
 struct struct_hw_sched *VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12 = 0;

 if (!VAR_7->params.vpd.cclk) {
  VAR_12 = VAR_2;
  goto err;
 }

 VAR_10 = sizeof(struct struct_hw_sched);
 VAR_12 = FUNC_2(VAR_5, VAR_10, &VAR_8);
 if (VAR_12)
  goto err;

 VAR_9 = (struct struct_hw_sched *) VAR_8.data;

 VAR_9->map = FUNC_6(VAR_7, VAR_1);
 VAR_9->mode = FUNC_0(FUNC_6(VAR_7, VAR_0));
 FUNC_5(VAR_7, VAR_9->pace_tab);

 for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
  FUNC_4(VAR_7, VAR_11, &VAR_9->kbps[VAR_11],
      &VAR_9->ipg[VAR_11], 1);
 }

 VAR_12 = FUNC_7(&VAR_8, VAR_5);
 if (VAR_12)
  goto err1;

 VAR_12 = FUNC_1(&VAR_8, VAR_5);
err1:
 FUNC_3(&VAR_8, VAR_5);
err:
 return VAR_12;
}
