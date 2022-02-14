
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tp_params {int* tx_modq; void* err_vec_mask; int dack_re; int tre; } ;
struct TYPE_2__ {struct tp_params tp; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*,int ) ;

int FUNC_7(struct adapter *VAR_6, bool VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 struct tp_params *VAR_10 = &VAR_6->params.tp;

 VAR_9 = FUNC_6(VAR_6, VAR_1);
 VAR_10->tre = FUNC_1(VAR_9);
 VAR_10->dack_re = FUNC_0(VAR_9);


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_10->tx_modq[VAR_8] = VAR_8;

 FUNC_5(VAR_6, VAR_7);






 VAR_10->err_vec_mask = FUNC_4(0xffff);
 if (FUNC_3(VAR_6) > VAR_2) {
  VAR_9 = FUNC_6(VAR_6, VAR_0);
  if (VAR_9 & VAR_3) {
   VAR_10->err_vec_mask =
       FUNC_4(FUNC_2(VAR_5));
  }
 }

 return 0;
}
