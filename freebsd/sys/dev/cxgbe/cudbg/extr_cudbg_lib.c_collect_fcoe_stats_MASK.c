
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct struct_tp_fcoe_stats {int * stats; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {TYPE_1__* chip_params; } ;
struct TYPE_2__ {scalar_t__ nchan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,int,int *,int) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_1,
         struct cudbg_buffer *VAR_2,
         struct cudbg_error *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adap;
 struct cudbg_buffer VAR_5;
 struct struct_tp_fcoe_stats *VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_7 = sizeof(struct struct_tp_fcoe_stats);

 VAR_8 = FUNC_1(VAR_2, VAR_7, &VAR_5);
 if (VAR_8)
  goto err;

 VAR_6 = (struct struct_tp_fcoe_stats *) VAR_5.data;


 FUNC_3(VAR_4, 0, &VAR_6->stats[0], 1);
 FUNC_3(VAR_4, 1, &VAR_6->stats[1], 1);
 if (VAR_4->chip_params->nchan == VAR_0) {
  FUNC_3(VAR_4, 2, &VAR_6->stats[2], 1);
  FUNC_3(VAR_4, 3, &VAR_6->stats[3], 1);
 }


 VAR_8 = FUNC_4(&VAR_5, VAR_2);
 if (VAR_8)
  goto err1;

 VAR_8 = FUNC_0(&VAR_5, VAR_2);
err1:
 FUNC_2(&VAR_5, VAR_2);
err:
 return VAR_8;
}
