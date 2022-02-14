
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ redir_flags; int redir_type; int b2state; } ;
struct TYPE_5__ {scalar_t__ last_unstore_ptr; scalar_t__ last_write_ptr; scalar_t__ write_ptr; scalar_t__ solid_offset; } ;
struct TYPE_4__ {scalar_t__ solid; } ;
struct rar5 {TYPE_3__ file; TYPE_2__ cstate; TYPE_1__ main; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct rar5*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rar5* VAR_1) {
 FUNC_2(&VAR_1->file, 0, sizeof(VAR_1->file));
 FUNC_0(&VAR_1->file.b2state, 32);

 if(VAR_1->main.solid) {
  VAR_1->cstate.solid_offset += VAR_1->cstate.write_ptr;
 } else {
  VAR_1->cstate.solid_offset = 0;
 }

 VAR_1->cstate.write_ptr = 0;
 VAR_1->cstate.last_write_ptr = 0;
 VAR_1->cstate.last_unstore_ptr = 0;

 VAR_1->file.redir_type = VAR_0;
 VAR_1->file.redir_flags = 0;

 FUNC_1(VAR_1);
}
