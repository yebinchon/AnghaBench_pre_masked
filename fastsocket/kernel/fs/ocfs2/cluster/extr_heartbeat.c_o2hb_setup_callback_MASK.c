
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_callback_func {int hc_priority; int hc_type; int hc_magic; void* hc_data; int * hc_func; int hc_item; } ;
typedef int o2hb_cb_func ;
typedef enum o2hb_callback_type { ____Placeholder_o2hb_callback_type } o2hb_callback_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

void FUNC_1(struct o2hb_callback_func *VAR_1,
    enum o2hb_callback_type VAR_2,
    o2hb_cb_func *VAR_3,
    void *VAR_4,
    int VAR_5)
{
 FUNC_0(&VAR_1->hc_item);
 VAR_1->hc_func = VAR_3;
 VAR_1->hc_data = VAR_4;
 VAR_1->hc_priority = VAR_5;
 VAR_1->hc_type = VAR_2;
 VAR_1->hc_magic = VAR_0;
}
