
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sym_fw2a_scr {int data_out; int data_in; } ;
struct sym_fw {int dummy; } ;
typedef TYPE_1__* hcb_p ;
struct TYPE_4__ {scalar_t__ scripta0; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,struct sym_fw const*) ;

__attribute__((used)) static void
FUNC_2(hcb_p VAR_0, const struct sym_fw *VAR_1)
{
 struct sym_fw2a_scr *VAR_2;

 VAR_2 = (struct sym_fw2a_scr *) VAR_0->scripta0;




 FUNC_0(VAR_2->data_in, VAR_2->data_out);




 FUNC_1(VAR_0, VAR_1);
}
