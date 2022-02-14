
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kvp_op_key; void (* kvp_op_init ) () ;int (* kvp_op_exec ) (struct hv_kvp_msg*,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 void FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(int VAR_3, void (*VAR_4)(void),
     int (*VAR_5)(struct hv_kvp_msg *, void *))
{
 int VAR_6 = 0;

 if (VAR_3 < 0 || VAR_3 >= VAR_0) {
  FUNC_0(VAR_1, "Operation key out of supported range\n");
  VAR_6 = -1;
  goto kvp_op_load_done;
 }

 VAR_2[VAR_3].kvp_op_key = VAR_3;
 VAR_2[VAR_3].kvp_op_init = VAR_4;
 VAR_2[VAR_3].kvp_op_exec = VAR_5;

 if (VAR_2[VAR_3].kvp_op_init != ((void*)0))
  VAR_2[VAR_3].kvp_op_init();

kvp_op_load_done:
 return(VAR_6);
}
