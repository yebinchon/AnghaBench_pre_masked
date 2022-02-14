
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ window_size; int rd; int ldd; int dd; int ld; int bd; scalar_t__ last_write_ptr; scalar_t__ write_ptr; int * filtered_buf; int * window_buf; } ;
struct TYPE_3__ {scalar_t__ calculated_crc32; } ;
struct rar5 {TYPE_2__ cstate; TYPE_1__ file; } ;


 void* FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rar5*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rar5* VAR_0) {
 VAR_0->file.calculated_crc32 = 0;
 FUNC_2(VAR_0);

 FUNC_1(VAR_0->cstate.window_buf);
 FUNC_1(VAR_0->cstate.filtered_buf);

 if(VAR_0->cstate.window_size > 0) {
  VAR_0->cstate.window_buf = FUNC_0(1, VAR_0->cstate.window_size);
  VAR_0->cstate.filtered_buf = FUNC_0(1, VAR_0->cstate.window_size);
 } else {
  VAR_0->cstate.window_buf = ((void*)0);
  VAR_0->cstate.filtered_buf = ((void*)0);
 }

 VAR_0->cstate.write_ptr = 0;
 VAR_0->cstate.last_write_ptr = 0;

 FUNC_3(&VAR_0->cstate.bd, 0, sizeof(VAR_0->cstate.bd));
 FUNC_3(&VAR_0->cstate.ld, 0, sizeof(VAR_0->cstate.ld));
 FUNC_3(&VAR_0->cstate.dd, 0, sizeof(VAR_0->cstate.dd));
 FUNC_3(&VAR_0->cstate.ldd, 0, sizeof(VAR_0->cstate.ldd));
 FUNC_3(&VAR_0->cstate.rd, 0, sizeof(VAR_0->cstate.rd));
}
