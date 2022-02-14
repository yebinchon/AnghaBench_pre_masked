
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int bah; int bal; int len; int tail; int head; } ;
struct TYPE_4__ {int arq_spinlock; TYPE_1__ arq; } ;
struct i40e_hw {TYPE_2__ aq; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2)
{
 enum i40e_status_code VAR_3 = VAR_1;

 FUNC_0(&VAR_2->aq.arq_spinlock);

 if (VAR_2->aq.arq.count == 0) {
  VAR_3 = VAR_0;
  goto shutdown_arq_out;
 }


 FUNC_3(VAR_2, VAR_2->aq.arq.head, 0);
 FUNC_3(VAR_2, VAR_2->aq.arq.tail, 0);
 FUNC_3(VAR_2, VAR_2->aq.arq.len, 0);
 FUNC_3(VAR_2, VAR_2->aq.arq.bal, 0);
 FUNC_3(VAR_2, VAR_2->aq.arq.bah, 0);

 VAR_2->aq.arq.count = 0;


 FUNC_1(VAR_2);

shutdown_arq_out:
 FUNC_2(&VAR_2->aq.arq_spinlock);
 return VAR_3;
}
