
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pa; } ;
struct TYPE_5__ {TYPE_1__ desc_buf; int bal; int tail; int bah; int len; int head; } ;
struct TYPE_6__ {int num_arq_entries; TYPE_2__ arq; } ;
struct i40e_hw {TYPE_3__ aq; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static enum i40e_status_code FUNC_5(struct i40e_hw *VAR_4)
{
 enum i40e_status_code VAR_5 = VAR_2;
 u32 VAR_6 = 0;


 FUNC_4(VAR_4, VAR_4->aq.arq.head, 0);
 FUNC_4(VAR_4, VAR_4->aq.arq.tail, 0);


 if (!FUNC_2(VAR_4))
  FUNC_4(VAR_4, VAR_4->aq.arq.len, (VAR_4->aq.num_arq_entries |
       VAR_1));
 if (FUNC_2(VAR_4))
  FUNC_4(VAR_4, VAR_4->aq.arq.len, (VAR_4->aq.num_arq_entries |
       VAR_3));
 FUNC_4(VAR_4, VAR_4->aq.arq.bal, FUNC_1(VAR_4->aq.arq.desc_buf.pa));
 FUNC_4(VAR_4, VAR_4->aq.arq.bah, FUNC_0(VAR_4->aq.arq.desc_buf.pa));


 FUNC_4(VAR_4, VAR_4->aq.arq.tail, VAR_4->aq.num_arq_entries - 1);


 VAR_6 = FUNC_3(VAR_4, VAR_4->aq.arq.bal);
 if (VAR_6 != FUNC_1(VAR_4->aq.arq.desc_buf.pa))
  VAR_5 = VAR_0;

 return VAR_5;
}
