
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
typedef int u_int ;
struct wrq_cookie {int dummy; } ;
struct cpl_set_tcb_field {void* val; void* mask; void* word_cookie; void* reply_ctrl; } ;
struct TYPE_3__ {int abs_id; } ;
struct TYPE_4__ {int * ctrlq; TYPE_1__ fwq; } ;
struct adapter {TYPE_2__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpl_set_tcb_field*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cpl_set_tcb_field*,int) ;
 int FUNC_6 (int *,struct cpl_set_tcb_field*,struct wrq_cookie*) ;
 int FUNC_7 (int,int) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int ) ;
 struct cpl_set_tcb_field* FUNC_10 (int *,int ,struct wrq_cookie*) ;

__attribute__((used)) static int
FUNC_11(struct adapter *VAR_3, u_int VAR_4, uint16_t VAR_5, uint64_t VAR_6,
    uint64_t VAR_7, int VAR_8)
{
 struct wrq_cookie VAR_9;
 struct cpl_set_tcb_field *VAR_10;

 VAR_10 = FUNC_10(&VAR_3->sge.ctrlq[0], FUNC_7(sizeof(*VAR_10), 16), &VAR_9);
 if (VAR_10 == ((void*)0))
  return (VAR_2);
 FUNC_5(VAR_10, sizeof(*VAR_10));
 FUNC_0(VAR_10, VAR_1, VAR_4);
 if (VAR_8 == 0) {
  VAR_10->reply_ctrl = FUNC_8(FUNC_3(VAR_3->sge.fwq.abs_id) |
      FUNC_2(0));
 } else
  VAR_10->reply_ctrl = FUNC_8(FUNC_2(1));
 VAR_10->word_cookie = FUNC_8(FUNC_4(VAR_5) | FUNC_1(VAR_0));
 VAR_10->mask = FUNC_9(VAR_6);
 VAR_10->val = FUNC_9(VAR_7);
 FUNC_6(&VAR_3->sge.ctrlq[0], VAR_10, &VAR_9);

 return (0);
}
